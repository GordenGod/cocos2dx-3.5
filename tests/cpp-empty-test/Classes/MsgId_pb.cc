// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgId_pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tetris_protocol {

namespace {

const ::google::protobuf::EnumDescriptor* MsgId_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_MsgId_2eproto() {
  protobuf_AddDesc_MsgId_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MsgId.proto");
  GOOGLE_CHECK(file != NULL);
  MsgId_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MsgId_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_MsgId_2eproto() {
}

void protobuf_AddDesc_MsgId_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013MsgId.proto\022\017tetris_protocol*)\n\005MsgId\022"
    "\017\n\tC2S_Login\020\240\215\006\022\017\n\tS2C_Login\020\241\215\006B!\n\023com"
    ".tetris.protocolB\nMsgIdProto", 108);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MsgId.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgId_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgId_2eproto {
  StaticDescriptorInitializer_MsgId_2eproto() {
    protobuf_AddDesc_MsgId_2eproto();
  }
} static_descriptor_initializer_MsgId_2eproto_;

const ::google::protobuf::EnumDescriptor* MsgId_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgId_descriptor_;
}
bool MsgId_IsValid(int value) {
  switch(value) {
    case 100000:
    case 100001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tetris_protocol

// @@protoc_insertion_point(global_scope)
