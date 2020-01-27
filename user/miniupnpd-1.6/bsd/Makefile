# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/bsd/Makefile#1 $
# made for GNU Make
CFLAGS = -Wall -g
EXECUTABLES = testgetifstats testifacewatcher

all:	$(EXECUTABLES)

clean:
	rm -f *.o $(EXECUTABLES)

testobsdrdr.o:	testobsdrdr.c obsdrdr.h

testgetifstats:	testgetifstats.o getifstats.o
	$(CC) $(CFLAGS) -o $@ $> -lkvm

testifacewatcher:	testifacewatcher.o ifacewatcher.o upnputils.o
	$(CC) $(CFLAGS) -o $@ $>

upnputils.o:	../upnputils.c

