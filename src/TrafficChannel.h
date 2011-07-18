/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_TrafficChannel_H_
#define	_TrafficChannel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficChannel {
	TrafficChannel_fullRate	= 0,
	TrafficChannel_halfRate	= 1
} e_TrafficChannel;

/* TrafficChannel */
typedef long	 TrafficChannel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficChannel;
asn_struct_free_f TrafficChannel_free;
asn_struct_print_f TrafficChannel_print;
asn_constr_check_f TrafficChannel_constraint;
ber_type_decoder_f TrafficChannel_decode_ber;
der_type_encoder_f TrafficChannel_encode_der;
xer_type_decoder_f TrafficChannel_decode_xer;
xer_type_encoder_f TrafficChannel_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficChannel_H_ */
#include <asn_internal.h>
