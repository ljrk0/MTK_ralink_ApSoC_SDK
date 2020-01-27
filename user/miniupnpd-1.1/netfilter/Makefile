# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.1/netfilter/Makefile#1 $
CFLAGS=-Wall -g

all:	iptcrdr.o testiptcrdr

clean:
	$(RM) *.o testiptcrdr

testiptcrdr:	testiptcrdr.o iptcrdr.o -liptc

iptcrdr.o:	iptcrdr.c iptcrdr.h

