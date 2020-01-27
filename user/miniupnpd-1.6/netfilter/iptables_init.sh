#! /bin/sh
# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/netfilter/iptables_init.sh#1 $
IPTABLES=iptables

#change this parameters :
EXTIF=$1

#adding the MINIUPNPD chain for nat
$IPTABLES -t nat -N MINIUPNPD
#adding the rule to MINIUPNPD
$IPTABLES -t nat -A PREROUTING -i $EXTIF -j MINIUPNPD

#adding the MINIUPNPD chain for filter
$IPTABLES -t filter -N MINIUPNPD
#adding the rule to MINIUPNPD
$IPTABLES -t filter -A FORWARD -i $EXTIF ! -o $EXTIF -j MINIUPNPD

