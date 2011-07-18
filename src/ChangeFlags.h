/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_ChangeFlags_H_
#define	_ChangeFlags_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ChangeFlags {
	ChangeFlags_callingPartyNumberModified	= 0,
	ChangeFlags_callingPartyCategoryModified	= 1,
	ChangeFlags_originalCalledPartyNumberModified	= 2,
	ChangeFlags_genericNumbersModified	= 3,
	ChangeFlags_redirectingPartyNumberModified	= 4,
	ChangeFlags_redirectionCounterModified	= 5
} e_ChangeFlags;

/* ChangeFlags */
typedef BIT_STRING_t	 ChangeFlags_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChangeFlags;
asn_struct_free_f ChangeFlags_free;
asn_struct_print_f ChangeFlags_print;
asn_constr_check_f ChangeFlags_constraint;
ber_type_decoder_f ChangeFlags_decode_ber;
der_type_encoder_f ChangeFlags_encode_der;
xer_type_decoder_f ChangeFlags_decode_xer;
xer_type_encoder_f ChangeFlags_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ChangeFlags_H_ */
#include <asn_internal.h>
