// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/RevocationRequestInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Events/RevocationRequestInfo.pb.h"

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

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

namespace {

const ::google::protobuf::Descriptor* RevocationRequestInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RevocationRequestInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Events_2fRevocationRequestInfo_2eproto() {
  protobuf_AddDesc_Events_2fRevocationRequestInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Events/RevocationRequestInfo.proto");
  GOOGLE_CHECK(file != NULL);
  RevocationRequestInfo_descriptor_ = file->message_type(0);
  static const int RevocationRequestInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationRequestInfo, initiatorboxid_),
  };
  RevocationRequestInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RevocationRequestInfo_descriptor_,
      RevocationRequestInfo::default_instance_,
      RevocationRequestInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationRequestInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationRequestInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RevocationRequestInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Events_2fRevocationRequestInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RevocationRequestInfo_descriptor_, &RevocationRequestInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Events_2fRevocationRequestInfo_2eproto() {
  delete RevocationRequestInfo::default_instance_;
  delete RevocationRequestInfo_reflection_;
}

void protobuf_AddDesc_Events_2fRevocationRequestInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"Events/RevocationRequestInfo.proto\022\027Di"
    "adoc.Api.Proto.Events\"/\n\025RevocationReque"
    "stInfo\022\026\n\016InitiatorBoxId\030\001 \002(\t", 110);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Events/RevocationRequestInfo.proto", &protobuf_RegisterTypes);
  RevocationRequestInfo::default_instance_ = new RevocationRequestInfo();
  RevocationRequestInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Events_2fRevocationRequestInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Events_2fRevocationRequestInfo_2eproto {
  StaticDescriptorInitializer_Events_2fRevocationRequestInfo_2eproto() {
    protobuf_AddDesc_Events_2fRevocationRequestInfo_2eproto();
  }
} static_descriptor_initializer_Events_2fRevocationRequestInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RevocationRequestInfo::kInitiatorBoxIdFieldNumber;
#endif  // !_MSC_VER

RevocationRequestInfo::RevocationRequestInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Events.RevocationRequestInfo)
}

void RevocationRequestInfo::InitAsDefaultInstance() {
}

RevocationRequestInfo::RevocationRequestInfo(const RevocationRequestInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Events.RevocationRequestInfo)
}

void RevocationRequestInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  initiatorboxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RevocationRequestInfo::~RevocationRequestInfo() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  SharedDtor();
}

void RevocationRequestInfo::SharedDtor() {
  if (initiatorboxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete initiatorboxid_;
  }
  if (this != default_instance_) {
  }
}

void RevocationRequestInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RevocationRequestInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RevocationRequestInfo_descriptor_;
}

const RevocationRequestInfo& RevocationRequestInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Events_2fRevocationRequestInfo_2eproto();
  return *default_instance_;
}

RevocationRequestInfo* RevocationRequestInfo::default_instance_ = NULL;

RevocationRequestInfo* RevocationRequestInfo::New() const {
  return new RevocationRequestInfo;
}

void RevocationRequestInfo::Clear() {
  if (has_initiatorboxid()) {
    if (initiatorboxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      initiatorboxid_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RevocationRequestInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string InitiatorBoxId = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_initiatorboxid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->initiatorboxid().data(), this->initiatorboxid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "initiatorboxid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  return false;
#undef DO_
}

void RevocationRequestInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  // required string InitiatorBoxId = 1;
  if (has_initiatorboxid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initiatorboxid().data(), this->initiatorboxid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initiatorboxid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->initiatorboxid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Events.RevocationRequestInfo)
}

::google::protobuf::uint8* RevocationRequestInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  // required string InitiatorBoxId = 1;
  if (has_initiatorboxid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initiatorboxid().data(), this->initiatorboxid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initiatorboxid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->initiatorboxid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Events.RevocationRequestInfo)
  return target;
}

int RevocationRequestInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string InitiatorBoxId = 1;
    if (has_initiatorboxid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->initiatorboxid());
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

void RevocationRequestInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RevocationRequestInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RevocationRequestInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RevocationRequestInfo::MergeFrom(const RevocationRequestInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_initiatorboxid()) {
      set_initiatorboxid(from.initiatorboxid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RevocationRequestInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RevocationRequestInfo::CopyFrom(const RevocationRequestInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RevocationRequestInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void RevocationRequestInfo::Swap(RevocationRequestInfo* other) {
  if (other != this) {
    std::swap(initiatorboxid_, other->initiatorboxid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RevocationRequestInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RevocationRequestInfo_descriptor_;
  metadata.reflection = RevocationRequestInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
