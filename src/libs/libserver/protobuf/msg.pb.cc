// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Proto {
PROTOBUF_CONSTEXPR CreateComponentParam::CreateComponentParam(
    ::_pbi::ConstantInitialized)
  : string_param_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , type_(0)

  , int_param_(0){}
struct CreateComponentParamDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CreateComponentParamDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CreateComponentParamDefaultTypeInternal() {}
  union {
    CreateComponentParam _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CreateComponentParamDefaultTypeInternal _CreateComponentParam_default_instance_;
PROTOBUF_CONSTEXPR CreateComponent::CreateComponent(
    ::_pbi::ConstantInitialized)
  : params_()
  , class_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , parent_sn_(uint64_t{0u}){}
struct CreateComponentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CreateComponentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CreateComponentDefaultTypeInternal() {}
  union {
    CreateComponent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CreateComponentDefaultTypeInternal _CreateComponent_default_instance_;
}  // namespace Proto
static ::_pb::Metadata file_level_metadata_msg_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_msg_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_msg_2eproto = nullptr;

const uint32_t TableStruct_msg_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponentParam, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponentParam, type_),
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponentParam, int_param_),
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponentParam, string_param_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponent, class_name_),
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponent, parent_sn_),
  PROTOBUF_FIELD_OFFSET(::Proto::CreateComponent, params_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Proto::CreateComponentParam)},
  { 9, -1, -1, sizeof(::Proto::CreateComponent)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Proto::_CreateComponentParam_default_instance_._instance,
  &::Proto::_CreateComponent_default_instance_._instance,
};

const char descriptor_table_protodef_msg_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tmsg.proto\022\005Proto\"\226\001\n\024CreateComponentPa"
  "ram\0223\n\004type\030\001 \001(\0162%.Proto.CreateComponen"
  "tParam.ParamType\022\021\n\tint_param\030\002 \001(\005\022\024\n\014s"
  "tring_param\030\003 \001(\t\" \n\tParamType\022\007\n\003Int\020\000\022"
  "\n\n\006String\020\001\"e\n\017CreateComponent\022\022\n\nclass_"
  "name\030\001 \001(\t\022\021\n\tparent_sn\030\002 \001(\004\022+\n\006params\030"
  "\003 \003(\0132\033.Proto.CreateComponentParamb\006prot"
  "o3"
  ;
static ::_pbi::once_flag descriptor_table_msg_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_msg_2eproto = {
    false, false, 282, descriptor_table_protodef_msg_2eproto,
    "msg.proto",
    &descriptor_table_msg_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_msg_2eproto::offsets,
    file_level_metadata_msg_2eproto, file_level_enum_descriptors_msg_2eproto,
    file_level_service_descriptors_msg_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_msg_2eproto_getter() {
  return &descriptor_table_msg_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_msg_2eproto(&descriptor_table_msg_2eproto);
namespace Proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CreateComponentParam_ParamType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_2eproto);
  return file_level_enum_descriptors_msg_2eproto[0];
}
bool CreateComponentParam_ParamType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr CreateComponentParam_ParamType CreateComponentParam::Int;
constexpr CreateComponentParam_ParamType CreateComponentParam::String;
constexpr CreateComponentParam_ParamType CreateComponentParam::ParamType_MIN;
constexpr CreateComponentParam_ParamType CreateComponentParam::ParamType_MAX;
constexpr int CreateComponentParam::ParamType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class CreateComponentParam::_Internal {
 public:
};

CreateComponentParam::CreateComponentParam(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:Proto.CreateComponentParam)
}
CreateComponentParam::CreateComponentParam(const CreateComponentParam& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  string_param_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    string_param_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_string_param().empty()) {
    string_param_.Set(from._internal_string_param(), 
      GetArenaForAllocation());
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&int_param_) -
    reinterpret_cast<char*>(&type_)) + sizeof(int_param_));
  // @@protoc_insertion_point(copy_constructor:Proto.CreateComponentParam)
}

inline void CreateComponentParam::SharedCtor() {
string_param_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  string_param_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&int_param_) -
    reinterpret_cast<char*>(&type_)) + sizeof(int_param_));
}

CreateComponentParam::~CreateComponentParam() {
  // @@protoc_insertion_point(destructor:Proto.CreateComponentParam)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CreateComponentParam::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  string_param_.Destroy();
}

void CreateComponentParam::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CreateComponentParam::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.CreateComponentParam)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  string_param_.ClearToEmpty();
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&int_param_) -
      reinterpret_cast<char*>(&type_)) + sizeof(int_param_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CreateComponentParam::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Proto.CreateComponentParam.ParamType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::Proto::CreateComponentParam_ParamType>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 int_param = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          int_param_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string string_param = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_string_param();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Proto.CreateComponentParam.string_param"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CreateComponentParam::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.CreateComponentParam)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Proto.CreateComponentParam.ParamType type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // int32 int_param = 2;
  if (this->_internal_int_param() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_int_param(), target);
  }

  // string string_param = 3;
  if (!this->_internal_string_param().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_string_param().data(), static_cast<int>(this->_internal_string_param().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Proto.CreateComponentParam.string_param");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_string_param(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.CreateComponentParam)
  return target;
}

size_t CreateComponentParam::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.CreateComponentParam)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string string_param = 3;
  if (!this->_internal_string_param().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_string_param());
  }

  // .Proto.CreateComponentParam.ParamType type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // int32 int_param = 2;
  if (this->_internal_int_param() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_int_param());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CreateComponentParam::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CreateComponentParam::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CreateComponentParam::GetClassData() const { return &_class_data_; }

