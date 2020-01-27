# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/ipfw/Makefile#1 $
CC=gcc
CFLAGS=-Wall -g -I.
RM=rm -f

all:	testipfwrdr

clean:
	$(RM) *.o testipfwrdr

testipfwrdr:	testipfwrdr.o ipfwrdr.o
	$(CC) -o $@ $^

ipfwrdr.o:	ipfwrdr.c

testipfwrdr.o:	testipfwrdr.c

