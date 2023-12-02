// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_id.proto

#ifndef PROTOBUF_proto_5fid_2eproto__INCLUDED
#define PROTOBUF_proto_5fid_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_proto_5fid_2eproto();
void protobuf_AssignDesc_proto_5fid_2eproto();
void protobuf_ShutdownFile_proto_5fid_2eproto();


enum MsgId {
  None = 0,
  MI_NetworkConnect = 1,
  MI_NetworkListen = 2,
  MI_NetworkDisconnect = 3,
  MI_NetworkDisconnectEx = 4,
  MI_NetworkDisconnectToNet = 5,
  MI_Ping = 101,
  C2L_AccountCheck = 1001,
  C2L_AccountCheckRs = 1002,
  MI_AccountQueryOnlineToRedis = 1003,
  MI_AccountQueryOnlineToRedisRs = 1004,
  MI_AccountCheckToHttpRs = 1005,
  MI_RobotSyncState = 5001,
  MI_RobotTestBegin = 5100,
  MI_RobotTestEnd = 5101,
  MsgId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MsgId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MsgId_IsValid(int value);
const MsgId MsgId_MIN = None;
const MsgId MsgId_MAX = MI_RobotTestEnd;
const int MsgId_ARRAYSIZE = MsgId_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgId_descriptor();
inline const ::std::string& MsgId_Name(MsgId value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgId_descriptor(), value);
}
inline bool MsgId_Parse(
    const ::std::string& name, MsgId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgId>(
    MsgId_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Proto::MsgId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Proto::MsgId>() {
  return ::Proto::MsgId_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_5fid_2eproto__INCLUDED