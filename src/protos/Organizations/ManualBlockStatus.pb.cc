// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Organizations/ManualBlockStatus.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Organizations/ManualBlockStatus.pb.h"

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
namespace Organizations {

namespace {

const ::google::protobuf::Descriptor* ManualBlockStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ManualBlockStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Organizations_2fManualBlockStatus_2eproto() {
  protobuf_AddDesc_Organizations_2fManualBlockStatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Organizations/ManualBlockStatus.proto");
  GOOGLE_CHECK(file != NULL);
  ManualBlockStatus_descriptor_ = file->message_type(0);
  static const int ManualBlockStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManualBlockStatus, isblocked_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManualBlockStatus, requestedticks_),
  };
  ManualBlockStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ManualBlockStatus_descriptor_,
      ManualBlockStatus::default_instance_,
      ManualBlockStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManualBlockStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManualBlockStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ManualBlockStatus));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Organizations_2fManualBlockStatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ManualBlockStatus_descriptor_, &ManualBlockStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Organizations_2fManualBlockStatus_2eproto() {
  delete ManualBlockStatus::default_instance_;
  delete ManualBlockStatus_reflection_;
}

void protobuf_AddDesc_Organizations_2fManualBlockStatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%Organizations/ManualBlockStatus.proto\022"
    "\036Diadoc.Api.Proto.Organizations\">\n\021Manua"
    "lBlockStatus\022\021\n\tIsBlocked\030\001 \002(\010\022\026\n\016Reque"
    "stedTicks\030\002 \001(\020", 135);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Organizations/ManualBlockStatus.proto", &protobuf_RegisterTypes);
  ManualBlockStatus::default_instance_ = new ManualBlockStatus();
  ManualBlockStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Organizations_2fManualBlockStatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Organizations_2fManualBlockStatus_2eproto {
  StaticDescriptorInitializer_Organizations_2fManualBlockStatus_2eproto() {
    protobuf_AddDesc_Organizations_2fManualBlockStatus_2eproto();
  }
} static_descriptor_initializer_Organizations_2fManualBlockStatus_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ManualBlockStatus::kIsBlockedFieldNumber;
const int ManualBlockStatus::kRequestedTicksFieldNumber;
#endif  // !_MSC_VER

ManualBlockStatus::ManualBlockStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
}

void ManualBlockStatus::InitAsDefaultInstance() {
}

ManualBlockStatus::ManualBlockStatus(const ManualBlockStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
}

void ManualBlockStatus::SharedCtor() {
  _cached_size_ = 0;
  isblocked_ = false;
  requestedticks_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ManualBlockStatus::~ManualBlockStatus() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  SharedDtor();
}

void ManualBlockStatus::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ManualBlockStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ManualBlockStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ManualBlockStatus_descriptor_;
}

const ManualBlockStatus& ManualBlockStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Organizations_2fManualBlockStatus_2eproto();
  return *default_instance_;
}

ManualBlockStatus* ManualBlockStatus::default_instance_ = NULL;

ManualBlockStatus* ManualBlockStatus::New() const {
  return new ManualBlockStatus;
}

void ManualBlockStatus::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ManualBlockStatus*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(requestedticks_, isblocked_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ManualBlockStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool IsBlocked = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isblocked_)));
          set_has_isblocked();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_RequestedTicks;
        break;
      }

      // optional sfixed64 RequestedTicks = 2;
      case 2: {
        if (tag == 17) {
         parse_RequestedTicks:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED64>(
                 input, &requestedticks_)));
          set_has_requestedticks();
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  return false;
#undef DO_
}

void ManualBlockStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  // required bool IsBlocked = 1;
  if (has_isblocked()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->isblocked(), output);
  }

  // optional sfixed64 RequestedTicks = 2;
  if (has_requestedticks()) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed64(2, this->requestedticks(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
}

::google::protobuf::uint8* ManualBlockStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  // required bool IsBlocked = 1;
  if (has_isblocked()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->isblocked(), target);
  }

  // optional sfixed64 RequestedTicks = 2;
  if (has_requestedticks()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed64ToArray(2, this->requestedticks(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Organizations.ManualBlockStatus)
  return target;
}

int ManualBlockStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool IsBlocked = 1;
    if (has_isblocked()) {
      total_size += 1 + 1;
    }

    // optional sfixed64 RequestedTicks = 2;
    if (has_requestedticks()) {
      total_size += 1 + 8;
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

void ManualBlockStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ManualBlockStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ManualBlockStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ManualBlockStatus::MergeFrom(const ManualBlockStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isblocked()) {
      set_isblocked(from.isblocked());
    }
    if (from.has_requestedticks()) {
      set_requestedticks(from.requestedticks());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ManualBlockStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ManualBlockStatus::CopyFrom(const ManualBlockStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManualBlockStatus::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ManualBlockStatus::Swap(ManualBlockStatus* other) {
  if (other != this) {
    std::swap(isblocked_, other->isblocked_);
    std::swap(requestedticks_, other->requestedticks_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ManualBlockStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ManualBlockStatus_descriptor_;
  metadata.reflection = ManualBlockStatus_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Organizations
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
