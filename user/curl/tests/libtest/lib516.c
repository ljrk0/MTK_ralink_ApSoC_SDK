/*****************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/curl/tests/libtest/lib516.c#1 $
 */

#include "test.h"

#include "memdebug.h"

int test(char *URL)
{
  CURL *curl;
  CURLcode res=CURLE_OK;

  if (curl_global_init(CURL_GLOBAL_ALL) != CURLE_OK) {
    fprintf(stderr, "curl_global_init() failed\n");
    return TEST_ERR_MAJOR_BAD;
  }

  if ((curl = curl_easy_init()) == NULL) {
    fprintf(stderr, "curl_easy_init() failed\n");
    curl_global_cleanup();
    return TEST_ERR_MAJOR_BAD;
  }

  /* First set the URL that is about to receive our POST. */
  curl_easy_setopt(curl, CURLOPT_URL, URL);
  curl_easy_setopt(curl, CURLOPT_HTTPPOST, NULL);
  curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); /* show verbose for debug */
  curl_easy_setopt(curl, CURLOPT_HEADER, 1L); /* include header */

  /* Now, we should be making a zero byte POST request */
  res = curl_easy_perform(curl);

  /* always cleanup */
  curl_easy_cleanup(curl);
  curl_global_cleanup();

  return (int)res;
}
