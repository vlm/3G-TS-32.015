/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_Category_H_
#define	_Category_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Category */
typedef OCTET_STRING_t	 Category_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Category;
asn_struct_free_f Category_free;
asn_struct_print_f Category_print;
asn_constr_check_f Category_constraint;
ber_type_decoder_f Category_decode_ber;
der_type_encoder_f Category_encode_der;
xer_type_decoder_f Category_decode_xer;
xer_type_encoder_f Category_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Category_H_ */
#include <asn_internal.h>
