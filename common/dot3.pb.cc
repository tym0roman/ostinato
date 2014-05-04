// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dot3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dot3.pb.h"

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

const ::google::protobuf::Descriptor* Dot3_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Dot3_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dot3_2eproto() {
  protobuf_AddDesc_dot3_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dot3.proto");
  GOOGLE_CHECK(file != NULL);
  Dot3_descriptor_ = file->message_type(0);
  static const int Dot3_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot3, is_override_length_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot3, length_),
  };
  Dot3_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Dot3_descriptor_,
      Dot3::default_instance_,
      Dot3_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot3, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dot3, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Dot3));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dot3_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Dot3_descriptor_, &Dot3::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dot3_2eproto() {
  delete Dot3::default_instance_;
  delete Dot3_reflection_;
}

void protobuf_AddDesc_dot3_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ndot3.proto\022\010OstProto\032\016protocol.proto\"2"
    "\n\004Dot3\022\032\n\022is_override_length\030\002 \001(\010\022\016\n\006le"
    "ngth\030\001 \001(\r:1\n\004dot3\022\022.OstProto.Protocol\030\311"
    "\001 \001(\0132\016.OstProto.Dot3", 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dot3.proto", &protobuf_RegisterTypes);
  Dot3::default_instance_ = new Dot3();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    201, 11, false, false,
    &::OstProto::Dot3::default_instance());
  Dot3::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dot3_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dot3_2eproto {
  StaticDescriptorInitializer_dot3_2eproto() {
    protobuf_AddDesc_dot3_2eproto();
  }
} static_descriptor_initializer_dot3_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Dot3::kIsOverrideLengthFieldNumber;
const int Dot3::kLengthFieldNumber;
#endif  // !_MSC_VER

Dot3::Dot3()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Dot3::InitAsDefaultInstance() {
}

Dot3::Dot3(const Dot3& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Dot3::SharedCtor() {
  _cached_size_ = 0;
  is_override_length_ = false;
  length_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Dot3::~Dot3() {
  SharedDtor();
}

void Dot3::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Dot3::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Dot3::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Dot3_descriptor_;
}

const Dot3& Dot3::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dot3_2eproto();
  return *default_instance_;
}

Dot3* Dot3::default_instance_ = NULL;

Dot3* Dot3::New() const {
  return new Dot3;
}

void Dot3::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_override_length_ = false;
    length_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Dot3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 length = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &length_)));
          set_has_length();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_is_override_length;
        break;
      }

      // optional bool is_override_length = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_length_)));
          set_has_is_override_length();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Dot3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 length = 1;
  if (has_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->length(), output);
  }

  // optional bool is_override_length = 2;
  if (has_is_override_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_override_length(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Dot3::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 length = 1;
  if (has_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->length(), target);
  }

  // optional bool is_override_length = 2;
  if (has_is_override_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_override_length(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Dot3::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool is_override_length = 2;
    if (has_is_override_length()) {
      total_size += 1 + 1;
    }

    // optional uint32 length = 1;
    if (has_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->length());
    }

  }
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

void Dot3::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Dot3* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Dot3*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Dot3::MergeFrom(const Dot3& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_override_length()) {
      set_is_override_length(from.is_override_length());
    }
    if (from.has_length()) {
      set_length(from.length());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Dot3::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Dot3::CopyFrom(const Dot3& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dot3::IsInitialized() const {

  return true;
}

void Dot3::Swap(Dot3* other) {
  if (other != this) {
    std::swap(is_override_length_, other->is_override_length_);
    std::swap(length_, other->length_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Dot3::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Dot3_descriptor_;
  metadata.reflection = Dot3_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Dot3 >, 11, false >
  dot3(kDot3FieldNumber, ::OstProto::Dot3::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)
