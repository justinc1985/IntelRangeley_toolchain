/*
 * Copyright (c) 1990 - 1993, Julianne Frances Haugh
 * Copyright (c) 1996 - 2000, Marek Michałkiewicz
 * Copyright (c) 2005       , Tomasz Kłoczko
 * Copyright (c) 2007 - 2008, Nicolas François
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the copyright holders or contributors may not be used to
 *    endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
 * HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <config.h>

#ident "$Id: encrypt.c 2849 2009-04-30 21:08:49Z nekral-guest $"

#include <unistd.h>
#include <stdio.h>

#include "prototypes.h"
#include "defines.h"

char *pw_encrypt (const char *clear, const char *salt)
{
	static char cipher[128];
	char *cp;

 	cp = crypt (clear, salt);
 	if (!cp) {
 		/*
		 * In glibc-2.17 and newer, crypt() will return NULL if
		 * it was called using an invalid salt format.  Previous
		 * versions of glibc would go ahead and compute a DES hash
		 * using the invalid salt.  The salt value in this case was
		 * always '!'.  We might arrive at this place if either the
		 * user does not exist, or if the hash in /etc/shadow doesn't
		 * have the proper magic for one of the supported hash
		 * formats (for example, if the account was locked using
		 * "passwd -l".  To handle this situation, we will recompute
		 * the hash using a hardcoded salt as was previously done
		 * by glibc.  The hash returned by the old glibc function
		 * always began with "!!", which would ensure that it could
		 * never match an otherwise valid hash in /etc/shadow that
		 * was disabled with a "!" at the beginning (since the second
		 * character would never be "!" as well), so we will also
		 * prepend the resulting hash with "!!".  Finally, in case
		 * crypt() failed for some other reason we will check to see
		 * if we still get NULL from crypt even with the valid salt
		 * and will fail if that's the case.
 		 */

		/* Recalculate hash using a hardcoded, valid SHA512 salt: */
		cp = crypt (clear, "$6$8IIcy/1EPOk/");

		if (!cp) {
			perror ("crypt");
			exit (EXIT_FAILURE);
		} else {
			sprintf (cipher, "!!%s", cp);
			return cipher;
		}
	}

	/* The GNU crypt does not return NULL if the algorithm is not
	 * supported, and return a DES encrypted password. */
	if ((NULL != salt) && (salt[0] == '$') && (strlen (cp) <= 13))
	{
		const char *method;
		switch (salt[1])
		{
			case '1':
				method = "MD5";
				break;
			case '5':
				method = "SHA256";
				break;
			case '6':
				method = "SHA512";
				break;
			default:
			{
				static char nummethod[4] = "$x$";
				nummethod[1] = salt[1];
				method = &nummethod[0];
			}
		}
		fprintf (stderr,
			 _("crypt method not supported by libcrypt? (%s)\n"),
			  method);
		exit (EXIT_FAILURE);
	}

	if (strlen (cp) != 13) {
		return cp;	/* nonstandard crypt() in libc, better bail out */
	}

	strcpy (cipher, cp);

	return cipher;
}

