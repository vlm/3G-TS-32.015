/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_CallTypes_H_
#define	_CallTypes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CallType.h"
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CallTypes */
typedef struct CallTypes {
	A_SET_OF(CallType_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CallTypes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CallTypes;

#ifdef __cplusplus
}
#endif

#endif	/* _CallTypes_H_ */
#include <asn_internal.h>
