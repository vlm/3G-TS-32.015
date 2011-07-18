/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "Location-info.h"

static asn_TYPE_member_t asn_MBR_Location_info_1[] = {
	{ ATF_POINTER, 1, offsetof(struct Location_info, mscNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MscNo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mscNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Location_info, location_area),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"location-area"
		},
	{ ATF_POINTER, 1, offsetof(struct Location_info, cell_identification),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cell-identification"
		},
};
static ber_tlv_tag_t asn_DEF_Location_info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Location_info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* mscNumber at 482 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* location-area at 483 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 } /* cell-identification at 484 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Location_info_specs_1 = {
	sizeof(struct Location_info),
	offsetof(struct Location_info, _asn_ctx),
	asn_MAP_Location_info_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Location_info = {
	"Location-info",
	"Location-info",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Location_info_tags_1,
	sizeof(asn_DEF_Location_info_tags_1)
		/sizeof(asn_DEF_Location_info_tags_1[0]), /* 1 */
	asn_DEF_Location_info_tags_1,	/* Same as above */
	sizeof(asn_DEF_Location_info_tags_1)
		/sizeof(asn_DEF_Location_info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Location_info_1,
	3,	/* Elements count */
	&asn_SPC_Location_info_specs_1	/* Additional specs */
};
