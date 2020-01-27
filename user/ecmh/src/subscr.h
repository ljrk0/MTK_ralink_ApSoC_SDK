/**************************************
 ecmh - Easy Cast du Multi Hub
 by Jeroen Massar <jeroen@unfix.org>
***************************************
 $Author: bruce.chang $
 $Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/ecmh/src/subscr.h#1 $
 $Date: 2012/09/28 $
**************************************/

/* MLDv2 Source Specific Multicast Support */
struct subscrnode
{
	struct in6_addr	ipv6;		/* The address that wants packets matching this S<->G */
	unsigned int	mode;		/* MLD2_* */
	time_t		refreshtime;	/* The time we last received a join for this S<->G on this interface */

	int	portnum;
	int any_address_flag;		/* any flag address */
};

struct subscrnode *subscr_create(const struct in6_addr *ipv6, int mode, int portnum);
void subscr_destroy(struct subscrnode *subscrn);
struct subscrnode *subscr_find(const struct list *list, const struct in6_addr *ipv6);
bool subscr_unsub(struct list *list, const struct in6_addr *ipv6);

