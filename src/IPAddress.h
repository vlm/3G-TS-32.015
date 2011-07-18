/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_IPAddress_H_
#define	_IPAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IPBinaryAddress.h"
#include "IPTextRepresentedAddress.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IPAddress_PR {
	IPAddress_PR_NOTHING,	/* No components present */
	IPAddress_PR_iPBinaryAddress,
	IPAddress_PR_iPTextRepresentedAddress
} IPAddress_PR;

/* IPAddress */
typedef struct IPAddress {
	IPAddress_PR present;
	union IPAddress_u {
		IPBinaryAddress_t	 iPBinaryAddress;
		IPTextRepresentedAddress_t	 iPTextRepresentedAddress;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IPAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPAddress;

#ifdef __cplusplus
}
#endif

#endif	/* _IPAddress_H_ */
#include <asn_internal.h>
