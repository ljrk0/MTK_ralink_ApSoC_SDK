#
# Makefile for totd
#
# <$Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/totd-1.5/Makefile#1 $>
#

CFLAGS += -Werror -Wall -DSCOPED_REWRITE -DUSE_INET4 -DUSE_INET6 

PROG = totd
SRCS =  request.c response.c context.c ne_mesg.c conv_trick.c ev_tcp.c forward.c queue.c \
	read_config.c tcp_request.c tcp_response.c ev_dup.c list.c res_record.c udp_request.c \
	ev_timeout.c udp_response.c ev_signal.c ev_udp_in.c ne_io.c conv_scoped.c conv_stf.c \
	strlcpy.c strlcat.c daemon.c inet_aton.c html.c
SRCS += ${PROG}.c
INCLUDES = config.h macros.h protos.h totd.h tot_constants.h tot_types.h
OBJS = $(SRCS:.c=.o)

all: $(PROG)

${PROG}: ${OBJS} ${INCLUDES}
	${CC} ${LDFLAGS} -o ${PROG} ${OBJS} ${LDADD}

romfs:
	$(ROMFSINST) /sbin/${PROG}
	$(ROMFSINST) /etc_ro/totd.conf

clean:	
	-rm -f core *.core *~ $(PROG) $(OBJS)