void CreateComponentParam::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CreateComponentParam *>(to)->MergeFrom(
      static_cast<const CreateComponentParam &>(from));
}


void CreateComponentParam::MergeFrom(const CreateComponentParam& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.CreateComponentParam)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_string_param().empty()) {
    _internal_set_string_param(from._internal_string_param());
  }
  if (from._internal_type() != 0) {
    _internal_set_type(from._internal_type());
  }
  if (from._internal_int_param() != 0) {
    _internal_set_int_param(from._internal_int_param());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CreateComponentParam::CopyFrom(const CreateComponentParam& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.CreateComponentParam)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateComponentParam::IsInitialized() const {
  return true;
}

void CreateComponentParam::InternalSwap(CreateComponentParam* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &string_param_, lhs_arena,
      &other->string_param_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CreateComponentParam, int_param_)
      + sizeof(CreateComponentParam::int_param_)
      - PROTOBUF_FIELD_OFFSET(CreateComponentParam, type_)>(
          reinterpret_cast<char*>(&type_),
          reinterpret_cast<char*>(&other->type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CreateComponentParam::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_msg_2eproto_getter, &descriptor_table_msg_2eproto_once,
      file_level_metadata_msg_2eproto[0]);
}

// ===================================================================

class CreateComponent::_Internal {
 public:
};

CreateComponent::CreateComponent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  params_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:Proto.CreateComponent)
}
CreateComponent::CreateComponent(const CreateComponent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      params_(from.params_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  class_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    class_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_class_name().empty()) {
    class_name_.Set(from._internal_class_name(), 
      GetArenaForAllocation());
  }
  parent_sn_ = from.parent_sn_;
  // @@protoc_insertion_point(copy_constructor:Proto.CreateComponent)
}

inline void CreateComponent::SharedCtor() {
class_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  class_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
parent_sn_ = uint64_t{0u};
}

CreateComponent::~CreateComponent() {
  // @@protoc_insertion_point(destructor:Proto.CreateComponent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CreateComponent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  class_name_.Destroy();
}

void CreateComponent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CreateComponent::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.CreateComponent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  params_.Clear();
  class_name_.ClearToEmpty();
  parent_sn_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CreateComponent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string class_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_class_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Proto.CreateComponent.class_name"));
        } else
          goto handle_unusual;
        continue;
      // uint64 parent_sn = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          parent_sn_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .Proto.CreateComponentParam params = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_params(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CreateComponent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.CreateComponent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string class_name = 1;
  if (!this->_internal_class_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_class_name().data(), static_cast<int>(this->_internal_class_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Proto.CreateComponent.class_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_class_name(), target);
  }

  // uint64 parent_sn = 2;
  if (this->_internal_parent_sn() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_parent_sn(), target);
  }

  // repeated .Proto.CreateComponentParam params = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_params_size()); i < n; i++) {
    const auto& repfield = this->_internal_params(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.CreateComponent)
  return target;
}

size_t CreateComponent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.CreateComponent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Proto.CreateComponentParam params = 3;
  total_size += 1UL * this->_internal_params_size();
  for (const auto& msg : this->params_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string class_name = 1;
  if (!this->_internal_class_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_class_name());
  }

  // uint64 parent_sn = 2;
  if (this->_internal_parent_sn() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_parent_sn());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CreateComponent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CreateComponent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CreateComponent::GetClassData() const { return &_class_data_; }

void CreateComponent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CreateComponent *>(to)->MergeFrom(
      static_cast<const CreateComponent &>(from));
}


void CreateComponent::MergeFrom(const CreateComponent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.CreateComponent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  params_.MergeFrom(from.params_);
  if (!from._internal_class_name().empty()) {
    _internal_set_class_name(from._internal_class_name());
  }
  if (from._internal_parent_sn() != 0) {
    _internal_set_parent_sn(from._internal_parent_sn());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CreateComponent::CopyFrom(const CreateComponent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.CreateComponent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateComponent::IsInitialized() const {
  return true;
}

void CreateComponent::InternalSwap(CreateComponent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  params_.InternalSwap(&other->params_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &class_name_, lhs_arena,
      &other->class_name_, rhs_arena
  );
  swap(parent_sn_, other->parent_sn_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CreateComponent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_msg_2eproto_getter, &descriptor_table_msg_2eproto_once,
      file_level_metadata_msg_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Proto::CreateComponentParam*
Arena::CreateMaybeMessage< ::Proto::CreateComponentParam >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::CreateComponentParam >(arena);
}
template<> PROTOBUF_NOINLINE ::Proto::CreateComponent*
Arena::CreateMaybeMessage< ::Proto::CreateComponent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::CreateComponent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
