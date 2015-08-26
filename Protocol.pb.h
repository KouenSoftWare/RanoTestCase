// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol.proto

#ifndef PROTOBUF_Protocol_2eproto__INCLUDED
#define PROTOBUF_Protocol_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Protocol_2eproto();
void protobuf_AssignDesc_Protocol_2eproto();
void protobuf_ShutdownFile_Protocol_2eproto();

class ArrayInt;
class HeadProtocol;
class TestProtocol;

// ===================================================================

class ArrayInt : public ::google::protobuf::Message {
 public:
  ArrayInt();
  virtual ~ArrayInt();

  ArrayInt(const ArrayInt& from);

  inline ArrayInt& operator=(const ArrayInt& from) {
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
  static const ArrayInt& default_instance();

  void Swap(ArrayInt* other);

  // implements Message ----------------------------------------------

  ArrayInt* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArrayInt& from);
  void MergeFrom(const ArrayInt& from);
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

  // repeated int32 arrayInt = 1;
  inline int arrayint_size() const;
  inline void clear_arrayint();
  static const int kArrayIntFieldNumber = 1;
  inline ::google::protobuf::int32 arrayint(int index) const;
  inline void set_arrayint(int index, ::google::protobuf::int32 value);
  inline void add_arrayint(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      arrayint() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_arrayint();

  // @@protoc_insertion_point(class_scope:ArrayInt)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > arrayint_;
  friend void  protobuf_AddDesc_Protocol_2eproto();
  friend void protobuf_AssignDesc_Protocol_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2eproto();

  void InitAsDefaultInstance();
  static ArrayInt* default_instance_;
};
// -------------------------------------------------------------------

class HeadProtocol : public ::google::protobuf::Message {
 public:
  HeadProtocol();
  virtual ~HeadProtocol();

  HeadProtocol(const HeadProtocol& from);

  inline HeadProtocol& operator=(const HeadProtocol& from) {
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
  static const HeadProtocol& default_instance();

  void Swap(HeadProtocol* other);

  // implements Message ----------------------------------------------

  HeadProtocol* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeadProtocol& from);
  void MergeFrom(const HeadProtocol& from);
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

  // optional int32 access_point_fd = 1;
  inline bool has_access_point_fd() const;
  inline void clear_access_point_fd();
  static const int kAccessPointFdFieldNumber = 1;
  inline ::google::protobuf::int32 access_point_fd() const;
  inline void set_access_point_fd(::google::protobuf::int32 value);

  // optional int32 source_id = 2;
  inline bool has_source_id() const;
  inline void clear_source_id();
  static const int kSourceIdFieldNumber = 2;
  inline ::google::protobuf::int32 source_id() const;
  inline void set_source_id(::google::protobuf::int32 value);

  // optional int32 target_id = 3;
  inline bool has_target_id() const;
  inline void clear_target_id();
  static const int kTargetIdFieldNumber = 3;
  inline ::google::protobuf::int32 target_id() const;
  inline void set_target_id(::google::protobuf::int32 value);

  // optional .ArrayInt pass_by_id = 4;
  inline bool has_pass_by_id() const;
  inline void clear_pass_by_id();
  static const int kPassByIdFieldNumber = 4;
  inline const ::ArrayInt& pass_by_id() const;
  inline ::ArrayInt* mutable_pass_by_id();
  inline ::ArrayInt* release_pass_by_id();
  inline void set_allocated_pass_by_id(::ArrayInt* pass_by_id);

  // optional int32 proto_body_size = 5;
  inline bool has_proto_body_size() const;
  inline void clear_proto_body_size();
  static const int kProtoBodySizeFieldNumber = 5;
  inline ::google::protobuf::int32 proto_body_size() const;
  inline void set_proto_body_size(::google::protobuf::int32 value);

  // optional string proto_body_name = 6;
  inline bool has_proto_body_name() const;
  inline void clear_proto_body_name();
  static const int kProtoBodyNameFieldNumber = 6;
  inline const ::std::string& proto_body_name() const;
  inline void set_proto_body_name(const ::std::string& value);
  inline void set_proto_body_name(const char* value);
  inline void set_proto_body_name(const char* value, size_t size);
  inline ::std::string* mutable_proto_body_name();
  inline ::std::string* release_proto_body_name();
  inline void set_allocated_proto_body_name(::std::string* proto_body_name);

