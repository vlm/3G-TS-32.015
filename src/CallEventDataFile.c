/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#include "CallEventDataFile.h"

static asn_TYPE_member_t asn_MBR_callEventRecords_3[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_CallEventRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_callEventRecords_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_callEventRecords_specs_3 = {
	sizeof(struct CallEventDataFile__callEventRecords),
	offsetof(struct CallEventDataFile__callEventRecords, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_callEventRecords_3 = {
	"callEventRecords",
	"callEventRecords",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_callEventRecords_tags_3,
	sizeof(asn_DEF_callEventRecords_tags_3)
		/sizeof(asn_DEF_callEventRecords_tags_3[0]) - 1, /* 1 */
	asn_DEF_callEventRecords_tags_3,	/* Same as above */
	sizeof(asn_DEF_callEventRecords_tags_3)
		/sizeof(asn_DEF_callEventRecords_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_callEventRecords_3,
	1,	/* Single element */
	&asn_SPC_callEventRecords_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CallEventDataFile_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventDataFile, headerRecord),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeaderRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"headerRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventDataFile, callEventRecords),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_callEventRecords_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callEventRecords"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventDataFile, trailerRecord),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"trailerRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CallEventDataFile, extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManagementExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extensions"
		},
};
static ber_tlv_tag_t asn_DEF_CallEventDataFile_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CallEventDataFile_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* headerRecord at 150 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* callEventRecords at 151 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trailerRecord at 152 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* extensions at 154 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CallEventDataFile_specs_1 = {
	sizeof(struct CallEventDataFile),
	offsetof(struct CallEventDataFile, _asn_ctx),
	asn_MAP_CallEventDataFile_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CallEventDataFile = {
	"CallEventDataFile",
	"CallEventDataFile",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CallEventDataFile_tags_1,
	sizeof(asn_DEF_CallEventDataFile_tags_1)
		/sizeof(asn_DEF_CallEventDataFile_tags_1[0]), /* 1 */
	asn_DEF_CallEventDataFile_tags_1,	/* Same as above */
	sizeof(asn_DEF_CallEventDataFile_tags_1)
		/sizeof(asn_DEF_CallEventDataFile_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CallEventDataFile_1,
	4,	/* Elements count */
	&asn_SPC_CallEventDataFile_specs_1	/* Additional specs */
};

