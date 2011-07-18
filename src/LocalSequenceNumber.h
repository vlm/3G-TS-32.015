/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_LocalSequenceNumber_H_
#define	_LocalSequenceNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LocalSequenceNumber */
typedef unsigned long	 LocalSequenceNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocalSequenceNumber;
asn_struct_free_f LocalSequenceNumber_free;
asn_struct_print_f LocalSequenceNumber_print;
asn_constr_check_f LocalSequenceNumber_constraint;
ber_type_decoder_f LocalSequenceNumber_decode_ber;
der_type_encoder_f LocalSequenceNumber_encode_der;
xer_type_decoder_f LocalSequenceNumber_decode_xer;
xer_type_encoder_f LocalSequenceNumber_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LocalSequenceNumber_H_ */
#include <asn_internal.h>