  // optional bytes proto_body_buffer = 7;
  inline bool has_proto_body_buffer() const;
  inline void clear_proto_body_buffer();
  static const int kProtoBodyBufferFieldNumber = 7;
  inline const ::std::string& proto_body_buffer() const;
  inline void set_proto_body_buffer(const ::std::string& value);
  inline void set_proto_body_buffer(const char* value);
  inline void set_proto_body_buffer(const void* value, size_t size);
  inline ::std::string* mutable_proto_body_buffer();
  inline ::std::string* release_proto_body_buffer();
  inline void set_allocated_proto_body_buffer(::std::string* proto_body_buffer);

  // @@protoc_insertion_point(class_scope:HeadProtocol)
 private:
  inline void set_has_access_point_fd();
  inline void clear_has_access_point_fd();
  inline void set_has_source_id();
  inline void clear_has_source_id();
  inline void set_has_target_id();
  inline void clear_has_target_id();
  inline void set_has_pass_by_id();
  inline void clear_has_pass_by_id();
  inline void set_has_proto_body_size();
  inline void clear_has_proto_body_size();
  inline void set_has_proto_body_name();
  inline void clear_has_proto_body_name();
  inline void set_has_proto_body_buffer();
  inline void clear_has_proto_body_buffer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 access_point_fd_;
  ::google::protobuf::int32 source_id_;
  ::ArrayInt* pass_by_id_;
  ::google::protobuf::int32 target_id_;
  ::google::protobuf::int32 proto_body_size_;
  ::std::string* proto_body_name_;
  ::std::string* proto_body_buffer_;
  friend void  protobuf_AddDesc_Protocol_2eproto();
  friend void protobuf_AssignDesc_Protocol_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2eproto();

  void InitAsDefaultInstance();
  static HeadProtocol* default_instance_;
};
// -------------------------------------------------------------------

class TestProtocol : public ::google::protobuf::Message {
 public:
  TestProtocol();
  virtual ~TestProtocol();

  TestProtocol(const TestProtocol& from);

  inline TestProtocol& operator=(const TestProtocol& from) {
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
  static const TestProtocol& default_instance();

  void Swap(TestProtocol* other);

  // implements Message ----------------------------------------------

  TestProtocol* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestProtocol& from);
  void MergeFrom(const TestProtocol& from);
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

  // optional int32 status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  // optional string msg = 2;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 2;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:TestProtocol)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* msg_;
  ::google::protobuf::int32 status_;
  friend void  protobuf_AddDesc_Protocol_2eproto();
  friend void protobuf_AssignDesc_Protocol_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2eproto();

  void InitAsDefaultInstance();
  static TestProtocol* default_instance_;
};
// ===================================================================


// ===================================================================

// ArrayInt

// repeated int32 arrayInt = 1;
inline int ArrayInt::arrayint_size() const {
  return arrayint_.size();
}
inline void ArrayInt::clear_arrayint() {
  arrayint_.Clear();
}
inline ::google::protobuf::int32 ArrayInt::arrayint(int index) const {
  // @@protoc_insertion_point(field_get:ArrayInt.arrayInt)
  return arrayint_.Get(index);
}
inline void ArrayInt::set_arrayint(int index, ::google::protobuf::int32 value) {
  arrayint_.Set(index, value);
  // @@protoc_insertion_point(field_set:ArrayInt.arrayInt)
}
inline void ArrayInt::add_arrayint(::google::protobuf::int32 value) {
  arrayint_.Add(value);
  // @@protoc_insertion_point(field_add:ArrayInt.arrayInt)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ArrayInt::arrayint() const {
  // @@protoc_insertion_point(field_list:ArrayInt.arrayInt)
  return arrayint_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ArrayInt::mutable_arrayint() {
  // @@protoc_insertion_point(field_mutable_list:ArrayInt.arrayInt)
  return &arrayint_;
}

// -------------------------------------------------------------------

// HeadProtocol

// optional int32 access_point_fd = 1;
inline bool HeadProtocol::has_access_point_fd() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeadProtocol::set_has_access_point_fd() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeadProtocol::clear_has_access_point_fd() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeadProtocol::clear_access_point_fd() {
  access_point_fd_ = 0;
  clear_has_access_point_fd();
}
inline ::google::protobuf::int32 HeadProtocol::access_point_fd() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.access_point_fd)
  return access_point_fd_;
}
inline void HeadProtocol::set_access_point_fd(::google::protobuf::int32 value) {
  set_has_access_point_fd();
  access_point_fd_ = value;
  // @@protoc_insertion_point(field_set:HeadProtocol.access_point_fd)
}

