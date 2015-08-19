# This file was created by configpm when Perl was built. Any changes
# made to this file will be lost the next time perl is built.

# for a description of the variables, please have a look at the
# Glossary file, as written in the Porting folder, or use the url:
# http://perl5.git.perl.org/perl.git/blob/HEAD:/Porting/Glossary

package Config;
use strict;
use warnings;
use vars '%Config';

# Skip @Config::EXPORT because it only contains %Config, which we special
# case below as it's not a function. @Config::EXPORT won't change in the
# lifetime of Perl 5.
my %Export_Cache = (myconfig => 1, config_sh => 1, config_vars => 1,
		    config_re => 1, compile_date => 1, local_patches => 1,
		    bincompat_options => 1, non_bincompat_options => 1,
		    header_files => 1);

@Config::EXPORT = qw(%Config);
@Config::EXPORT_OK = keys %Export_Cache;

# Need to stub all the functions to make code such as print Config::config_sh
# keep working

sub bincompat_options;
sub compile_date;
sub config_re;
sub config_sh;
sub config_vars;
sub header_files;
sub local_patches;
sub myconfig;
sub non_bincompat_options;

# Define our own import method to avoid pulling in the full Exporter:
sub import {
    shift;
    @_ = @Config::EXPORT unless @_;

    my @funcs = grep $_ ne '%Config', @_;
    my $export_Config = @funcs < @_ ? 1 : 0;

    no strict 'refs';
    my $callpkg = caller(0);
    foreach my $func (@funcs) {
	die qq{"$func" is not exported by the Config module\n}
	    unless $Export_Cache{$func};
	*{$callpkg.'::'.$func} = \&{$func};
    }

    *{"$callpkg\::Config"} = \%Config if $export_Config;
    return;
}

die "Perl lib version (5.14.3) doesn't match executable '$0' version ($])"
    unless $^V;

$^V eq 5.14.3
    or die "Perl lib version (5.14.3) doesn't match executable '$0' version (" .
	sprintf("v%vd",$^V) . ")";


sub FETCH {
    my($self, $key) = @_;

    # check for cached value (which may be undef so we use exists not defined)
    return exists $self->{$key} ? $self->{$key} : $self->fetch_string($key);
}

sub TIEHASH {
    bless $_[1], $_[0];
}

sub DESTROY { }

sub AUTOLOAD {
    require 'Config_heavy.pl';
    goto \&launcher unless $Config::AUTOLOAD =~ /launcher$/;
    die "&Config::AUTOLOAD failed on $Config::AUTOLOAD";
}

# tie returns the object, so the value returned to require will be true.
tie %Config, 'Config', {
    ar => 'x86_64-pokysdk-linux-ar',
    archlibexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/5.14.3/',
    archname => 'x86_64-linux',
    cc => 'x86_64-pokysdk-linux-gcc  ',
    cccdlflags => '-fPIC',
    ccdlflags => '-Wl,-E -Wl,-rpath,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/5.14.3//CORE',
    d_flexfnam => 'define',
    d_link => 'define',
    d_readlink => 'define',
    d_symlink => 'define',
    dlext => 'so',
    dlsrc => 'dl_dlopen.xs',
    dont_use_nlink => undef,
    eunicefix => ':',
    exe_ext => '',
    full_ar => 'x86_64-pokysdk-linux/x86_64-pokysdk-linux-ar',
    inc_version_list => ' ',
    installman1dir => '',
    installman3dir => '',
    installprivlib => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/5.14.3',
    installscript => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/bin',
    installsitearch => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/site_perl/5.14.3/',
    installsitebin => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/bin',
    installsiteman1dir => '',
    installsiteman3dir => '',
    installvendorman1dir => '',
    installvendorman3dir => '',
    intsize => '4',
    ld => 'x86_64-pokysdk-linux-gcc  ',
    lddlflags => '-L/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-rpath-link,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-rpath,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-O1 -L/home/justinc/poky/build/tmp/sysroots/x86_64-nativesdk-pokysdk-linux/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-rpath-link,/home/justinc/poky/build/tmp/sysroots/x86_64-nativesdk-pokysdk-linux/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-rpath,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-O1 -fstack-protector -shared',
    ldflags => '-L/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-rpath-link,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-rpath,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib -Wl,-O1 -L/home/justinc/poky/build/tmp/sysroots/x86_64-nativesdk-pokysdk-linux/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-rpath-link,/home/justinc/poky/build/tmp/sysroots/x86_64-nativesdk-pokysdk-linux/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-rpath,/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib -Wl,-O1 -fstack-protector',
    ldlibpthname => 'LD_LIBRARY_PATH',
    lib_ext => '.a',
    libc => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib/libc-2.12.1.so',
    libpth => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/lib /opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib',
    obj_ext => '.o',
    osname => 'linux',
    osvers => '2.6.37-rc5-yocto-standard+',
    path_sep => ':',
    privlibexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/5.14.3',
    ranlib => ':',
    scriptdir => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/bin',
    sitearchexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/site_perl/5.14.3/',
    sitelibexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/site_perl/5.14.3',
    so => 'so',
    useithreads => 'define',
    usevendorprefix => 'define',
    vendorarchexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/vendor_perl/5.14.3/',
    vendorlibexp => '/opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/perl/vendor_perl/5.14.3',
    version => '5.14.3',
};
