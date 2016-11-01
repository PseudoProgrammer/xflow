// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/node.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/node.pb.h"

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

namespace ps {

namespace {

const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Node_Role_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fnode_2eproto() {
  protobuf_AddDesc_proto_2fnode_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/node.proto");
  GOOGLE_CHECK(file != NULL);
  Node_descriptor_ = file->message_type(0);
  static const int Node_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, role_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, rank_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, hostname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, key_),
  };
  Node_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Node));
  Node_Role_descriptor_ = Node_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fnode_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Node_descriptor_, &Node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fnode_2eproto() {
  delete Node::default_instance_;
  delete Node_reflection_;
}

void protobuf_AddDesc_proto_2fnode_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ps::protobuf_AddDesc_proto_2frange_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020proto/node.proto\022\002ps\032\021proto/range.prot"
    "o\"\275\001\n\004Node\022\033\n\004role\030\001 \002(\0162\r.ps.Node.Role\022"
    "\n\n\002id\030\002 \001(\t\022\014\n\004rank\030\005 \001(\005\022\020\n\010hostname\030\003 "
    "\001(\t\022\014\n\004port\030\004 \001(\005\022\030\n\003key\030\006 \001(\0132\013.ps.PbRa"
    "nge\"D\n\004Role\022\n\n\006SERVER\020\000\022\n\n\006WORKER\020\001\022\r\n\tS"
    "CHEDULER\020\003\022\t\n\005GROUP\020\004\022\n\n\006UNUSED\020\005", 233);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/node.proto", &protobuf_RegisterTypes);
  Node::default_instance_ = new Node();
  Node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fnode_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fnode_2eproto {
  StaticDescriptorInitializer_proto_2fnode_2eproto() {
    protobuf_AddDesc_proto_2fnode_2eproto();
  }
} static_descriptor_initializer_proto_2fnode_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Node_Role_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_Role_descriptor_;
}
bool Node_Role_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Node_Role Node::SERVER;
const Node_Role Node::WORKER;
const Node_Role Node::SCHEDULER;
const Node_Role Node::GROUP;
const Node_Role Node::UNUSED;
const Node_Role Node::Role_MIN;
const Node_Role Node::Role_MAX;
const int Node::Role_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Node::kRoleFieldNumber;
const int Node::kIdFieldNumber;
const int Node::kRankFieldNumber;
const int Node::kHostnameFieldNumber;
const int Node::kPortFieldNumber;
const int Node::kKeyFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Node::InitAsDefaultInstance() {
  key_ = const_cast< ::ps::PbRange*>(&::ps::PbRange::default_instance());
}

Node::Node(const Node& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Node::SharedCtor() {
  _cached_size_ = 0;
  role_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  rank_ = 0;
  hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = 0;
  key_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  SharedDtor();
}

void Node::SharedDtor() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    delete hostname_;
  }
  if (this != default_instance_) {
    delete key_;
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fnode_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New() const {
  return new Node;
}

void Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    role_ = 0;
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::kEmptyString) {
        id_->clear();
      }
    }
    rank_ = 0;
    if (has_hostname()) {
      if (hostname_ != &::google::protobuf::internal::kEmptyString) {
        hostname_->clear();
      }
    }
    port_ = 0;
    if (has_key()) {
      if (key_ != NULL) key_->::ps::PbRange::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .ps.Node.Role role = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ps::Node_Role_IsValid(value)) {
            set_role(static_cast< ::ps::Node_Role >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_id;
        break;
      }

      // optional string id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_hostname;
        break;
      }

      // optional string hostname = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hostname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hostname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->hostname().data(), this->hostname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_port;
        break;
      }

      // optional int32 port = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_rank;
        break;
      }

      // optional int32 rank = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rank:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rank_)));
          set_has_rank();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_key;
        break;
      }

      // optional .ps.PbRange key = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key()));
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

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .ps.Node.Role role = 1;
  if (has_role()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->role(), output);
  }

  // optional string id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->id(), output);
  }

  // optional string hostname = 3;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->hostname(), output);
  }

  // optional int32 port = 4;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->port(), output);
  }

  // optional int32 rank = 5;
  if (has_rank()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->rank(), output);
  }

  // optional .ps.PbRange key = 6;
  if (has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->key(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .ps.Node.Role role = 1;
  if (has_role()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->role(), target);
  }

  // optional string id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->id(), target);
  }

  // optional string hostname = 3;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->hostname(), target);
  }

  // optional int32 port = 4;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->port(), target);
  }

  // optional int32 rank = 5;
  if (has_rank()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->rank(), target);
  }

  // optional .ps.PbRange key = 6;
  if (has_key()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->key(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .ps.Node.Role role = 1;
    if (has_role()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->role());
    }

    // optional string id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional int32 rank = 5;
    if (has_rank()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rank());
    }

    // optional string hostname = 3;
    if (has_hostname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hostname());
    }

    // optional int32 port = 4;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // optional .ps.PbRange key = 6;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->key());
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

void Node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_role()) {
      set_role(from.role());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_rank()) {
      set_rank(from.rank());
    }
    if (from.has_hostname()) {
      set_hostname(from.hostname());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_key()) {
      mutable_key()->::ps::PbRange::MergeFrom(from.key());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_key()) {
    if (!this->key().IsInitialized()) return false;
  }
  return true;
}

void Node::Swap(Node* other) {
  if (other != this) {
    std::swap(role_, other->role_);
    std::swap(id_, other->id_);
    std::swap(rank_, other->rank_);
    std::swap(hostname_, other->hostname_);
    std::swap(port_, other->port_);
    std::swap(key_, other->key_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ps

// @@protoc_insertion_point(global_scope)