// optional int32 source_id = 2;
inline bool HeadProtocol::has_source_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HeadProtocol::set_has_source_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HeadProtocol::clear_has_source_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HeadProtocol::clear_source_id() {
  source_id_ = 0;
  clear_has_source_id();
}
inline ::google::protobuf::int32 HeadProtocol::source_id() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.source_id)
  return source_id_;
}
inline void HeadProtocol::set_source_id(::google::protobuf::int32 value) {
  set_has_source_id();
  source_id_ = value;
  // @@protoc_insertion_point(field_set:HeadProtocol.source_id)
}

// optional int32 target_id = 3;
inline bool HeadProtocol::has_target_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HeadProtocol::set_has_target_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HeadProtocol::clear_has_target_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HeadProtocol::clear_target_id() {
  target_id_ = 0;
  clear_has_target_id();
}
inline ::google::protobuf::int32 HeadProtocol::target_id() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.target_id)
  return target_id_;
}
inline void HeadProtocol::set_target_id(::google::protobuf::int32 value) {
  set_has_target_id();
  target_id_ = value;
  // @@protoc_insertion_point(field_set:HeadProtocol.target_id)
}

// optional .ArrayInt pass_by_id = 4;
inline bool HeadProtocol::has_pass_by_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HeadProtocol::set_has_pass_by_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HeadProtocol::clear_has_pass_by_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HeadProtocol::clear_pass_by_id() {
  if (pass_by_id_ != NULL) pass_by_id_->::ArrayInt::Clear();
  clear_has_pass_by_id();
}
inline const ::ArrayInt& HeadProtocol::pass_by_id() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.pass_by_id)
  return pass_by_id_ != NULL ? *pass_by_id_ : *default_instance_->pass_by_id_;
}
inline ::ArrayInt* HeadProtocol::mutable_pass_by_id() {
  set_has_pass_by_id();
  if (pass_by_id_ == NULL) pass_by_id_ = new ::ArrayInt;
  // @@protoc_insertion_point(field_mutable:HeadProtocol.pass_by_id)
  return pass_by_id_;
}
inline ::ArrayInt* HeadProtocol::release_pass_by_id() {
  clear_has_pass_by_id();
  ::ArrayInt* temp = pass_by_id_;
  pass_by_id_ = NULL;
  return temp;
}
inline void HeadProtocol::set_allocated_pass_by_id(::ArrayInt* pass_by_id) {
  delete pass_by_id_;
  pass_by_id_ = pass_by_id;
  if (pass_by_id) {
    set_has_pass_by_id();
  } else {
    clear_has_pass_by_id();
  }
  // @@protoc_insertion_point(field_set_allocated:HeadProtocol.pass_by_id)
}

// optional int32 proto_body_size = 5;
inline bool HeadProtocol::has_proto_body_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void HeadProtocol::set_has_proto_body_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void HeadProtocol::clear_has_proto_body_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void HeadProtocol::clear_proto_body_size() {
  proto_body_size_ = 0;
  clear_has_proto_body_size();
}
inline ::google::protobuf::int32 HeadProtocol::proto_body_size() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.proto_body_size)
  return proto_body_size_;
}
inline void HeadProtocol::set_proto_body_size(::google::protobuf::int32 value) {
  set_has_proto_body_size();
  proto_body_size_ = value;
  // @@protoc_insertion_point(field_set:HeadProtocol.proto_body_size)
}

