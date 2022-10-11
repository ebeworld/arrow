// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/policy/sofa_pbrpc_meta.proto

#include "brpc/policy/sofa_pbrpc_meta.pb.h"

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

namespace brpc {
namespace policy {
PROTOBUF_CONSTEXPR SofaRpcMeta::SofaRpcMeta(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.method_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.reason_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sequence_id_)*/uint64_t{0u}
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_.failed_)*/false
  , /*decltype(_impl_.error_code_)*/0
  , /*decltype(_impl_.compress_type_)*/0
  , /*decltype(_impl_.expected_response_compress_type_)*/0} {}
struct SofaRpcMetaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SofaRpcMetaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SofaRpcMetaDefaultTypeInternal() {}
  union {
    SofaRpcMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SofaRpcMetaDefaultTypeInternal _SofaRpcMeta_default_instance_;
}  // namespace policy
}  // namespace brpc
static ::_pb::Metadata file_level_metadata_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto = nullptr;

const uint32_t TableStruct_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.sequence_id_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.method_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.failed_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.error_code_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.reason_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.compress_type_),
  PROTOBUF_FIELD_OFFSET(::brpc::policy::SofaRpcMeta, _impl_.expected_response_compress_type_),
  3,
  2,
  0,
  4,
  5,
  1,
  6,
  7,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, -1, sizeof(::brpc::policy::SofaRpcMeta)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::brpc::policy::_SofaRpcMeta_default_instance_._instance,
};

const char descriptor_table_protodef_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!brpc/policy/sofa_pbrpc_meta.proto\022\013brp"
  "c.policy\"\271\002\n\013SofaRpcMeta\022+\n\004type\030\001 \002(\0162\035"
  ".brpc.policy.SofaRpcMeta.Type\022\023\n\013sequenc"
  "e_id\030\002 \002(\004\022\016\n\006method\030d \001(\t\022\017\n\006failed\030\310\001 "
  "\001(\010\022\023\n\nerror_code\030\311\001 \001(\005\022\017\n\006reason\030\312\001 \001("
  "\t\0225\n\rcompress_type\030\254\002 \001(\0162\035.brpc.policy."
  "SofaCompressType\022G\n\037expected_response_co"
  "mpress_type\030\255\002 \001(\0162\035.brpc.policy.SofaCom"
  "pressType\"!\n\004Type\022\013\n\007REQUEST\020\000\022\014\n\010RESPON"
  "SE\020\001*\244\001\n\020SofaCompressType\022\033\n\027SOFA_COMPRE"
  "SS_TYPE_NONE\020\000\022\033\n\027SOFA_COMPRESS_TYPE_GZI"
  "P\020\001\022\033\n\027SOFA_COMPRESS_TYPE_ZLIB\020\002\022\035\n\031SOFA"
  "_COMPRESS_TYPE_SNAPPY\020\003\022\032\n\026SOFA_COMPRESS"
  "_TYPE_LZ4\020\004B\037\n\017com.brpc.policyB\014SofaRpcP"
  "roto"
  ;
static ::_pbi::once_flag descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto = {
    false, false, 564, descriptor_table_protodef_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto,
    "brpc/policy/sofa_pbrpc_meta.proto",
    &descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto::offsets,
    file_level_metadata_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto, file_level_enum_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto,
    file_level_service_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_getter() {
  return &descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto(&descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
namespace brpc {
namespace policy {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SofaRpcMeta_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
  return file_level_enum_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[0];
}
bool SofaRpcMeta_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr SofaRpcMeta_Type SofaRpcMeta::REQUEST;
constexpr SofaRpcMeta_Type SofaRpcMeta::RESPONSE;
constexpr SofaRpcMeta_Type SofaRpcMeta::Type_MIN;
constexpr SofaRpcMeta_Type SofaRpcMeta::Type_MAX;
constexpr int SofaRpcMeta::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SofaCompressType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
  return file_level_enum_descriptors_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[1];
}
bool SofaCompressType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class SofaRpcMeta::_Internal {
 public:
  using HasBits = decltype(std::declval<SofaRpcMeta>()._impl_._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_sequence_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_method(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_failed(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_error_code(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_compress_type(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_expected_response_compress_type(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000c) ^ 0x0000000c) != 0;
  }
};

SofaRpcMeta::SofaRpcMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:brpc.policy.SofaRpcMeta)
}
SofaRpcMeta::SofaRpcMeta(const SofaRpcMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SofaRpcMeta* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.method_){}
    , decltype(_impl_.reason_){}
    , decltype(_impl_.sequence_id_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.failed_){}
    , decltype(_impl_.error_code_){}
    , decltype(_impl_.compress_type_){}
    , decltype(_impl_.expected_response_compress_type_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_method()) {
    _this->_impl_.method_.Set(from._internal_method(), 
      _this->GetArenaForAllocation());
  }
  _impl_.reason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.reason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_reason()) {
    _this->_impl_.reason_.Set(from._internal_reason(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.sequence_id_, &from._impl_.sequence_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.expected_response_compress_type_) -
    reinterpret_cast<char*>(&_impl_.sequence_id_)) + sizeof(_impl_.expected_response_compress_type_));
  // @@protoc_insertion_point(copy_constructor:brpc.policy.SofaRpcMeta)
}

inline void SofaRpcMeta::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.method_){}
    , decltype(_impl_.reason_){}
    , decltype(_impl_.sequence_id_){uint64_t{0u}}
    , decltype(_impl_.type_){0}
    , decltype(_impl_.failed_){false}
    , decltype(_impl_.error_code_){0}
    , decltype(_impl_.compress_type_){0}
    , decltype(_impl_.expected_response_compress_type_){0}
  };
  _impl_.method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.reason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.reason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SofaRpcMeta::~SofaRpcMeta() {
  // @@protoc_insertion_point(destructor:brpc.policy.SofaRpcMeta)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SofaRpcMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.method_.Destroy();
  _impl_.reason_.Destroy();
}

