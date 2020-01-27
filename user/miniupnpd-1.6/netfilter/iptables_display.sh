#! /bin/sh
# $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.6/netfilter/iptables_display.sh#1 $
IPTABLES=/sbin/iptables

#display all chains relative to miniupnpd
$IPTABLES -v -n -t nat -L PREROUTING
$IPTABLES -v -n -t nat -L MINIUPNPD
$IPTABLES -v -n -t filter -L FORWARD
$IPTABLES -v -n -t filter -L MINIUPNPD