// optional string proto_body_name = 6;
inline bool HeadProtocol::has_proto_body_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void HeadProtocol::set_has_proto_body_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void HeadProtocol::clear_has_proto_body_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void HeadProtocol::clear_proto_body_name() {
  if (proto_body_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_name_->clear();
  }
  clear_has_proto_body_name();
}
inline const ::std::string& HeadProtocol::proto_body_name() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.proto_body_name)
  return *proto_body_name_;
}
inline void HeadProtocol::set_proto_body_name(const ::std::string& value) {
  set_has_proto_body_name();
  if (proto_body_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_name_ = new ::std::string;
  }
  proto_body_name_->assign(value);
  // @@protoc_insertion_point(field_set:HeadProtocol.proto_body_name)
}
inline void HeadProtocol::set_proto_body_name(const char* value) {
  set_has_proto_body_name();
  if (proto_body_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_name_ = new ::std::string;
  }
  proto_body_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:HeadProtocol.proto_body_name)
}
inline void HeadProtocol::set_proto_body_name(const char* value, size_t size) {
  set_has_proto_body_name();
  if (proto_body_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_name_ = new ::std::string;
  }
  proto_body_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:HeadProtocol.proto_body_name)
}
inline ::std::string* HeadProtocol::mutable_proto_body_name() {
  set_has_proto_body_name();
  if (proto_body_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:HeadProtocol.proto_body_name)
  return proto_body_name_;
}
inline ::std::string* HeadProtocol::release_proto_body_name() {
  clear_has_proto_body_name();
  if (proto_body_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = proto_body_name_;
    proto_body_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void HeadProtocol::set_allocated_proto_body_name(::std::string* proto_body_name) {
  if (proto_body_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete proto_body_name_;
  }
  if (proto_body_name) {
    set_has_proto_body_name();
    proto_body_name_ = proto_body_name;
  } else {
    clear_has_proto_body_name();
    proto_body_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:HeadProtocol.proto_body_name)
}

// optional bytes proto_body_buffer = 7;
inline bool HeadProtocol::has_proto_body_buffer() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void HeadProtocol::set_has_proto_body_buffer() {
  _has_bits_[0] |= 0x00000040u;
}
inline void HeadProtocol::clear_has_proto_body_buffer() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void HeadProtocol::clear_proto_body_buffer() {
  if (proto_body_buffer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_buffer_->clear();
  }
  clear_has_proto_body_buffer();
}
inline const ::std::string& HeadProtocol::proto_body_buffer() const {
  // @@protoc_insertion_point(field_get:HeadProtocol.proto_body_buffer)
  return *proto_body_buffer_;
}
inline void HeadProtocol::set_proto_body_buffer(const ::std::string& value) {
  set_has_proto_body_buffer();
  if (proto_body_buffer_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_buffer_ = new ::std::string;
  }
  proto_body_buffer_->assign(value);
  // @@protoc_insertion_point(field_set:HeadProtocol.proto_body_buffer)
}
inline void HeadProtocol::set_proto_body_buffer(const char* value) {
  set_has_proto_body_buffer();
  if (proto_body_buffer_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_buffer_ = new ::std::string;
  }
  proto_body_buffer_->assign(value);
  // @@protoc_insertion_point(field_set_char:HeadProtocol.proto_body_buffer)
}
inline void HeadProtocol::set_proto_body_buffer(const void* value, size_t size) {
  set_has_proto_body_buffer();
  if (proto_body_buffer_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_buffer_ = new ::std::string;
  }
  proto_body_buffer_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:HeadProtocol.proto_body_buffer)
}
inline ::std::string* HeadProtocol::mutable_proto_body_buffer() {
  set_has_proto_body_buffer();
  if (proto_body_buffer_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    proto_body_buffer_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:HeadProtocol.proto_body_buffer)
  return proto_body_buffer_;
}
inline ::std::string* HeadProtocol::release_proto_body_buffer() {
  clear_has_proto_body_buffer();
  if (proto_body_buffer_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = proto_body_buffer_;
    proto_body_buffer_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void HeadProtocol::set_allocated_proto_body_buffer(::std::string* proto_body_buffer) {
  if (proto_body_buffer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete proto_body_buffer_;
  }
  if (proto_body_buffer) {
    set_has_proto_body_buffer();
    proto_body_buffer_ = proto_body_buffer;
  } else {
    clear_has_proto_body_buffer();
    proto_body_buffer_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:HeadProtocol.proto_body_buffer)
}

// -------------------------------------------------------------------

// TestProtocol

// optional int32 status = 1;
inline bool TestProtocol::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestProtocol::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestProtocol::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestProtocol::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 TestProtocol::status() const {
  // @@protoc_insertion_point(field_get:TestProtocol.status)
  return status_;
}
inline void TestProtocol::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:TestProtocol.status)
}

// optional string msg = 2;
inline bool TestProtocol::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestProtocol::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestProtocol::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestProtocol::clear_msg() {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::std::string& TestProtocol::msg() const {
  // @@protoc_insertion_point(field_get:TestProtocol.msg)
  return *msg_;
}
inline void TestProtocol::set_msg(const ::std::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set:TestProtocol.msg)
}
inline void TestProtocol::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set_char:TestProtocol.msg)
}
inline void TestProtocol::set_msg(const char* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TestProtocol.msg)
}
inline ::std::string* TestProtocol::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:TestProtocol.msg)
  return msg_;
}
inline ::std::string* TestProtocol::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = msg_;
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void TestProtocol::set_allocated_msg(::std::string* msg) {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:TestProtocol.msg)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protocol_2eproto__INCLUDED
