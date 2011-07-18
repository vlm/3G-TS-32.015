/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "CAMELModificationParameters.h"

static asn_TYPE_member_t asn_MBR_CAMELModificationParameters_1[] = {
	{ ATF_POINTER, 6, offsetof(struct CAMELModificationParameters, callingPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartyNumber"
		},
	{ ATF_POINTER, 5, offsetof(struct CAMELModificationParameters, callingPartyCategory),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingPartyCategory,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartyCategory"
		},
	{ ATF_POINTER, 4, offsetof(struct CAMELModificationParameters, originalCalledPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OriginalCalledNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"originalCalledPartyNumber"
		},
	{ ATF_POINTER, 3, offsetof(struct CAMELModificationParameters, genericNumbers),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericNumbers,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"genericNumbers"
		},
	{ ATF_POINTER, 2, offsetof(struct CAMELModificationParameters, redirectingPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedirectingNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"redirectingPartyNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct CAMELModificationParameters, redirectionCounter),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfForwarding,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"redirectionCounter"
		},
};
static ber_tlv_tag_t asn_DEF_CAMELModificationParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CAMELModificationParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* callingPartyNumber at 288 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* callingPartyCategory at 289 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* originalCalledPartyNumber at 290 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* genericNumbers at 291 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* redirectingPartyNumber at 292 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* redirectionCounter at 293 */
};
static uint8_t asn_MAP_CAMELModificationParameters_mmap_1[(6 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (0 << 3) | (0 << 2)
};
static asn_SET_specifics_t asn_SPC_CAMELModificationParameters_specs_1 = {
	sizeof(struct CAMELModificationParameters),
	offsetof(struct CAMELModificationParameters, _asn_ctx),
	offsetof(struct CAMELModificationParameters, _presence_map),
	asn_MAP_CAMELModificationParameters_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_CAMELModificationParameters_tag2el_1,	/* Same as above */
	6,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_CAMELModificationParameters_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_CAMELModificationParameters = {
	"CAMELModificationParameters",
	"CAMELModificationParameters",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CAMELModificationParameters_tags_1,
	sizeof(asn_DEF_CAMELModificationParameters_tags_1)
		/sizeof(asn_DEF_CAMELModificationParameters_tags_1[0]), /* 1 */
	asn_DEF_CAMELModificationParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_CAMELModificationParameters_tags_1)
		/sizeof(asn_DEF_CAMELModificationParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CAMELModificationParameters_1,
	6,	/* Elements count */
	&asn_SPC_CAMELModificationParameters_specs_1	/* Additional specs */
};

