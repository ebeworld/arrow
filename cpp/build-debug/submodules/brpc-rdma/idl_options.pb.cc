// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: idl_options.proto

#include "idl_options.pb.h"

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

static const ::_pb::EnumDescriptor* file_level_enum_descriptors_idl_5foptions_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_idl_5foptions_2eproto = nullptr;
const uint32_t TableStruct_idl_5foptions_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_idl_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021idl_options.proto\032 google/protobuf/des"
  "criptor.proto*\351\001\n\022ConvertibleIdlType\022\014\n\010"
  "IDL_AUTO\020\000\022\014\n\010IDL_INT8\020\001\022\r\n\tIDL_INT16\020\002\022"
  "\r\n\tIDL_INT32\020\003\022\r\n\tIDL_INT64\020\004\022\r\n\tIDL_UIN"
  "T8\020\005\022\016\n\nIDL_UINT16\020\006\022\016\n\nIDL_UINT32\020\007\022\016\n\n"
  "IDL_UINT64\020\010\022\014\n\010IDL_BOOL\020\t\022\r\n\tIDL_FLOAT\020"
  "\n\022\016\n\nIDL_DOUBLE\020\013\022\016\n\nIDL_BINARY\020\014\022\016\n\nIDL"
  "_STRING\020\r:3\n\013idl_support\022\034.google.protob"
  "uf.FileOptions\030\370\306\005 \001(\010:F\n\010idl_type\022\035.goo"
  "gle.protobuf.FieldOptions\030\371\306\005 \001(\0162\023.Conv"
  "ertibleIdlType:/\n\006idl_on\022\035.google.protob"
  "uf.FieldOptions\030\372\306\005 \001(\005:1\n\010idl_name\022\035.go"
  "ogle.protobuf.FieldOptions\030\373\306\005 \001(\t"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_idl_5foptions_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_idl_5foptions_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_idl_5foptions_2eproto = {
    false, false, 514, descriptor_table_protodef_idl_5foptions_2eproto,
    "idl_options.proto",
    &descriptor_table_idl_5foptions_2eproto_once, descriptor_table_idl_5foptions_2eproto_deps, 1, 0,
    schemas, file_default_instances, TableStruct_idl_5foptions_2eproto::offsets,
    nullptr, file_level_enum_descriptors_idl_5foptions_2eproto,
    file_level_service_descriptors_idl_5foptions_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_idl_5foptions_2eproto_getter() {
  return &descriptor_table_idl_5foptions_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_idl_5foptions_2eproto(&descriptor_table_idl_5foptions_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ConvertibleIdlType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_idl_5foptions_2eproto);
  return file_level_enum_descriptors_idl_5foptions_2eproto[0];
}
bool ConvertibleIdlType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false>
  idl_support(kIdlSupportFieldNumber, false, nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::ConvertibleIdlType, ::ConvertibleIdlType_IsValid>, 14, false>
  idl_type(kIdlTypeFieldNumber, static_cast< ::ConvertibleIdlType >(0), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< int32_t >, 5, false>
  idl_on(kIdlOnFieldNumber, 0, nullptr);
const std::string idl_name_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  idl_name(kIdlNameFieldNumber, idl_name_default, nullptr);

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
