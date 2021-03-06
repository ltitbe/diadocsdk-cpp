// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FullVersion.proto

#ifndef PROTOBUF_FullVersion_2eproto__INCLUDED
#define PROTOBUF_FullVersion_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_FullVersion_2eproto();
void protobuf_AssignDesc_FullVersion_2eproto();
void protobuf_ShutdownFile_FullVersion_2eproto();

class FullVersion;

// ===================================================================

class FullVersion : public ::google::protobuf::Message {
 public:
  FullVersion();
  virtual ~FullVersion();

  FullVersion(const FullVersion& from);

  inline FullVersion& operator=(const FullVersion& from) {
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
  static const FullVersion& default_instance();

  void Swap(FullVersion* other);

  // implements Message ----------------------------------------------

  FullVersion* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FullVersion& from);
  void MergeFrom(const FullVersion& from);
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

  // required string TypeNamedId = 1;
  inline bool has_typenamedid() const;
  inline void clear_typenamedid();
  static const int kTypeNamedIdFieldNumber = 1;
  inline const ::std::string& typenamedid() const;
  inline void set_typenamedid(const ::std::string& value);
  inline void set_typenamedid(const char* value);
  inline void set_typenamedid(const char* value, size_t size);
  inline ::std::string* mutable_typenamedid();
  inline ::std::string* release_typenamedid();
  inline void set_allocated_typenamedid(::std::string* typenamedid);

  // required string Function = 2;
  inline bool has_function() const;
  inline void clear_function();
  static const int kFunctionFieldNumber = 2;
  inline const ::std::string& function() const;
  inline void set_function(const ::std::string& value);
  inline void set_function(const char* value);
  inline void set_function(const char* value, size_t size);
  inline ::std::string* mutable_function();
  inline ::std::string* release_function();
  inline void set_allocated_function(::std::string* function);

  // required string Version = 3;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 3;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.FullVersion)
 private:
  inline void set_has_typenamedid();
  inline void clear_has_typenamedid();
  inline void set_has_function();
  inline void clear_has_function();
  inline void set_has_version();
  inline void clear_has_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* typenamedid_;
  ::std::string* function_;
  ::std::string* version_;
  friend void  protobuf_AddDesc_FullVersion_2eproto();
  friend void protobuf_AssignDesc_FullVersion_2eproto();
  friend void protobuf_ShutdownFile_FullVersion_2eproto();

  void InitAsDefaultInstance();
  static FullVersion* default_instance_;
};
// ===================================================================


// ===================================================================

// FullVersion

// required string TypeNamedId = 1;
inline bool FullVersion::has_typenamedid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FullVersion::set_has_typenamedid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FullVersion::clear_has_typenamedid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FullVersion::clear_typenamedid() {
  if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_->clear();
  }
  clear_has_typenamedid();
}
inline const ::std::string& FullVersion::typenamedid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.FullVersion.TypeNamedId)
  return *typenamedid_;
}
inline void FullVersion::set_typenamedid(const ::std::string& value) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.FullVersion.TypeNamedId)
}
inline void FullVersion::set_typenamedid(const char* value) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.FullVersion.TypeNamedId)
}
inline void FullVersion::set_typenamedid(const char* value, size_t size) {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  typenamedid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.FullVersion.TypeNamedId)
}
inline ::std::string* FullVersion::mutable_typenamedid() {
  set_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    typenamedid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.FullVersion.TypeNamedId)
  return typenamedid_;
}
inline ::std::string* FullVersion::release_typenamedid() {
  clear_has_typenamedid();
  if (typenamedid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = typenamedid_;
    typenamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FullVersion::set_allocated_typenamedid(::std::string* typenamedid) {
  if (typenamedid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete typenamedid_;
  }
  if (typenamedid) {
    set_has_typenamedid();
    typenamedid_ = typenamedid;
  } else {
    clear_has_typenamedid();
    typenamedid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.FullVersion.TypeNamedId)
}

// required string Function = 2;
inline bool FullVersion::has_function() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FullVersion::set_has_function() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FullVersion::clear_has_function() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FullVersion::clear_function() {
  if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_->clear();
  }
  clear_has_function();
}
inline const ::std::string& FullVersion::function() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.FullVersion.Function)
  return *function_;
}
inline void FullVersion::set_function(const ::std::string& value) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.FullVersion.Function)
}
inline void FullVersion::set_function(const char* value) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.FullVersion.Function)
}
inline void FullVersion::set_function(const char* value, size_t size) {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  function_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.FullVersion.Function)
}
inline ::std::string* FullVersion::mutable_function() {
  set_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    function_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.FullVersion.Function)
  return function_;
}
inline ::std::string* FullVersion::release_function() {
  clear_has_function();
  if (function_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = function_;
    function_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FullVersion::set_allocated_function(::std::string* function) {
  if (function_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete function_;
  }
  if (function) {
    set_has_function();
    function_ = function;
  } else {
    clear_has_function();
    function_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.FullVersion.Function)
}

// required string Version = 3;
inline bool FullVersion::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FullVersion::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FullVersion::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FullVersion::clear_version() {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& FullVersion::version() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.FullVersion.Version)
  return *version_;
}
inline void FullVersion::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.FullVersion.Version)
}
inline void FullVersion::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.FullVersion.Version)
}
inline void FullVersion::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.FullVersion.Version)
}
inline ::std::string* FullVersion::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    version_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.FullVersion.Version)
  return version_;
}
inline ::std::string* FullVersion::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FullVersion::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.FullVersion.Version)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FullVersion_2eproto__INCLUDED
