// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ip6.proto

#ifndef PROTOBUF_ip6_2eproto__INCLUDED
#define PROTOBUF_ip6_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "protocol.pb.h"
// @@protoc_insertion_point(includes)

namespace OstProto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ip6_2eproto();
void protobuf_AssignDesc_ip6_2eproto();
void protobuf_ShutdownFile_ip6_2eproto();

class Ip6;

enum Ip6_AddrMode {
  Ip6_AddrMode_kFixed = 0,
  Ip6_AddrMode_kIncHost = 1,
  Ip6_AddrMode_kDecHost = 2,
  Ip6_AddrMode_kRandomHost = 3
};
bool Ip6_AddrMode_IsValid(int value);
const Ip6_AddrMode Ip6_AddrMode_AddrMode_MIN = Ip6_AddrMode_kFixed;
const Ip6_AddrMode Ip6_AddrMode_AddrMode_MAX = Ip6_AddrMode_kRandomHost;
const int Ip6_AddrMode_AddrMode_ARRAYSIZE = Ip6_AddrMode_AddrMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ip6_AddrMode_descriptor();
inline const ::std::string& Ip6_AddrMode_Name(Ip6_AddrMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ip6_AddrMode_descriptor(), value);
}
inline bool Ip6_AddrMode_Parse(
    const ::std::string& name, Ip6_AddrMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ip6_AddrMode>(
    Ip6_AddrMode_descriptor(), name, value);
}
// ===================================================================

class Ip6 : public ::google::protobuf::Message {
 public:
  Ip6();
  virtual ~Ip6();

  Ip6(const Ip6& from);

