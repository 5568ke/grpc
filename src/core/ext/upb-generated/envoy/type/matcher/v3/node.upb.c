/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/matcher/v3/node.upb.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "envoy/type/matcher/v3/struct.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_matcher_v3_NodeMatcher_submsgs[2] = {
  &envoy_type_matcher_v3_StringMatcher_msginit,
  &envoy_type_matcher_v3_StructMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_NodeMatcher__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 1, 11, 3},
};

const upb_msglayout envoy_type_matcher_v3_NodeMatcher_msginit = {
  &envoy_type_matcher_v3_NodeMatcher_submsgs[0],
  &envoy_type_matcher_v3_NodeMatcher__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

#include "upb/port_undef.inc"
