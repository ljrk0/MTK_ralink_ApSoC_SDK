# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/ipf/Makefile#1 $
CC=gcc
CFLAGS=-Wall -g -I.

all:	testipfrdr

clean:
	rm *.o testipfrdr

testipfrdr:	testipfrdr.o ipfrdr.o
	$(CC) -o $@ $^

ipfrdr.o:	ipfrdr.c

testipfrdr.o:	testipfrdr.c

