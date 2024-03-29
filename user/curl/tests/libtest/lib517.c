/*****************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/curl/tests/libtest/lib517.c#1 $
 */

#include "test.h"

#include "memdebug.h"

static const char *dates[]={
  "Sun, 06 Nov 1994 08:49:37 GMT",
  "Sunday, 06-Nov-94 08:49:37 GMT",
  "Sun Nov  6 08:49:37 1994",
  "06 Nov 1994 08:49:37 GMT",
  "06-Nov-94 08:49:37 GMT",
  "Nov  6 08:49:37 1994",
  "06 Nov 1994 08:49:37",
  "06-Nov-94 08:49:37",
  "1994 Nov 6 08:49:37",
  "GMT 08:49:37 06-Nov-94 Sunday",
  "94 6 Nov 08:49:37",
  "1994 Nov 6",
  "06-Nov-94",
  "Sun Nov 6 94",
  "1994.Nov.6",
  "Sun/Nov/6/94/GMT",
  "Sun, 06 Nov 1994 08:49:37 CET",
  "06 Nov 1994 08:49:37 EST",
  "Sun, 12 Sep 2004 15:05:58 -0700",
  "Sat, 11 Sep 2004 21:32:11 +0200",
  "20040912 15:05:58 -0700",
  "20040911 +0200",
  "Thu, 01-Jan-1970 00:59:59 GMT",
  "Thu, 01-Jan-1970 01:00:00 GMT",
/*  "2094 Nov 6", See ../data/test517 for details */
  "Sat, 15-Apr-17 21:01:22 GMT",
  "Thu, 19-Apr-2007 16:00:00 GMT",
  "Wed, 25 Apr 2007 21:02:13 GMT",
  "Thu, 19/Apr\\2007 16:00:00 GMT",
  "Fri, 1 Jan 2010 01:01:50 GMT",
  "Wednesday, 1-Jan-2003 00:00:00 GMT",
  ", 1-Jan-2003 00:00:00 GMT",
  " 1-Jan-2003 00:00:00 GMT",
  "1-Jan-2003 00:00:00 GMT",
  "Wed,18-Apr-07 22:50:12 GMT",
  "WillyWonka  , 18-Apr-07 22:50:12 GMT",
  "WillyWonka  , 18-Apr-07 22:50:12",
  "WillyWonka  ,  18-apr-07   22:50:12",
  "Mon, 18-Apr-1977 22:50:13 GMT",
  "Mon, 18-Apr-77 22:50:13 GMT",
  "\"Sat, 15-Apr-17\\\"21:01:22\\\"GMT\"",
  "Partyday, 18- April-07 22:50:12",
  "Partyday, 18 - Apri-07 22:50:12",
  "Wednes, 1-Januar-2003 00:00:00 GMT",
  "Sat, 15-Apr-17 21:01:22",
  "Sat, 15-Apr-17 21:01:22 GMT-2",
  "Sat, 15-Apr-17 21:01:22 GMT BLAH",
  "Sat, 15-Apr-17 21:01:22 GMT-0400",
  "Sat, 15-Apr-17 21:01:22 GMT-0400 (EDT)",
  "Sat, 15-Apr-17 21:01:22 DST",
  "Sat, 15-Apr-17 21:01:22 -0400",
  "Sat, 15-Apr-17 21:01:22 (hello there)",
  "Sat, 15-Apr-17 21:01:22 11:22:33",
  "Sat, 15-Apr-17 ::00 21:01:22",
  "Sat, 15-Apr-17 boink:z 21:01:22",
  "Sat, 15-Apr-17 91:22:33 21:01:22",
  "Thu Apr 18 22:50:12 2007 GMT",
  "22:50:12 Thu Apr 18 2007 GMT",
  "Thu 22:50:12 Apr 18 2007 GMT",
  "Thu Apr 22:50:12 18 2007 GMT",
  "Thu Apr 18 22:50:12 2007 GMT",
  "Thu Apr 18 2007 22:50:12 GMT",
  "Thu Apr 18 2007 GMT 22:50:12",
  "Sat, 15-Apr-17 21:01:22 GMT",
  "15-Sat, Apr-17 21:01:22 GMT",
  "15-Sat, Apr 21:01:22 GMT 17",
  "15-Sat, Apr 21:01:22 GMT 2017",
  "15 Apr 21:01:22 2017",
  "15 17 Apr 21:01:22",
  "Apr 15 17 21:01:22",
  "Apr 15 21:01:22 17",
  "2017 April 15 21:01:22",
  "15 April 2017 21:01:22",
  "98 April 17 21:01:22",
  "Thu, 012-Aug-2008 20:49:07 GMT",
#if 0
  /* leaving out these strings since they differ between 32 and 64 bit
     archs and the test suite has no good way to support two different outputs
     like that */
  "Thu, 12-Aug-31841 20:49:07 GMT",
  "Thu, 12-Aug-9999999999 20:49:07 GMT",
#endif
  "Thu, 999999999999-Aug-2007 20:49:07 GMT",
  "Thu, 12-Aug-2007 20:61:99999999999 GMT",
  "IAintNoDateFool",
  NULL
};

int test(char *URL)
{
  int i;

  (void)URL; /* not used */

  for(i=0; dates[i]; i++) {
    printf("%d: %s => %ld\n", i, dates[i], (long)curl_getdate(dates[i], NULL));
  }

  return 0;
}
