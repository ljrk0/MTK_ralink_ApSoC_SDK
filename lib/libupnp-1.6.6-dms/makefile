TOPDIR=../
include $(TOPDIR)Rules.mak

CONFOPTS= --host=mipsel-linux

LIB_LDFLAGS := $(subst -z defs,,$(LDFLAGS))


# upnp
LIBUPNP_A= libupnp.a

# ixml
LIBIXML_A= libixml.a

# threadutil
LIBTHREADUTIL_A= libthreadutil.a


all: Makefile
	make -f Makefile all
	cp upnp/.libs/$(LIBUPNP_A) $(TOPDIR)/lib/libupnp166.a
	cp ixml/.libs/$(LIBIXML_A) $(TOPDIR)/lib/libixml166.a
	cp threadutil/.libs/$(LIBTHREADUTIL_A) $(TOPDIR)/lib/libthreadutil166.a

Makefile:
	AR= AS= CC=$(CONFIG_CROSS_COMPILER_PATH)/mipsel-linux-gcc CFLAGS= CROSS= CROSS_COMPILE= CXX= HOSTCC= LD=$(CONFIG_CROSS_COMPILER_PATH)/mipsel-linux-ld OBJCOPY= RANLIB= STRIP= GCC_DIR= ./configure $(CONFOPTS)

# the is a proxy section --YY
all-recursive: Makefile
	make -f Makefile all-recursive

# the is a proxy section --YY
all-am: Makefile
	make -f Makefile all-am

# the is a proxy section --YY
clean-am: Makefile
	make -f Makefile clean-am

clean: Makefile
	rm -rf *.so *.a
	make -f Makefile clean
	find ./ -name Makefile -exec rm -f {} \;

romfs:

