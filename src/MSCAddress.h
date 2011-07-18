/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_MSCAddress_H_
#define	_MSCAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddressString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MSCAddress */
typedef AddressString_t	 MSCAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MSCAddress;
asn_struct_free_f MSCAddress_free;
asn_struct_print_f MSCAddress_print;
asn_constr_check_f MSCAddress_constraint;
ber_type_decoder_f MSCAddress_decode_ber;
der_type_encoder_f MSCAddress_encode_der;
xer_type_decoder_f MSCAddress_decode_xer;
xer_type_encoder_f MSCAddress_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MSCAddress_H_ */
#include <asn_internal.h>
