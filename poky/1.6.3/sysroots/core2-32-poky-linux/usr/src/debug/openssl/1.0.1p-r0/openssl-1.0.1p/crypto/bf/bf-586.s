.file	"bf-586.s"
.text
.globl	BF_encrypt
.type	BF_encrypt,@function
.align	16
BF_encrypt:
.L_BF_encrypt_begin:

	pushl	%ebp
	pushl	%ebx
	movl	12(%esp),%ebx
	movl	16(%esp),%ebp
	pushl	%esi
	pushl	%edi

	movl	(%ebx),%edi
	movl	4(%ebx),%esi
	xorl	%eax,%eax
	movl	(%ebp),%ebx
	xorl	%ecx,%ecx
	xorl	%ebx,%edi


	movl	4(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	8(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	12(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	16(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	20(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	24(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	28(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	32(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	36(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	40(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	44(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	48(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	52(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	56(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	60(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	64(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx

	movl	20(%esp),%eax
	xorl	%ebx,%edi
	movl	68(%ebp),%edx
	xorl	%edx,%esi
	movl	%edi,4(%eax)
	movl	%esi,(%eax)
	popl	%edi
	popl	%esi
	popl	%ebx
	popl	%ebp
	ret
.size	BF_encrypt,.-.L_BF_encrypt_begin
.globl	BF_decrypt
.type	BF_decrypt,@function
.align	16
BF_decrypt:
.L_BF_decrypt_begin:

	pushl	%ebp
	pushl	%ebx
	movl	12(%esp),%ebx
	movl	16(%esp),%ebp
	pushl	%esi
	pushl	%edi

	movl	(%ebx),%edi
	movl	4(%ebx),%esi
	xorl	%eax,%eax
	movl	68(%ebp),%ebx
	xorl	%ecx,%ecx
	xorl	%ebx,%edi


	movl	64(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	60(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	56(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	52(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	48(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	44(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	40(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	36(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	32(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	28(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	24(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	20(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	16(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	12(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%edi


	movl	8(%ebp),%edx
	movl	%edi,%ebx
	xorl	%edx,%esi
	shrl	$16,%ebx
	movl	%edi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx
	xorl	%eax,%eax
	xorl	%ebx,%esi


	movl	4(%ebp),%edx
	movl	%esi,%ebx
	xorl	%edx,%edi
	shrl	$16,%ebx
	movl	%esi,%edx
	movb	%bh,%al
	andl	$255,%ebx
	movb	%dh,%cl
	andl	$255,%edx
	movl	72(%ebp,%eax,4),%eax
	movl	1096(%ebp,%ebx,4),%ebx
	addl	%eax,%ebx
	movl	2120(%ebp,%ecx,4),%eax
	xorl	%eax,%ebx
	movl	3144(%ebp,%edx,4),%edx
	addl	%edx,%ebx

	movl	20(%esp),%eax
	xorl	%ebx,%edi
	movl	(%ebp),%edx
	xorl	%edx,%esi
	movl	%edi,4(%eax)
	movl	%esi,(%eax)
	popl	%edi
	popl	%esi
	popl	%ebx
	popl	%ebp
	ret
.size	BF_decrypt,.-.L_BF_decrypt_begin
.globl	BF_cbc_encrypt
.type	BF_cbc_encrypt,@function
.align	16
BF_cbc_encrypt:
.L_BF_cbc_encrypt_begin:

	pushl	%ebp
	pushl	%ebx
	pushl	%esi
	pushl	%edi
	movl	28(%esp),%ebp

	movl	36(%esp),%ebx
	movl	(%ebx),%esi
	movl	4(%ebx),%edi
	pushl	%edi
	pushl	%esi
	pushl	%edi
	pushl	%esi
	movl	%esp,%ebx
	movl	36(%esp),%esi
	movl	40(%esp),%edi

	movl	56(%esp),%ecx

	movl	48(%esp),%eax
	pushl	%eax
	pushl	%ebx
	cmpl	$0,%ecx
	jz	.L000decrypt
	andl	$4294967288,%ebp
	movl	8(%esp),%eax
	movl	12(%esp),%ebx
	jz	.L001encrypt_finish
.L002encrypt_loop:
	movl	(%esi),%ecx
	movl	4(%esi),%edx
	xorl	%ecx,%eax
	xorl	%edx,%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,8(%esp)
	movl	%ebx,12(%esp)
	call	.L003pic_point0
.L003pic_point0:
	popl	%ebx
	addl	$_GLOBAL_OFFSET_TABLE_+[.-.L003pic_point0],%ebx
	call	BF_encrypt@PLT
	movl	8(%esp),%eax
	movl	12(%esp),%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,(%edi)
	movl	%ebx,4(%edi)
	addl	$8,%esi
	addl	$8,%edi
	subl	$8,%ebp
	jnz	.L002encrypt_loop
.L001encrypt_finish:
	movl	52(%esp),%ebp
	andl	$7,%ebp
	jz	.L004finish
	call	.L005PIC_point
.L005PIC_point:
	popl	%edx
	leal	.L006cbc_enc_jmp_table-.L005PIC_point(%edx),%ecx
	movl	(%ecx,%ebp,4),%ebp
	addl	%edx,%ebp
	xorl	%ecx,%ecx
	xorl	%edx,%edx
	jmp	*%ebp
.L007ej7:
	movb	6(%esi),%dh
	shll	$8,%edx
.L008ej6:
	movb	5(%esi),%dh
.L009ej5:
	movb	4(%esi),%dl
.L010ej4:
	movl	(%esi),%ecx
	jmp	.L011ejend
.L012ej3:
	movb	2(%esi),%ch
	shll	$8,%ecx
.L013ej2:
	movb	1(%esi),%ch
.L014ej1:
	movb	(%esi),%cl
.L011ejend:
	xorl	%ecx,%eax
	xorl	%edx,%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,8(%esp)
	movl	%ebx,12(%esp)
	call	.L015pic_point1
.L015pic_point1:
	popl	%ebx
	addl	$_GLOBAL_OFFSET_TABLE_+[.-.L015pic_point1],%ebx
	call	BF_encrypt@PLT
	movl	8(%esp),%eax
	movl	12(%esp),%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,(%edi)
	movl	%ebx,4(%edi)
	jmp	.L004finish
.L000decrypt:
	andl	$4294967288,%ebp
	movl	16(%esp),%eax
	movl	20(%esp),%ebx
	jz	.L016decrypt_finish
.L017decrypt_loop:
	movl	(%esi),%eax
	movl	4(%esi),%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,8(%esp)
	movl	%ebx,12(%esp)
	call	.L018pic_point2
.L018pic_point2:
	popl	%ebx
	addl	$_GLOBAL_OFFSET_TABLE_+[.-.L018pic_point2],%ebx
	call	BF_decrypt@PLT
	movl	8(%esp),%eax
	movl	12(%esp),%ebx
	bswap	%eax
	bswap	%ebx
	movl	16(%esp),%ecx
	movl	20(%esp),%edx
	xorl	%eax,%ecx
	xorl	%ebx,%edx
	movl	(%esi),%eax
	movl	4(%esi),%ebx
	movl	%ecx,(%edi)
	movl	%edx,4(%edi)
	movl	%eax,16(%esp)
	movl	%ebx,20(%esp)
	addl	$8,%esi
	addl	$8,%edi
	subl	$8,%ebp
	jnz	.L017decrypt_loop
.L016decrypt_finish:
	movl	52(%esp),%ebp
	andl	$7,%ebp
	jz	.L004finish
	movl	(%esi),%eax
	movl	4(%esi),%ebx
	bswap	%eax
	bswap	%ebx
	movl	%eax,8(%esp)
	movl	%ebx,12(%esp)
	call	.L019pic_point3
.L019pic_point3:
	popl	%ebx
	addl	$_GLOBAL_OFFSET_TABLE_+[.-.L019pic_point3],%ebx
	call	BF_decrypt@PLT
	movl	8(%esp),%eax
	movl	12(%esp),%ebx
	bswap	%eax
	bswap	%ebx
	movl	16(%esp),%ecx
	movl	20(%esp),%edx
	xorl	%eax,%ecx
	xorl	%ebx,%edx
	movl	(%esi),%eax
	movl	4(%esi),%ebx
.L020dj7:
	rorl	$16,%edx
	movb	%dl,6(%edi)
	shrl	$16,%edx
.L021dj6:
	movb	%dh,5(%edi)
.L022dj5:
	movb	%dl,4(%edi)
.L023dj4:
	movl	%ecx,(%edi)
	jmp	.L024djend
.L025dj3:
	rorl	$16,%ecx
	movb	%cl,2(%edi)
	shll	$16,%ecx
.L026dj2:
	movb	%ch,1(%esi)
.L027dj1:
	movb	%cl,(%esi)
.L024djend:
	jmp	.L004finish
.L004finish:
	movl	60(%esp),%ecx
	addl	$24,%esp
	movl	%eax,(%ecx)
	movl	%ebx,4(%ecx)
	popl	%edi
	popl	%esi
	popl	%ebx
	popl	%ebp
	ret
.align	64
.L006cbc_enc_jmp_table:
.long	0
.long	.L014ej1-.L005PIC_point
.long	.L013ej2-.L005PIC_point
.long	.L012ej3-.L005PIC_point
.long	.L010ej4-.L005PIC_point
.long	.L009ej5-.L005PIC_point
.long	.L008ej6-.L005PIC_point
.long	.L007ej7-.L005PIC_point
.align	64
.size	BF_cbc_encrypt,.-.L_BF_cbc_encrypt_begin
