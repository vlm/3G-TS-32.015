/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_RateIndication_H_
#define	_RateIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RateIndication */
typedef OCTET_STRING_t	 RateIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RateIndication;
asn_struct_free_f RateIndication_free;
asn_struct_print_f RateIndication_print;
asn_constr_check_f RateIndication_constraint;
ber_type_decoder_f RateIndication_decode_ber;
der_type_encoder_f RateIndication_encode_der;
xer_type_decoder_f RateIndication_decode_xer;
xer_type_encoder_f RateIndication_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _RateIndication_H_ */
#include <asn_internal.h>
