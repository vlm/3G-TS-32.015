/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_RoutingNumber_H_
#define	_RoutingNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RoamingNumber.h"
#include "ForwardToNumber.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RoutingNumber_PR {
	RoutingNumber_PR_NOTHING,	/* No components present */
	RoutingNumber_PR_roaming,
	RoutingNumber_PR_forwarded
} RoutingNumber_PR;

/* RoutingNumber */
typedef struct RoutingNumber {
	RoutingNumber_PR present;
	union RoutingNumber_u {
		RoamingNumber_t	 roaming;
		ForwardToNumber_t	 forwarded;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoutingNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoutingNumber;

#ifdef __cplusplus
}
#endif

#endif	/* _RoutingNumber_H_ */
#include <asn_internal.h>
