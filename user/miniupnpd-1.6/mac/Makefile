# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/mac/Makefile#1 $
# made for GNU Make
CFLAGS = -Wall -g
EXECUTABLES = testgetifstats

all:	$(EXECUTABLES)

clean:
	rm -f *.o $(EXECUTABLES)

testmacrdr.o:	testmacrdr.c macrdr.h

testgetifstats:	testgetifstats.o getifstats.o

