// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dot2llc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dot2llc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace OstProto {

namespace {

const ::google::protobuf::Descriptor* Dot2Llc_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Dot2Llc_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dot2llc_2eproto() {
  protobuf_AddDesc_dot2llc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dot2llc.proto");
  GOOGLE_CHECK(file != NULL);
  Dot2Llc_descriptor_ = file->message_type(0);
  static const int Dot2Llc_offsets_[1] = {
  };
  Dot2Llc_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Dot2Llc_descriptor_,
      Dot2Llc::default_instance_,
      Dot2Llc_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot2Llc, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot2Llc, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Dot2Llc));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dot2llc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Dot2Llc_descriptor_, &Dot2Llc::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dot2llc_2eproto() {
  delete Dot2Llc::default_instance_;
  delete Dot2Llc_reflection_;
}

void protobuf_AddDesc_dot2llc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::OstProto::protobuf_AddDesc_dot3_2eproto();
  ::OstProto::protobuf_AddDesc_llc_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rdot2llc.proto\022\010OstProto\032\016protocol.prot"
    "o\032\ndot3.proto\032\tllc.proto\"\t\n\007Dot2Llc:7\n\007d"
    "ot2Llc\022\022.OstProto.Protocol\030\316\001 \001(\0132\021.OstP"
    "roto.Dot2Llc", 132);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dot2llc.proto", &protobuf_RegisterTypes);
  Dot2Llc::default_instance_ = new Dot2Llc();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    206, 11, false, false,
    &::OstProto::Dot2Llc::default_instance());
  Dot2Llc::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dot2llc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dot2llc_2eproto {
  StaticDescriptorInitializer_dot2llc_2eproto() {
    protobuf_AddDesc_dot2llc_2eproto();
  }
} static_descriptor_initializer_dot2llc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

Dot2Llc::Dot2Llc()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Dot2Llc::InitAsDefaultInstance() {
}

Dot2Llc::Dot2Llc(const Dot2Llc& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Dot2Llc::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Dot2Llc::~Dot2Llc() {
  SharedDtor();
}

void Dot2Llc::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Dot2Llc::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Dot2Llc::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Dot2Llc_descriptor_;
}

const Dot2Llc& Dot2Llc::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dot2llc_2eproto();
  return *default_instance_;
}

Dot2Llc* Dot2Llc::default_instance_ = NULL;

Dot2Llc* Dot2Llc::New() const {
  return new Dot2Llc;
}

void Dot2Llc::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Dot2Llc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void Dot2Llc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Dot2Llc::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Dot2Llc::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Dot2Llc::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Dot2Llc* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Dot2Llc*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Dot2Llc::MergeFrom(const Dot2Llc& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Dot2Llc::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Dot2Llc::CopyFrom(const Dot2Llc& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dot2Llc::IsInitialized() const {

  return true;
}

void Dot2Llc::Swap(Dot2Llc* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Dot2Llc::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Dot2Llc_descriptor_;
  metadata.reflection = Dot2Llc_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Dot2Llc >, 11, false >
  dot2Llc(kDot2LlcFieldNumber, ::OstProto::Dot2Llc::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)