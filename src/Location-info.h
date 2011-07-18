/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_Location_info_H_
#define	_Location_info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MscNo.h"
#include "LocationAreaCode.h"
#include "CellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Location-info */
typedef struct Location_info {
	MscNo_t	*mscNumber	/* OPTIONAL */;
	LocationAreaCode_t	 location_area;
	CellId_t	*cell_identification	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Location_info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Location_info;

#ifdef __cplusplus
}
#endif

#endif	/* _Location_info_H_ */
#include <asn_internal.h>
