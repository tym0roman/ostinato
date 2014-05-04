// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: payload.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "payload.pb.h"

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

const ::google::protobuf::Descriptor* Payload_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Payload_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Payload_DataPatternMode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_payload_2eproto() {
  protobuf_AddDesc_payload_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "payload.proto");
  GOOGLE_CHECK(file != NULL);
  Payload_descriptor_ = file->message_type(0);
  static const int Payload_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payload, pattern_mode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payload, pattern_),
  };
  Payload_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Payload_descriptor_,
      Payload::default_instance_,
      Payload_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payload, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payload, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Payload));
  Payload_DataPatternMode_descriptor_ = Payload_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_payload_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Payload_descriptor_, &Payload::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_payload_2eproto() {
  delete Payload::default_instance_;
  delete Payload_reflection_;
}

void protobuf_AddDesc_payload_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rpayload.proto\022\010OstProto\032\016protocol.prot"
    "o\"\262\001\n\007Payload\0227\n\014pattern_mode\030\001 \001(\0162!.Os"
    "tProto.Payload.DataPatternMode\022\017\n\007patter"
    "n\030\002 \001(\r\"]\n\017DataPatternMode\022\023\n\017e_dp_fixed"
    "_word\020\000\022\021\n\re_dp_inc_byte\020\001\022\021\n\re_dp_dec_b"
    "yte\020\002\022\017\n\013e_dp_random\020\003:6\n\007payload\022\022.OstP"
    "roto.Protocol\030e \001(\0132\021.OstProto.Payload", 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "payload.proto", &protobuf_RegisterTypes);
  Payload::default_instance_ = new Payload();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    101, 11, false, false,
    &::OstProto::Payload::default_instance());
  Payload::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_payload_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_payload_2eproto {
  StaticDescriptorInitializer_payload_2eproto() {
    protobuf_AddDesc_payload_2eproto();
  }
} static_descriptor_initializer_payload_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Payload_DataPatternMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Payload_DataPatternMode_descriptor_;
}
bool Payload_DataPatternMode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Payload_DataPatternMode Payload::e_dp_fixed_word;
const Payload_DataPatternMode Payload::e_dp_inc_byte;
const Payload_DataPatternMode Payload::e_dp_dec_byte;
const Payload_DataPatternMode Payload::e_dp_random;
const Payload_DataPatternMode Payload::DataPatternMode_MIN;
const Payload_DataPatternMode Payload::DataPatternMode_MAX;
const int Payload::DataPatternMode_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Payload::kPatternModeFieldNumber;
const int Payload::kPatternFieldNumber;
#endif  // !_MSC_VER

Payload::Payload()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Payload::InitAsDefaultInstance() {
}

Payload::Payload(const Payload& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Payload::SharedCtor() {
  _cached_size_ = 0;
  pattern_mode_ = 0;
  pattern_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Payload::~Payload() {
  SharedDtor();
}

void Payload::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Payload::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Payload::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Payload_descriptor_;
}

const Payload& Payload::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_payload_2eproto();
  return *default_instance_;
}

Payload* Payload::default_instance_ = NULL;

Payload* Payload::New() const {
  return new Payload;
}

void Payload::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    pattern_mode_ = 0;
    pattern_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Payload::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .OstProto.Payload.DataPatternMode pattern_mode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::OstProto::Payload_DataPatternMode_IsValid(value)) {
            set_pattern_mode(static_cast< ::OstProto::Payload_DataPatternMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_pattern;
        break;
      }

      // optional uint32 pattern = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pattern:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pattern_)));
          set_has_pattern();
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

void Payload::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .OstProto.Payload.DataPatternMode pattern_mode = 1;
  if (has_pattern_mode()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->pattern_mode(), output);
  }

  // optional uint32 pattern = 2;
  if (has_pattern()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->pattern(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Payload::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .OstProto.Payload.DataPatternMode pattern_mode = 1;
  if (has_pattern_mode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->pattern_mode(), target);
  }

  // optional uint32 pattern = 2;
  if (has_pattern()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->pattern(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Payload::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .OstProto.Payload.DataPatternMode pattern_mode = 1;
    if (has_pattern_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->pattern_mode());
    }

    // optional uint32 pattern = 2;
    if (has_pattern()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pattern());
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

void Payload::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Payload* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Payload*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Payload::MergeFrom(const Payload& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pattern_mode()) {
      set_pattern_mode(from.pattern_mode());
    }
    if (from.has_pattern()) {
      set_pattern(from.pattern());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Payload::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Payload::CopyFrom(const Payload& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Payload::IsInitialized() const {

  return true;
}

void Payload::Swap(Payload* other) {
  if (other != this) {
    std::swap(pattern_mode_, other->pattern_mode_);
    std::swap(pattern_, other->pattern_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Payload::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Payload_descriptor_;
  metadata.reflection = Payload_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Payload >, 11, false >
  payload(kPayloadFieldNumber, ::OstProto::Payload::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)