  inline Ip6& operator=(const Ip6& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ip6& default_instance();

  void Swap(Ip6* other);

  // implements Message ----------------------------------------------

  Ip6* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ip6& from);
  void MergeFrom(const Ip6& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Ip6_AddrMode AddrMode;
  static const AddrMode kFixed = Ip6_AddrMode_kFixed;
  static const AddrMode kIncHost = Ip6_AddrMode_kIncHost;
  static const AddrMode kDecHost = Ip6_AddrMode_kDecHost;
  static const AddrMode kRandomHost = Ip6_AddrMode_kRandomHost;
  static inline bool AddrMode_IsValid(int value) {
    return Ip6_AddrMode_IsValid(value);
  }
  static const AddrMode AddrMode_MIN =
    Ip6_AddrMode_AddrMode_MIN;
  static const AddrMode AddrMode_MAX =
    Ip6_AddrMode_AddrMode_MAX;
  static const int AddrMode_ARRAYSIZE =
    Ip6_AddrMode_AddrMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AddrMode_descriptor() {
    return Ip6_AddrMode_descriptor();
  }
  static inline const ::std::string& AddrMode_Name(AddrMode value) {
    return Ip6_AddrMode_Name(value);
  }
  static inline bool AddrMode_Parse(const ::std::string& name,
      AddrMode* value) {
    return Ip6_AddrMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional bool is_override_version = 1;
  inline bool has_is_override_version() const;
  inline void clear_is_override_version();
  static const int kIsOverrideVersionFieldNumber = 1;
  inline bool is_override_version() const;
  inline void set_is_override_version(bool value);

  // optional bool is_override_payload_length = 2;
  inline bool has_is_override_payload_length() const;
  inline void clear_is_override_payload_length();
  static const int kIsOverridePayloadLengthFieldNumber = 2;
  inline bool is_override_payload_length() const;
  inline void set_is_override_payload_length(bool value);

  // optional bool is_override_next_header = 3;
  inline bool has_is_override_next_header() const;
  inline void clear_is_override_next_header();
  static const int kIsOverrideNextHeaderFieldNumber = 3;
  inline bool is_override_next_header() const;
  inline void set_is_override_next_header(bool value);

  // optional uint32 version = 4 [default = 6];
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 4;
  inline ::google::protobuf::uint32 version() const;
  inline void set_version(::google::protobuf::uint32 value);

  // optional uint32 traffic_class = 5;
  inline bool has_traffic_class() const;
  inline void clear_traffic_class();
  static const int kTrafficClassFieldNumber = 5;
  inline ::google::protobuf::uint32 traffic_class() const;
  inline void set_traffic_class(::google::protobuf::uint32 value);

  // optional uint32 flow_label = 6;
  inline bool has_flow_label() const;
  inline void clear_flow_label();
  static const int kFlowLabelFieldNumber = 6;
  inline ::google::protobuf::uint32 flow_label() const;
  inline void set_flow_label(::google::protobuf::uint32 value);

  // optional uint32 payload_length = 7;
  inline bool has_payload_length() const;
  inline void clear_payload_length();
  static const int kPayloadLengthFieldNumber = 7;
  inline ::google::protobuf::uint32 payload_length() const;
  inline void set_payload_length(::google::protobuf::uint32 value);

  // optional uint32 next_header = 8;
  inline bool has_next_header() const;
  inline void clear_next_header();
  static const int kNextHeaderFieldNumber = 8;
  inline ::google::protobuf::uint32 next_header() const;
  inline void set_next_header(::google::protobuf::uint32 value);

  // optional uint32 hop_limit = 9 [default = 127];
  inline bool has_hop_limit() const;
  inline void clear_hop_limit();
  static const int kHopLimitFieldNumber = 9;
  inline ::google::protobuf::uint32 hop_limit() const;
  inline void set_hop_limit(::google::protobuf::uint32 value);

  // optional uint64 src_addr_hi = 10;
  inline bool has_src_addr_hi() const;
  inline void clear_src_addr_hi();
  static const int kSrcAddrHiFieldNumber = 10;
  inline ::google::protobuf::uint64 src_addr_hi() const;
  inline void set_src_addr_hi(::google::protobuf::uint64 value);

  // optional uint64 src_addr_lo = 11;
  inline bool has_src_addr_lo() const;
  inline void clear_src_addr_lo();
  static const int kSrcAddrLoFieldNumber = 11;
  inline ::google::protobuf::uint64 src_addr_lo() const;
  inline void set_src_addr_lo(::google::protobuf::uint64 value);

  // optional .OstProto.Ip6.AddrMode src_addr_mode = 12 [default = kFixed];
  inline bool has_src_addr_mode() const;
  inline void clear_src_addr_mode();
  static const int kSrcAddrModeFieldNumber = 12;
  inline ::OstProto::Ip6_AddrMode src_addr_mode() const;
  inline void set_src_addr_mode(::OstProto::Ip6_AddrMode value);

  // optional uint32 src_addr_count = 13 [default = 16];
  inline bool has_src_addr_count() const;
  inline void clear_src_addr_count();
  static const int kSrcAddrCountFieldNumber = 13;
  inline ::google::protobuf::uint32 src_addr_count() const;
  inline void set_src_addr_count(::google::protobuf::uint32 value);

  // optional uint32 src_addr_prefix = 14 [default = 64];
  inline bool has_src_addr_prefix() const;
  inline void clear_src_addr_prefix();
  static const int kSrcAddrPrefixFieldNumber = 14;
  inline ::google::protobuf::uint32 src_addr_prefix() const;
  inline void set_src_addr_prefix(::google::protobuf::uint32 value);

  // optional uint64 dst_addr_hi = 15;
  inline bool has_dst_addr_hi() const;
  inline void clear_dst_addr_hi();
  static const int kDstAddrHiFieldNumber = 15;
  inline ::google::protobuf::uint64 dst_addr_hi() const;
  inline void set_dst_addr_hi(::google::protobuf::uint64 value);

  // optional uint64 dst_addr_lo = 16;
  inline bool has_dst_addr_lo() const;
  inline void clear_dst_addr_lo();
  static const int kDstAddrLoFieldNumber = 16;
  inline ::google::protobuf::uint64 dst_addr_lo() const;
  inline void set_dst_addr_lo(::google::protobuf::uint64 value);

  // optional .OstProto.Ip6.AddrMode dst_addr_mode = 17 [default = kFixed];
  inline bool has_dst_addr_mode() const;
  inline void clear_dst_addr_mode();
  static const int kDstAddrModeFieldNumber = 17;
  inline ::OstProto::Ip6_AddrMode dst_addr_mode() const;
  inline void set_dst_addr_mode(::OstProto::Ip6_AddrMode value);

  // optional uint32 dst_addr_count = 18 [default = 16];
  inline bool has_dst_addr_count() const;
  inline void clear_dst_addr_count();
  static const int kDstAddrCountFieldNumber = 18;
  inline ::google::protobuf::uint32 dst_addr_count() const;
  inline void set_dst_addr_count(::google::protobuf::uint32 value);

  // optional uint32 dst_addr_prefix = 19 [default = 64];
  inline bool has_dst_addr_prefix() const;
  inline void clear_dst_addr_prefix();
  static const int kDstAddrPrefixFieldNumber = 19;
  inline ::google::protobuf::uint32 dst_addr_prefix() const;
  inline void set_dst_addr_prefix(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:OstProto.Ip6)
 private:
  inline void set_has_is_override_version();
  inline void clear_has_is_override_version();
  inline void set_has_is_override_payload_length();
  inline void clear_has_is_override_payload_length();
  inline void set_has_is_override_next_header();
  inline void clear_has_is_override_next_header();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_traffic_class();
  inline void clear_has_traffic_class();
  inline void set_has_flow_label();
  inline void clear_has_flow_label();
  inline void set_has_payload_length();
  inline void clear_has_payload_length();
  inline void set_has_next_header();
  inline void clear_has_next_header();
  inline void set_has_hop_limit();
  inline void clear_has_hop_limit();
  inline void set_has_src_addr_hi();
  inline void clear_has_src_addr_hi();
  inline void set_has_src_addr_lo();
  inline void clear_has_src_addr_lo();
  inline void set_has_src_addr_mode();
  inline void clear_has_src_addr_mode();
  inline void set_has_src_addr_count();
  inline void clear_has_src_addr_count();
  inline void set_has_src_addr_prefix();
  inline void clear_has_src_addr_prefix();
  inline void set_has_dst_addr_hi();
  inline void clear_has_dst_addr_hi();
  inline void set_has_dst_addr_lo();
  inline void clear_has_dst_addr_lo();
  inline void set_has_dst_addr_mode();
  inline void clear_has_dst_addr_mode();
  inline void set_has_dst_addr_count();
  inline void clear_has_dst_addr_count();
  inline void set_has_dst_addr_prefix();
  inline void clear_has_dst_addr_prefix();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool is_override_version_;
  bool is_override_payload_length_;
  bool is_override_next_header_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 traffic_class_;
  ::google::protobuf::uint32 flow_label_;
  ::google::protobuf::uint32 payload_length_;
  ::google::protobuf::uint32 next_header_;
  ::google::protobuf::uint64 src_addr_hi_;
  ::google::protobuf::uint32 hop_limit_;
  int src_addr_mode_;
  ::google::protobuf::uint64 src_addr_lo_;
  ::google::protobuf::uint32 src_addr_count_;
  ::google::protobuf::uint32 src_addr_prefix_;
  ::google::protobuf::uint64 dst_addr_hi_;
  ::google::protobuf::uint64 dst_addr_lo_;
  int dst_addr_mode_;
  ::google::protobuf::uint32 dst_addr_count_;
  ::google::protobuf::uint32 dst_addr_prefix_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(19 + 31) / 32];

  friend void  protobuf_AddDesc_ip6_2eproto();
  friend void protobuf_AssignDesc_ip6_2eproto();
  friend void protobuf_ShutdownFile_ip6_2eproto();

  void InitAsDefaultInstance();
  static Ip6* default_instance_;
};
// ===================================================================

static const int kIp6FieldNumber = 302;
extern ::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Ip6 >, 11, false >
  ip6;

// ===================================================================

// Ip6

// optional bool is_override_version = 1;
inline bool Ip6::has_is_override_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ip6::set_has_is_override_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ip6::clear_has_is_override_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ip6::clear_is_override_version() {
  is_override_version_ = false;
  clear_has_is_override_version();
}
inline bool Ip6::is_override_version() const {
  return is_override_version_;
}
inline void Ip6::set_is_override_version(bool value) {
  set_has_is_override_version();
  is_override_version_ = value;
}

// optional bool is_override_payload_length = 2;
inline bool Ip6::has_is_override_payload_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Ip6::set_has_is_override_payload_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Ip6::clear_has_is_override_payload_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Ip6::clear_is_override_payload_length() {
  is_override_payload_length_ = false;
  clear_has_is_override_payload_length();
}
inline bool Ip6::is_override_payload_length() const {
  return is_override_payload_length_;
}
inline void Ip6::set_is_override_payload_length(bool value) {
  set_has_is_override_payload_length();
  is_override_payload_length_ = value;
}

// optional bool is_override_next_header = 3;
inline bool Ip6::has_is_override_next_header() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Ip6::set_has_is_override_next_header() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Ip6::clear_has_is_override_next_header() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Ip6::clear_is_override_next_header() {
  is_override_next_header_ = false;
  clear_has_is_override_next_header();
}
inline bool Ip6::is_override_next_header() const {
  return is_override_next_header_;
}
inline void Ip6::set_is_override_next_header(bool value) {
  set_has_is_override_next_header();
  is_override_next_header_ = value;
}

// optional uint32 version = 4 [default = 6];
inline bool Ip6::has_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Ip6::set_has_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Ip6::clear_has_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Ip6::clear_version() {
  version_ = 6u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Ip6::version() const {
  return version_;
}
inline void Ip6::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
}

// optional uint32 traffic_class = 5;
inline bool Ip6::has_traffic_class() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Ip6::set_has_traffic_class() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Ip6::clear_has_traffic_class() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Ip6::clear_traffic_class() {
  traffic_class_ = 0u;
  clear_has_traffic_class();
}
inline ::google::protobuf::uint32 Ip6::traffic_class() const {
  return traffic_class_;
}
inline void Ip6::set_traffic_class(::google::protobuf::uint32 value) {
  set_has_traffic_class();
  traffic_class_ = value;
}

// optional uint32 flow_label = 6;
inline bool Ip6::has_flow_label() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Ip6::set_has_flow_label() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Ip6::clear_has_flow_label() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Ip6::clear_flow_label() {
  flow_label_ = 0u;
  clear_has_flow_label();
}
inline ::google::protobuf::uint32 Ip6::flow_label() const {
  return flow_label_;
}
inline void Ip6::set_flow_label(::google::protobuf::uint32 value) {
  set_has_flow_label();
  flow_label_ = value;
}

// optional uint32 payload_length = 7;
inline bool Ip6::has_payload_length() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Ip6::set_has_payload_length() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Ip6::clear_has_payload_length() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Ip6::clear_payload_length() {
  payload_length_ = 0u;
  clear_has_payload_length();
}
inline ::google::protobuf::uint32 Ip6::payload_length() const {
  return payload_length_;
}
inline void Ip6::set_payload_length(::google::protobuf::uint32 value) {
  set_has_payload_length();
  payload_length_ = value;
}

// optional uint32 next_header = 8;
inline bool Ip6::has_next_header() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Ip6::set_has_next_header() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Ip6::clear_has_next_header() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Ip6::clear_next_header() {
  next_header_ = 0u;
  clear_has_next_header();
}
inline ::google::protobuf::uint32 Ip6::next_header() const {
  return next_header_;
}
inline void Ip6::set_next_header(::google::protobuf::uint32 value) {
  set_has_next_header();
  next_header_ = value;
}

// optional uint32 hop_limit = 9 [default = 127];
inline bool Ip6::has_hop_limit() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Ip6::set_has_hop_limit() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Ip6::clear_has_hop_limit() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Ip6::clear_hop_limit() {
  hop_limit_ = 127u;
  clear_has_hop_limit();
}
inline ::google::protobuf::uint32 Ip6::hop_limit() const {
  return hop_limit_;
}
inline void Ip6::set_hop_limit(::google::protobuf::uint32 value) {
  set_has_hop_limit();
  hop_limit_ = value;
}

// optional uint64 src_addr_hi = 10;
inline bool Ip6::has_src_addr_hi() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Ip6::set_has_src_addr_hi() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Ip6::clear_has_src_addr_hi() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Ip6::clear_src_addr_hi() {
  src_addr_hi_ = GOOGLE_ULONGLONG(0);
  clear_has_src_addr_hi();
}
inline ::google::protobuf::uint64 Ip6::src_addr_hi() const {
  return src_addr_hi_;
}
inline void Ip6::set_src_addr_hi(::google::protobuf::uint64 value) {
  set_has_src_addr_hi();
  src_addr_hi_ = value;
}

// optional uint64 src_addr_lo = 11;
inline bool Ip6::has_src_addr_lo() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Ip6::set_has_src_addr_lo() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Ip6::clear_has_src_addr_lo() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Ip6::clear_src_addr_lo() {
  src_addr_lo_ = GOOGLE_ULONGLONG(0);
  clear_has_src_addr_lo();
}
inline ::google::protobuf::uint64 Ip6::src_addr_lo() const {
  return src_addr_lo_;
}
inline void Ip6::set_src_addr_lo(::google::protobuf::uint64 value) {
  set_has_src_addr_lo();
  src_addr_lo_ = value;
}

// optional .OstProto.Ip6.AddrMode src_addr_mode = 12 [default = kFixed];
inline bool Ip6::has_src_addr_mode() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Ip6::set_has_src_addr_mode() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Ip6::clear_has_src_addr_mode() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Ip6::clear_src_addr_mode() {
  src_addr_mode_ = 0;
  clear_has_src_addr_mode();
}
inline ::OstProto::Ip6_AddrMode Ip6::src_addr_mode() const {
  return static_cast< ::OstProto::Ip6_AddrMode >(src_addr_mode_);
}
inline void Ip6::set_src_addr_mode(::OstProto::Ip6_AddrMode value) {
  assert(::OstProto::Ip6_AddrMode_IsValid(value));
  set_has_src_addr_mode();
  src_addr_mode_ = value;
}

// optional uint32 src_addr_count = 13 [default = 16];
inline bool Ip6::has_src_addr_count() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Ip6::set_has_src_addr_count() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Ip6::clear_has_src_addr_count() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Ip6::clear_src_addr_count() {
  src_addr_count_ = 16u;
  clear_has_src_addr_count();
}
inline ::google::protobuf::uint32 Ip6::src_addr_count() const {
  return src_addr_count_;
}
inline void Ip6::set_src_addr_count(::google::protobuf::uint32 value) {
  set_has_src_addr_count();
  src_addr_count_ = value;
}

// optional uint32 src_addr_prefix = 14 [default = 64];
inline bool Ip6::has_src_addr_prefix() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Ip6::set_has_src_addr_prefix() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Ip6::clear_has_src_addr_prefix() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Ip6::clear_src_addr_prefix() {
  src_addr_prefix_ = 64u;
  clear_has_src_addr_prefix();
}
inline ::google::protobuf::uint32 Ip6::src_addr_prefix() const {
  return src_addr_prefix_;
}
inline void Ip6::set_src_addr_prefix(::google::protobuf::uint32 value) {
  set_has_src_addr_prefix();
  src_addr_prefix_ = value;
}

// optional uint64 dst_addr_hi = 15;
inline bool Ip6::has_dst_addr_hi() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Ip6::set_has_dst_addr_hi() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Ip6::clear_has_dst_addr_hi() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Ip6::clear_dst_addr_hi() {
  dst_addr_hi_ = GOOGLE_ULONGLONG(0);
  clear_has_dst_addr_hi();
}
inline ::google::protobuf::uint64 Ip6::dst_addr_hi() const {
  return dst_addr_hi_;
}
inline void Ip6::set_dst_addr_hi(::google::protobuf::uint64 value) {
  set_has_dst_addr_hi();
  dst_addr_hi_ = value;
}

// optional uint64 dst_addr_lo = 16;
inline bool Ip6::has_dst_addr_lo() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Ip6::set_has_dst_addr_lo() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Ip6::clear_has_dst_addr_lo() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Ip6::clear_dst_addr_lo() {
  dst_addr_lo_ = GOOGLE_ULONGLONG(0);
  clear_has_dst_addr_lo();
}
inline ::google::protobuf::uint64 Ip6::dst_addr_lo() const {
  return dst_addr_lo_;
}
inline void Ip6::set_dst_addr_lo(::google::protobuf::uint64 value) {
  set_has_dst_addr_lo();
  dst_addr_lo_ = value;
}

// optional .OstProto.Ip6.AddrMode dst_addr_mode = 17 [default = kFixed];
inline bool Ip6::has_dst_addr_mode() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Ip6::set_has_dst_addr_mode() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Ip6::clear_has_dst_addr_mode() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Ip6::clear_dst_addr_mode() {
  dst_addr_mode_ = 0;
  clear_has_dst_addr_mode();
}
inline ::OstProto::Ip6_AddrMode Ip6::dst_addr_mode() const {
  return static_cast< ::OstProto::Ip6_AddrMode >(dst_addr_mode_);
}
inline void Ip6::set_dst_addr_mode(::OstProto::Ip6_AddrMode value) {
  assert(::OstProto::Ip6_AddrMode_IsValid(value));
  set_has_dst_addr_mode();
  dst_addr_mode_ = value;
}

// optional uint32 dst_addr_count = 18 [default = 16];
inline bool Ip6::has_dst_addr_count() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void Ip6::set_has_dst_addr_count() {
  _has_bits_[0] |= 0x00020000u;
}
inline void Ip6::clear_has_dst_addr_count() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void Ip6::clear_dst_addr_count() {
  dst_addr_count_ = 16u;
  clear_has_dst_addr_count();
}
inline ::google::protobuf::uint32 Ip6::dst_addr_count() const {
  return dst_addr_count_;
}
inline void Ip6::set_dst_addr_count(::google::protobuf::uint32 value) {
  set_has_dst_addr_count();
  dst_addr_count_ = value;
}

// optional uint32 dst_addr_prefix = 19 [default = 64];
inline bool Ip6::has_dst_addr_prefix() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void Ip6::set_has_dst_addr_prefix() {
  _has_bits_[0] |= 0x00040000u;
}
inline void Ip6::clear_has_dst_addr_prefix() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void Ip6::clear_dst_addr_prefix() {
  dst_addr_prefix_ = 64u;
  clear_has_dst_addr_prefix();
}
inline ::google::protobuf::uint32 Ip6::dst_addr_prefix() const {
  return dst_addr_prefix_;
}
inline void Ip6::set_dst_addr_prefix(::google::protobuf::uint32 value) {
  set_has_dst_addr_prefix();
  dst_addr_prefix_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OstProto::Ip6_AddrMode>() {
  return ::OstProto::Ip6_AddrMode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ip6_2eproto__INCLUDED