void SofaRpcMeta::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SofaRpcMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.policy.SofaRpcMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.method_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.reason_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000fcu) {
    ::memset(&_impl_.sequence_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.expected_response_compress_type_) -
        reinterpret_cast<char*>(&_impl_.sequence_id_)) + sizeof(_impl_.expected_response_compress_type_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SofaRpcMeta::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .brpc.policy.SofaRpcMeta.Type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::policy::SofaRpcMeta_Type_IsValid(val))) {
            _internal_set_type(static_cast<::brpc::policy::SofaRpcMeta_Type>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // required uint64 sequence_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_sequence_id(&has_bits);
          _impl_.sequence_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string method = 100;
      case 100:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_method();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "brpc.policy.SofaRpcMeta.method");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional bool failed = 200;
      case 200:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_failed(&has_bits);
          _impl_.failed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 error_code = 201;
      case 201:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_error_code(&has_bits);
          _impl_.error_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string reason = 202;
      case 202:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          auto str = _internal_mutable_reason();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "brpc.policy.SofaRpcMeta.reason");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.policy.SofaCompressType compress_type = 300;
      case 300:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::policy::SofaCompressType_IsValid(val))) {
            _internal_set_compress_type(static_cast<::brpc::policy::SofaCompressType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(300, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
      case 301:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::policy::SofaCompressType_IsValid(val))) {
            _internal_set_expected_response_compress_type(static_cast<::brpc::policy::SofaCompressType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(301, val, mutable_unknown_fields());
          }
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SofaRpcMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.policy.SofaRpcMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required .brpc.policy.SofaRpcMeta.Type type = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // required uint64 sequence_id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_sequence_id(), target);
  }

  // optional string method = 100;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_method().data(), static_cast<int>(this->_internal_method().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.method");
    target = stream->WriteStringMaybeAliased(
        100, this->_internal_method(), target);
  }

  // optional bool failed = 200;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(200, this->_internal_failed(), target);
  }

  // optional int32 error_code = 201;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(201, this->_internal_error_code(), target);
  }

  // optional string reason = 202;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_reason().data(), static_cast<int>(this->_internal_reason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.reason");
    target = stream->WriteStringMaybeAliased(
        202, this->_internal_reason(), target);
  }

  // optional .brpc.policy.SofaCompressType compress_type = 300;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      300, this->_internal_compress_type(), target);
  }

  // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      301, this->_internal_expected_response_compress_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.policy.SofaRpcMeta)
  return target;
}

size_t SofaRpcMeta::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:brpc.policy.SofaRpcMeta)
  size_t total_size = 0;

  if (_internal_has_sequence_id()) {
    // required uint64 sequence_id = 2;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_sequence_id());
  }

  if (_internal_has_type()) {
    // required .brpc.policy.SofaRpcMeta.Type type = 1;
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return total_size;
}
size_t SofaRpcMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.policy.SofaRpcMeta)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x0000000c) ^ 0x0000000c) == 0) {  // All required fields are present.
    // required uint64 sequence_id = 2;
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_sequence_id());

    // required .brpc.policy.SofaRpcMeta.Type type = 1;
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string method = 100;
    if (cached_has_bits & 0x00000001u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_method());
    }

    // optional string reason = 202;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_reason());
    }

  }
  if (cached_has_bits & 0x000000f0u) {
    // optional bool failed = 200;
    if (cached_has_bits & 0x00000010u) {
      total_size += 2 + 1;
    }

    // optional int32 error_code = 201;
    if (cached_has_bits & 0x00000020u) {
      total_size += 2 +
        ::_pbi::WireFormatLite::Int32Size(
          this->_internal_error_code());
    }

    // optional .brpc.policy.SofaCompressType compress_type = 300;
    if (cached_has_bits & 0x00000040u) {
      total_size += 2 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_compress_type());
    }

    // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
    if (cached_has_bits & 0x00000080u) {
      total_size += 2 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_expected_response_compress_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SofaRpcMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SofaRpcMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SofaRpcMeta::GetClassData() const { return &_class_data_; }


void SofaRpcMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SofaRpcMeta*>(&to_msg);
  auto& from = static_cast<const SofaRpcMeta&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:brpc.policy.SofaRpcMeta)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_method(from._internal_method());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_reason(from._internal_reason());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.sequence_id_ = from._impl_.sequence_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.type_ = from._impl_.type_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.failed_ = from._impl_.failed_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.error_code_ = from._impl_.error_code_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.compress_type_ = from._impl_.compress_type_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.expected_response_compress_type_ = from._impl_.expected_response_compress_type_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SofaRpcMeta::CopyFrom(const SofaRpcMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.policy.SofaRpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SofaRpcMeta::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void SofaRpcMeta::InternalSwap(SofaRpcMeta* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.method_, lhs_arena,
      &other->_impl_.method_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.reason_, lhs_arena,
      &other->_impl_.reason_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SofaRpcMeta, _impl_.expected_response_compress_type_)
      + sizeof(SofaRpcMeta::_impl_.expected_response_compress_type_)
      - PROTOBUF_FIELD_OFFSET(SofaRpcMeta, _impl_.sequence_id_)>(
          reinterpret_cast<char*>(&_impl_.sequence_id_),
          reinterpret_cast<char*>(&other->_impl_.sequence_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SofaRpcMeta::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_getter, &descriptor_table_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_once,
      file_level_metadata_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace policy
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::brpc::policy::SofaRpcMeta*
Arena::CreateMaybeMessage< ::brpc::policy::SofaRpcMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::policy::SofaRpcMeta >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
