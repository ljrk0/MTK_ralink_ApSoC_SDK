/* $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/miniupnpd-1.1/natpmp.h#1 $ */
/* MiniUPnP project
 * author : Thomas Bernard
 * website : http://miniupnp.free.fr/ or http://miniupnp.tuxfamily.org/
 */
#ifndef __NATPMP_H__
#define __NATPMP_H__

#define NATPMP_PORT (5351)

int OpenAndConfNATPMPSocket();

void ProcessIncomingNATPMPPacket(int s);

int ScanNATPMPforExpiration();

int CleanExpiredNATPMP();

#endif

