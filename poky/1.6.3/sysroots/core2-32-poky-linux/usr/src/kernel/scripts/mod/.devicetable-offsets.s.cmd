cmd_scripts/mod/devicetable-offsets.s := i586-poky-linux-gcc -Wp,-MD,scripts/mod/.devicetable-offsets.s.d  -nostdinc -isystem /opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/i586-poky-linux/gcc/i586-poky-linux/4.8.2/include -I/opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/include/uapi -Iinclude/generated/uapi -include /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -m32 -msoft-float -mregparm=3 -freg-struct-return -mno-mmx -mno-sse -fno-pic -mpreferred-stack-boundary=2 -march=i686 -mtune=core2 -maccumulate-outgoing-args -Wa,-mtune=generic32 -ffreestanding -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(devicetable_offsets)"  -D"KBUILD_MODNAME=KBUILD_STR(devicetable_offsets)" -fverbose-asm -S -o scripts/mod/devicetable-offsets.s scripts/mod/devicetable-offsets.c

source_scripts/mod/devicetable-offsets.s := scripts/mod/devicetable-offsets.c

deps_scripts/mod/devicetable-offsets.s := \
  include/linux/kbuild.h \
  include/linux/mod_devicetable.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/uapi/asm/types.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/x86/32.h) \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/uapi/asm/posix_types_32.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/include/uapi/asm-generic/posix_types.h \
  include/linux/uuid.h \
  include/uapi/linux/uuid.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /opt/poky/1.6.3/sysroots/x86_64-pokysdk-linux/usr/lib/i586-poky-linux/gcc/i586-poky-linux/4.8.2/include/stdarg.h \
  include/uapi/linux/string.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/asm/string.h \
  /opt/poky/1.6.3/sysroots/core2-32-poky-linux/usr/src/kernel/arch/x86/include/asm/string_32.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/kmemcheck.h) \

scripts/mod/devicetable-offsets.s: $(deps_scripts/mod/devicetable-offsets.s)

$(deps_scripts/mod/devicetable-offsets.s):
