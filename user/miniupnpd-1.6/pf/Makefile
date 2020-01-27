# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/pf/Makefile#1 $
# made for GNU Make (and BSD make)
CFLAGS = -Wall -g -DTEST
EXECUTABLES = testobsdrdr

all:	$(EXECUTABLES)

clean:
	rm -f *.o $(EXECUTABLES)

testobsdrdr:	testobsdrdr.o obsdrdr.o
	$(CC) $(CFLAGS) -o $@ $>

obsdrdr.o:	obsdrdr.c obsdrdr.h

testobsdrdr.o:	testobsdrdr.c obsdrdr.h

