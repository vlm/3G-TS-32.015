/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "SSActionResult.h"

int
SSActionResult_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_Diagnostics.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using Diagnostics,
 * so here we adjust the DEF accordingly.
 */
static void
SSActionResult_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_Diagnostics.free_struct;
	td->print_struct   = asn_DEF_Diagnostics.print_struct;
	td->ber_decoder    = asn_DEF_Diagnostics.ber_decoder;
	td->der_encoder    = asn_DEF_Diagnostics.der_encoder;
	td->xer_decoder    = asn_DEF_Diagnostics.xer_decoder;
	td->xer_encoder    = asn_DEF_Diagnostics.xer_encoder;
	td->uper_decoder   = asn_DEF_Diagnostics.uper_decoder;
	td->uper_encoder   = asn_DEF_Diagnostics.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_Diagnostics.per_constraints;
	td->elements       = asn_DEF_Diagnostics.elements;
	td->elements_count = asn_DEF_Diagnostics.elements_count;
	td->specifics      = asn_DEF_Diagnostics.specifics;
}

void
SSActionResult_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SSActionResult_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SSActionResult_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SSActionResult_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SSActionResult_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SSActionResult_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SSActionResult_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_TYPE_descriptor_t asn_DEF_SSActionResult = {
	"SSActionResult",
	"SSActionResult",
	SSActionResult_free,
	SSActionResult_print,
	SSActionResult_constraint,
	SSActionResult_decode_ber,
	SSActionResult_encode_der,
	SSActionResult_decode_xer,
	SSActionResult_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

