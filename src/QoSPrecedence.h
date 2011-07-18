/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_QoSPrecedence_H_
#define	_QoSPrecedence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QoSPrecedence {
	QoSPrecedence_unspecified	= 0,
	QoSPrecedence_highPriority	= 1,
	QoSPrecedence_normalPriority	= 2,
	QoSPrecedence_lowPriority	= 3
} e_QoSPrecedence;

/* QoSPrecedence */
typedef long	 QoSPrecedence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QoSPrecedence;
asn_struct_free_f QoSPrecedence_free;
asn_struct_print_f QoSPrecedence_print;
asn_constr_check_f QoSPrecedence_constraint;
ber_type_decoder_f QoSPrecedence_decode_ber;
der_type_encoder_f QoSPrecedence_encode_der;
xer_type_decoder_f QoSPrecedence_decode_xer;
xer_type_encoder_f QoSPrecedence_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _QoSPrecedence_H_ */
#include <asn_internal.h>
