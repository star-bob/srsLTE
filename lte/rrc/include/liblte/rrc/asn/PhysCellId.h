/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PhysCellId_H_
#define	_PhysCellId_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellId */
typedef long	 PhysCellId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellId;
asn_struct_free_f PhysCellId_free;
asn_struct_print_f PhysCellId_print;
asn_constr_check_f PhysCellId_constraint;
ber_type_decoder_f PhysCellId_decode_ber;
der_type_encoder_f PhysCellId_encode_der;
xer_type_decoder_f PhysCellId_decode_xer;
xer_type_encoder_f PhysCellId_encode_xer;
per_type_decoder_f PhysCellId_decode_uper;
per_type_encoder_f PhysCellId_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellId_H_ */
#include <liblte/rrc/asn/asn_internal.h>