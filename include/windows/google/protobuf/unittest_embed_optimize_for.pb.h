// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_embed_optimize_for.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/unittest_optimize_for.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto;
namespace protobuf_unittest {
class TestEmbedOptimizedForSize;
struct TestEmbedOptimizedForSizeDefaultTypeInternal;
extern TestEmbedOptimizedForSizeDefaultTypeInternal _TestEmbedOptimizedForSize_default_instance_;
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::TestEmbedOptimizedForSize* Arena::CreateMaybeMessage<::protobuf_unittest::TestEmbedOptimizedForSize>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {

// ===================================================================

class TestEmbedOptimizedForSize final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.TestEmbedOptimizedForSize) */ {
 public:
  inline TestEmbedOptimizedForSize() : TestEmbedOptimizedForSize(nullptr) {}
  ~TestEmbedOptimizedForSize() override;
  explicit PROTOBUF_CONSTEXPR TestEmbedOptimizedForSize(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TestEmbedOptimizedForSize(const TestEmbedOptimizedForSize& from);
  TestEmbedOptimizedForSize(TestEmbedOptimizedForSize&& from) noexcept
    : TestEmbedOptimizedForSize() {
    *this = ::std::move(from);
  }

  inline TestEmbedOptimizedForSize& operator=(const TestEmbedOptimizedForSize& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestEmbedOptimizedForSize& operator=(TestEmbedOptimizedForSize&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TestEmbedOptimizedForSize& default_instance() {
    return *internal_default_instance();
  }
  static inline const TestEmbedOptimizedForSize* internal_default_instance() {
    return reinterpret_cast<const TestEmbedOptimizedForSize*>(
               &_TestEmbedOptimizedForSize_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestEmbedOptimizedForSize& a, TestEmbedOptimizedForSize& b) {
    a.Swap(&b);
  }
  inline void Swap(TestEmbedOptimizedForSize* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestEmbedOptimizedForSize* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TestEmbedOptimizedForSize* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TestEmbedOptimizedForSize>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TestEmbedOptimizedForSize& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const TestEmbedOptimizedForSize& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestEmbedOptimizedForSize* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.TestEmbedOptimizedForSize";
  }
  protected:
  explicit TestEmbedOptimizedForSize(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRepeatedMessageFieldNumber = 2,
    kOptionalMessageFieldNumber = 1,
  };
  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  int repeated_message_size() const;
  private:
  int _internal_repeated_message_size() const;
  public:
  void clear_repeated_message();
  ::protobuf_unittest::TestOptimizedForSize* mutable_repeated_message(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
      mutable_repeated_message();
  private:
  const ::protobuf_unittest::TestOptimizedForSize& _internal_repeated_message(int index) const;
  ::protobuf_unittest::TestOptimizedForSize* _internal_add_repeated_message();
  public:
  const ::protobuf_unittest::TestOptimizedForSize& repeated_message(int index) const;
  ::protobuf_unittest::TestOptimizedForSize* add_repeated_message();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
      repeated_message() const;

  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  bool has_optional_message() const;
  private:
  bool _internal_has_optional_message() const;
  public:
  void clear_optional_message();
  const ::protobuf_unittest::TestOptimizedForSize& optional_message() const;
  PROTOBUF_NODISCARD ::protobuf_unittest::TestOptimizedForSize* release_optional_message();
  ::protobuf_unittest::TestOptimizedForSize* mutable_optional_message();
  void set_allocated_optional_message(::protobuf_unittest::TestOptimizedForSize* optional_message);
  private:
  const ::protobuf_unittest::TestOptimizedForSize& _internal_optional_message() const;
  ::protobuf_unittest::TestOptimizedForSize* _internal_mutable_optional_message();
  public:
  void unsafe_arena_set_allocated_optional_message(
      ::protobuf_unittest::TestOptimizedForSize* optional_message);
  ::protobuf_unittest::TestOptimizedForSize* unsafe_arena_release_optional_message();

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestEmbedOptimizedForSize)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize > repeated_message_;
  ::protobuf_unittest::TestOptimizedForSize* optional_message_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestEmbedOptimizedForSize

// optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
inline bool TestEmbedOptimizedForSize::_internal_has_optional_message() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || optional_message_ != nullptr);
  return value;
}
inline bool TestEmbedOptimizedForSize::has_optional_message() const {
  return _internal_has_optional_message();
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::_internal_optional_message() const {
  const ::protobuf_unittest::TestOptimizedForSize* p = optional_message_;
  return p != nullptr ? *p : reinterpret_cast<const ::protobuf_unittest::TestOptimizedForSize&>(
      ::protobuf_unittest::_TestOptimizedForSize_default_instance_);
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::optional_message() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return _internal_optional_message();
}
inline void TestEmbedOptimizedForSize::unsafe_arena_set_allocated_optional_message(
    ::protobuf_unittest::TestOptimizedForSize* optional_message) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(optional_message_);
  }
  optional_message_ = optional_message;
  if (optional_message) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::release_optional_message() {
  _has_bits_[0] &= ~0x00000001u;
  ::protobuf_unittest::TestOptimizedForSize* temp = optional_message_;
  optional_message_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::unsafe_arena_release_optional_message() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  _has_bits_[0] &= ~0x00000001u;
  ::protobuf_unittest::TestOptimizedForSize* temp = optional_message_;
  optional_message_ = nullptr;
  return temp;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::_internal_mutable_optional_message() {
  _has_bits_[0] |= 0x00000001u;
  if (optional_message_ == nullptr) {
    auto* p = CreateMaybeMessage<::protobuf_unittest::TestOptimizedForSize>(GetArenaForAllocation());
    optional_message_ = p;
  }
  return optional_message_;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_optional_message() {
  ::protobuf_unittest::TestOptimizedForSize* _msg = _internal_mutable_optional_message();
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return _msg;
}
inline void TestEmbedOptimizedForSize::set_allocated_optional_message(::protobuf_unittest::TestOptimizedForSize* optional_message) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(optional_message_);
  }
  if (optional_message) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(optional_message));
    if (message_arena != submessage_arena) {
      optional_message = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, optional_message, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  optional_message_ = optional_message;
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
}

// repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
inline int TestEmbedOptimizedForSize::_internal_repeated_message_size() const {
  return repeated_message_.size();
}
inline int TestEmbedOptimizedForSize::repeated_message_size() const {
  return _internal_repeated_message_size();
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_repeated_message(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
TestEmbedOptimizedForSize::mutable_repeated_message() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return &repeated_message_;
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::_internal_repeated_message(int index) const {
  return repeated_message_.Get(index);
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::repeated_message(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return _internal_repeated_message(index);
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::_internal_add_repeated_message() {
  return repeated_message_.Add();
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::add_repeated_message() {
  ::protobuf_unittest::TestOptimizedForSize* _add = _internal_add_repeated_message();
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
TestEmbedOptimizedForSize::repeated_message() const {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
