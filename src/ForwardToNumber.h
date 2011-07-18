/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_ForwardToNumber_H_
#define	_ForwardToNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddressString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ForwardToNumber */
typedef AddressString_t	 ForwardToNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForwardToNumber;
asn_struct_free_f ForwardToNumber_free;
asn_struct_print_f ForwardToNumber_print;
asn_constr_check_f ForwardToNumber_constraint;
ber_type_decoder_f ForwardToNumber_decode_ber;
der_type_encoder_f ForwardToNumber_encode_der;
xer_type_decoder_f ForwardToNumber_decode_xer;
xer_type_encoder_f ForwardToNumber_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ForwardToNumber_H_ */
#include <asn_internal.h>