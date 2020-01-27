/* 	$Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/totd-1.5/inet_aton.c#1 $	*/

#include "totd.h"

#if !HAVE_INET_ATON
int inet_aton(const char *cp, struct in_addr *inp)
{
  in_addr_t lala;

  if((lala = inet_addr(cp)) < 0)
    return(0);
  inp->s_addr = lala;
  return(1);
}
#endif
