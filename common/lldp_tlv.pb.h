// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lldp_tlv.proto

#ifndef PROTOBUF_lldp_5ftlv_2eproto__INCLUDED
#define PROTOBUF_lldp_5ftlv_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "protocol.pb.h"
// @@protoc_insertion_point(includes)

namespace OstProto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lldp_5ftlv_2eproto();
void protobuf_AssignDesc_lldp_5ftlv_2eproto();
void protobuf_ShutdownFile_lldp_5ftlv_2eproto();

class Lldp_tlv;

// ===================================================================

class Lldp_tlv : public ::google::protobuf::Message {
 public:
  Lldp_tlv();
  virtual ~Lldp_tlv();

  Lldp_tlv(const Lldp_tlv& from);

  inline Lldp_tlv& operator=(const Lldp_tlv& from) {
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
  static const Lldp_tlv& default_instance();

  void Swap(Lldp_tlv* other);

  // implements Message ----------------------------------------------

  Lldp_tlv* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Lldp_tlv& from);
  void MergeFrom(const Lldp_tlv& from);
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

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // optional uint32 len = 2;
  inline bool has_len() const;
  inline void clear_len();
  static const int kLenFieldNumber = 2;
  inline ::google::protobuf::uint32 len() const;
  inline void set_len(::google::protobuf::uint32 value);

  // optional bytes content = 3;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 3;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:OstProto.Lldp_tlv)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_len();
  inline void clear_has_len();
  inline void set_has_content();
  inline void clear_has_content();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 len_;
  ::std::string* content_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_lldp_5ftlv_2eproto();
  friend void protobuf_AssignDesc_lldp_5ftlv_2eproto();
  friend void protobuf_ShutdownFile_lldp_5ftlv_2eproto();

  void InitAsDefaultInstance();
  static Lldp_tlv* default_instance_;
};
// ===================================================================

static const int kLldpTlvFieldNumber = 211;
extern ::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Lldp_tlv >, 11, false >
  lldp_tlv;

// ===================================================================

// Lldp_tlv

// optional uint32 id = 1;
inline bool Lldp_tlv::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Lldp_tlv::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Lldp_tlv::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Lldp_tlv::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Lldp_tlv::id() const {
  return id_;
}
inline void Lldp_tlv::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// optional uint32 len = 2;
inline bool Lldp_tlv::has_len() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Lldp_tlv::set_has_len() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Lldp_tlv::clear_has_len() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Lldp_tlv::clear_len() {
  len_ = 0u;
  clear_has_len();
}
inline ::google::protobuf::uint32 Lldp_tlv::len() const {
  return len_;
}
inline void Lldp_tlv::set_len(::google::protobuf::uint32 value) {
  set_has_len();
  len_ = value;
}

// optional bytes content = 3;
inline bool Lldp_tlv::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Lldp_tlv::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Lldp_tlv::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Lldp_tlv::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& Lldp_tlv::content() const {
  return *content_;
}
inline void Lldp_tlv::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void Lldp_tlv::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void Lldp_tlv::set_content(const void* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Lldp_tlv::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* Lldp_tlv::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Lldp_tlv::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lldp_5ftlv_2eproto__INCLUDED
