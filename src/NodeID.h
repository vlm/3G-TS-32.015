/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_NodeID_H_
#define	_NodeID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NodeID */
typedef IA5String_t	 NodeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeID;
asn_struct_free_f NodeID_free;
asn_struct_print_f NodeID_print;
asn_constr_check_f NodeID_constraint;
ber_type_decoder_f NodeID_decode_ber;
der_type_encoder_f NodeID_encode_der;
xer_type_decoder_f NodeID_decode_xer;
xer_type_encoder_f NodeID_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeID_H_ */
#include <asn_internal.h>
