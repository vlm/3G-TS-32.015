/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_TransparencyInd_H_
#define	_TransparencyInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransparencyInd {
	TransparencyInd_transparent	= 0,
	TransparencyInd_nonTransparent	= 1
} e_TransparencyInd;

/* TransparencyInd */
typedef long	 TransparencyInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransparencyInd;
asn_struct_free_f TransparencyInd_free;
asn_struct_print_f TransparencyInd_print;
asn_constr_check_f TransparencyInd_constraint;
ber_type_decoder_f TransparencyInd_decode_ber;
der_type_encoder_f TransparencyInd_encode_der;
xer_type_decoder_f TransparencyInd_decode_xer;
xer_type_encoder_f TransparencyInd_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TransparencyInd_H_ */
#include <asn_internal.h>
