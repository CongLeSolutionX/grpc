/* This file was generated by upb_generator from the input file:
 *
 *     envoy/admin/v3/certs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#include "upb/reflection/def.h"
#include "envoy/admin/v3/certs.upbdefs.h"
#include "envoy/admin/v3/certs.upb_minitable.h"

extern _upb_DefPool_Init google_protobuf_timestamp_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[1336] = {'\n', '\032', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'd', 'm', 'i', 'n', '/', 'v', '3', '/', 'c', 'e', 'r', 't', 's', '.', 'p', 'r', 
'o', 't', 'o', '\022', '\016', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '\032', '\037', 'g', 'o', 'o', 'g', 
'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 
'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 
's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\"', 'x', '\n', '\014', 'C', 'e', 'r', 
't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', '\022', '?', '\n', '\014', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', 
'\030', '\001', ' ', '\003', '(', '\013', '2', '\033', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'C', 
'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'R', '\014', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', ':', 
'\'', '\232', '\305', '\210', '\036', '\"', '\n', ' ', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 
'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 's', '\"', '\265', '\001', '\n', '\013', 'C', 'e', 'r', 't', 'i', 
'f', 'i', 'c', 'a', 't', 'e', '\022', ';', '\n', '\007', 'c', 'a', '_', 'c', 'e', 'r', 't', '\030', '\001', ' ', '\003', '(', '\013', '2', '\"', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 
't', 'e', 'D', 'e', 't', 'a', 'i', 'l', 's', 'R', '\006', 'c', 'a', 'C', 'e', 'r', 't', '\022', 'A', '\n', '\n', 'c', 'e', 'r', 't', 
'_', 'c', 'h', 'a', 'i', 'n', '\030', '\002', ' ', '\003', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 
'n', '.', 'v', '3', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 'e', 't', 'a', 'i', 'l', 's', 'R', '\t', 
'c', 'e', 'r', 't', 'C', 'h', 'a', 'i', 'n', ':', '&', '\232', '\305', '\210', '\036', '!', '\n', '\037', 'e', 'n', 'v', 'o', 'y', '.', 'a', 
'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\"', 
'\334', '\004', '\n', '\022', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 'e', 't', 'a', 'i', 'l', 's', '\022', '\022', '\n', 
'\004', 'p', 'a', 't', 'h', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\004', 'p', 'a', 't', 'h', '\022', '#', '\n', '\r', 's', 'e', 'r', 'i', 
'a', 'l', '_', 'n', 'u', 'm', 'b', 'e', 'r', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\014', 's', 'e', 'r', 'i', 'a', 'l', 'N', 'u', 
'm', 'b', 'e', 'r', '\022', 'P', '\n', '\021', 's', 'u', 'b', 'j', 'e', 'c', 't', '_', 'a', 'l', 't', '_', 'n', 'a', 'm', 'e', 's', 
'\030', '\003', ' ', '\003', '(', '\013', '2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'S', 
'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 'N', 'a', 'm', 'e', 'R', '\017', 's', 'u', 'b', 'j', 
'e', 'c', 't', 'A', 'l', 't', 'N', 'a', 'm', 'e', 's', '\022', '2', '\n', '\025', 'd', 'a', 'y', 's', '_', 'u', 'n', 't', 'i', 'l', 
'_', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', '\030', '\004', ' ', '\001', '(', '\004', 'R', '\023', 'd', 'a', 'y', 's', 'U', 'n', 
't', 'i', 'l', 'E', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', '\022', '9', '\n', '\n', 'v', 'a', 'l', 'i', 'd', '_', 'f', 'r', 
'o', 'm', '\030', '\005', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\t', 'v', 'a', 'l', 'i', 'd', 'F', 'r', 'o', 'm', '\022', 'C', '\n', 
'\017', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', '_', 't', 'i', 'm', 'e', '\030', '\006', ' ', '\001', '(', '\013', '2', '\032', '.', 
'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 
'R', '\016', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', 'T', 'i', 'm', 'e', '\022', 'Q', '\n', '\014', 'o', 'c', 's', 'p', '_', 
'd', 'e', 't', 'a', 'i', 'l', 's', '\030', '\007', ' ', '\001', '(', '\013', '2', '.', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 
'i', 'n', '.', 'v', '3', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 'e', 't', 'a', 'i', 'l', 's', '.', 
'O', 'c', 's', 'p', 'D', 'e', 't', 'a', 'i', 'l', 's', 'R', '\013', 'o', 'c', 's', 'p', 'D', 'e', 't', 'a', 'i', 'l', 's', '\032', 
'\204', '\001', '\n', '\013', 'O', 'c', 's', 'p', 'D', 'e', 't', 'a', 'i', 'l', 's', '\022', '9', '\n', '\n', 'v', 'a', 'l', 'i', 'd', '_', 
'f', 'r', 'o', 'm', '\030', '\001', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\t', 'v', 'a', 'l', 'i', 'd', 'F', 'r', 'o', 'm', '\022', 
':', '\n', '\n', 'e', 'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\n', 'e', 
'x', 'p', 'i', 'r', 'a', 't', 'i', 'o', 'n', ':', '-', '\232', '\305', '\210', '\036', '(', '\n', '&', 'e', 'n', 'v', 'o', 'y', '.', 'a', 
'd', 'm', 'i', 'n', '.', 'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'D', 
'e', 't', 'a', 'i', 'l', 's', '\"', '\230', '\001', '\n', '\024', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'e', 'r', 'n', 'a', 
't', 'e', 'N', 'a', 'm', 'e', '\022', '\022', '\n', '\003', 'd', 'n', 's', '\030', '\001', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\003', 'd', 'n', 
's', '\022', '\022', '\n', '\003', 'u', 'r', 'i', '\030', '\002', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\003', 'u', 'r', 'i', '\022', '\037', '\n', '\n', 
'i', 'p', '_', 'a', 'd', 'd', 'r', 'e', 's', 's', '\030', '\003', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\t', 'i', 'p', 'A', 'd', 'd', 
'r', 'e', 's', 's', ':', '/', '\232', '\305', '\210', '\036', '*', '\n', '(', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 
'v', '2', 'a', 'l', 'p', 'h', 'a', '.', 'S', 'u', 'b', 'j', 'e', 'c', 't', 'A', 'l', 't', 'e', 'r', 'n', 'a', 't', 'e', 'N', 
'a', 'm', 'e', 'B', '\006', '\n', '\004', 'n', 'a', 'm', 'e', 'B', 's', '\n', '\034', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 
'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', 'B', '\n', 'C', 'e', 'r', 't', 's', 
'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', '=', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 
'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 
'v', 'o', 'y', '/', 'a', 'd', 'm', 'i', 'n', '/', 'v', '3', ';', 'a', 'd', 'm', 'i', 'n', 'v', '3', '\272', '\200', '\310', '\321', '\006', 
'\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[4] = {
  &google_protobuf_timestamp_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_admin_v3_certs_proto_upbdefinit = {
  deps,
  &envoy_admin_v3_certs_proto_upb_file_layout,
  "envoy/admin/v3/certs.proto",
  UPB_STRINGVIEW_INIT(descriptor, 1336)
};
