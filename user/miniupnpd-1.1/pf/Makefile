# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.1/pf/Makefile#1 $
# made for GNU Make
CFLAGS = -Wall -g
EXECUTABLES = testobsdrdr

all:	$(EXECUTABLES)

clean:
	rm -f *.o $(EXECUTABLES)

testobsdrdr:	testobsdrdr.o obsdrdr.o

obsdrdr.o:	obsdrdr.c obsdrdr.h

testobsdrdr.o:	testobsdrdr.c obsdrdr.h

