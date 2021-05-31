/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RpkiSignedChecklist-2021"
 * 	found in "draft-ietf-sidrops-rpki-rsc.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_IPList_H_
#define	_IPList_H_


#include "asn1/asn1c/asn_application.h"

/* Including external dependencies */
#include "asn1/asn1c/asn_SEQUENCE_OF.h"
#include "asn1/asn1c/constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IPAddressFamilyItem;

/* IPList */
typedef struct IPList {
	A_SEQUENCE_OF(struct IPAddressFamilyItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IPList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPList;
extern asn_SET_OF_specifics_t asn_SPC_IPList_specs_1;
extern asn_TYPE_member_t asn_MBR_IPList_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IPAddressFamilyItem.h"

#endif	/* _IPList_H_ */
#include "asn1/asn1c/asn_internal.h"
