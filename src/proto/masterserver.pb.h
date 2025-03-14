// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: masterserver.proto

#ifndef PROTOBUF_INCLUDED_masterserver_2eproto
#define PROTOBUF_INCLUDED_masterserver_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "file.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_masterserver_2eproto 

namespace protobuf_masterserver_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_masterserver_2eproto
namespace syalis {
namespace fs {
class CreateFileRequest;
class CreateFileRequestDefaultTypeInternal;
extern CreateFileRequestDefaultTypeInternal _CreateFileRequest_default_instance_;
class CreateFileResponse;
class CreateFileResponseDefaultTypeInternal;
extern CreateFileResponseDefaultTypeInternal _CreateFileResponse_default_instance_;
class ListDirectoryRequest;
class ListDirectoryRequestDefaultTypeInternal;
extern ListDirectoryRequestDefaultTypeInternal _ListDirectoryRequest_default_instance_;
class ListDirectoryResponse;
class ListDirectoryResponseDefaultTypeInternal;
extern ListDirectoryResponseDefaultTypeInternal _ListDirectoryResponse_default_instance_;
}  // namespace fs
}  // namespace syalis
namespace google {
namespace protobuf {
template<> ::goya::fs::CreateFileRequest* Arena::CreateMaybeMessage<::goya::fs::CreateFileRequest>(Arena*);
template<> ::goya::fs::CreateFileResponse* Arena::CreateMaybeMessage<::goya::fs::CreateFileResponse>(Arena*);
template<> ::goya::fs::ListDirectoryRequest* Arena::CreateMaybeMessage<::goya::fs::ListDirectoryRequest>(Arena*);
template<> ::goya::fs::ListDirectoryResponse* Arena::CreateMaybeMessage<::goya::fs::ListDirectoryResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace goya {
namespace fs {

// ===================================================================

class CreateFileRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:goya.fs.CreateFileRequest) */ {
 public:
  CreateFileRequest();
  virtual ~CreateFileRequest();

  CreateFileRequest(const CreateFileRequest& from);

  inline CreateFileRequest& operator=(const CreateFileRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CreateFileRequest(CreateFileRequest&& from) noexcept
    : CreateFileRequest() {
    *this = ::std::move(from);
  }

  inline CreateFileRequest& operator=(CreateFileRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateFileRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CreateFileRequest* internal_default_instance() {
    return reinterpret_cast<const CreateFileRequest*>(
               &_CreateFileRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CreateFileRequest* other);
  friend void swap(CreateFileRequest& a, CreateFileRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CreateFileRequest* New() const final {
    return CreateMaybeMessage<CreateFileRequest>(NULL);
  }

  CreateFileRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CreateFileRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CreateFileRequest& from);
  void MergeFrom(const CreateFileRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CreateFileRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string file_name = 3;
  void clear_file_name();
  static const int kFileNameFieldNumber = 3;
  const ::std::string& file_name() const;
  void set_file_name(const ::std::string& value);
  #if LANG_CXX11
  void set_file_name(::std::string&& value);
  #endif
  void set_file_name(const char* value);
  void set_file_name(const char* value, size_t size);
  ::std::string* mutable_file_name();
  ::std::string* release_file_name();
  void set_allocated_file_name(::std::string* file_name);

  // uint64 sequence_id = 1;
  void clear_sequence_id();
  static const int kSequenceIdFieldNumber = 1;
  ::google::protobuf::uint64 sequence_id() const;
  void set_sequence_id(::google::protobuf::uint64 value);

  // int32 type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:goya.fs.CreateFileRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr file_name_;
  ::google::protobuf::uint64 sequence_id_;
  ::google::protobuf::int32 type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_masterserver_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CreateFileResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:goya.fs.CreateFileResponse) */ {
 public:
  CreateFileResponse();
  virtual ~CreateFileResponse();

  CreateFileResponse(const CreateFileResponse& from);

  inline CreateFileResponse& operator=(const CreateFileResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CreateFileResponse(CreateFileResponse&& from) noexcept
    : CreateFileResponse() {
    *this = ::std::move(from);
  }

  inline CreateFileResponse& operator=(CreateFileResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateFileResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CreateFileResponse* internal_default_instance() {
    return reinterpret_cast<const CreateFileResponse*>(
               &_CreateFileResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CreateFileResponse* other);
  friend void swap(CreateFileResponse& a, CreateFileResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CreateFileResponse* New() const final {
    return CreateMaybeMessage<CreateFileResponse>(NULL);
  }

  CreateFileResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CreateFileResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CreateFileResponse& from);
  void MergeFrom(const CreateFileResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CreateFileResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 sequence_id = 1;
  void clear_sequence_id();
  static const int kSequenceIdFieldNumber = 1;
  ::google::protobuf::uint64 sequence_id() const;
  void set_sequence_id(::google::protobuf::uint64 value);

  // int32 status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:goya.fs.CreateFileResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 sequence_id_;
  ::google::protobuf::int32 status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_masterserver_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ListDirectoryRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:goya.fs.ListDirectoryRequest) */ {
 public:
  ListDirectoryRequest();
  virtual ~ListDirectoryRequest();

  ListDirectoryRequest(const ListDirectoryRequest& from);

  inline ListDirectoryRequest& operator=(const ListDirectoryRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ListDirectoryRequest(ListDirectoryRequest&& from) noexcept
    : ListDirectoryRequest() {
    *this = ::std::move(from);
  }

  inline ListDirectoryRequest& operator=(ListDirectoryRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ListDirectoryRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListDirectoryRequest* internal_default_instance() {
    return reinterpret_cast<const ListDirectoryRequest*>(
               &_ListDirectoryRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ListDirectoryRequest* other);
  friend void swap(ListDirectoryRequest& a, ListDirectoryRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListDirectoryRequest* New() const final {
    return CreateMaybeMessage<ListDirectoryRequest>(NULL);
  }

  ListDirectoryRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ListDirectoryRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ListDirectoryRequest& from);
  void MergeFrom(const ListDirectoryRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListDirectoryRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string path = 2;
  void clear_path();
  static const int kPathFieldNumber = 2;
  const ::std::string& path() const;
  void set_path(const ::std::string& value);
  #if LANG_CXX11
  void set_path(::std::string&& value);
  #endif
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  ::std::string* mutable_path();
  ::std::string* release_path();
  void set_allocated_path(::std::string* path);

  // uint64 sequence_id = 1;
  void clear_sequence_id();
  static const int kSequenceIdFieldNumber = 1;
  ::google::protobuf::uint64 sequence_id() const;
  void set_sequence_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:goya.fs.ListDirectoryRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr path_;
  ::google::protobuf::uint64 sequence_id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_masterserver_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ListDirectoryResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:goya.fs.ListDirectoryResponse) */ {
 public:
  ListDirectoryResponse();
  virtual ~ListDirectoryResponse();

  ListDirectoryResponse(const ListDirectoryResponse& from);

  inline ListDirectoryResponse& operator=(const ListDirectoryResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ListDirectoryResponse(ListDirectoryResponse&& from) noexcept
    : ListDirectoryResponse() {
    *this = ::std::move(from);
  }

  inline ListDirectoryResponse& operator=(ListDirectoryResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ListDirectoryResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListDirectoryResponse* internal_default_instance() {
    return reinterpret_cast<const ListDirectoryResponse*>(
               &_ListDirectoryResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(ListDirectoryResponse* other);
  friend void swap(ListDirectoryResponse& a, ListDirectoryResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListDirectoryResponse* New() const final {
    return CreateMaybeMessage<ListDirectoryResponse>(NULL);
  }

  ListDirectoryResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ListDirectoryResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ListDirectoryResponse& from);
  void MergeFrom(const ListDirectoryResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListDirectoryResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .goya.fs.FileInfoProto file_info_proto = 3;
  int file_info_proto_size() const;
  void clear_file_info_proto();
  static const int kFileInfoProtoFieldNumber = 3;
  ::goya::fs::FileInfoProto* mutable_file_info_proto(int index);
  ::google::protobuf::RepeatedPtrField< ::goya::fs::FileInfoProto >*
      mutable_file_info_proto();
  const ::goya::fs::FileInfoProto& file_info_proto(int index) const;
  ::goya::fs::FileInfoProto* add_file_info_proto();
  const ::google::protobuf::RepeatedPtrField< ::goya::fs::FileInfoProto >&
      file_info_proto() const;

  // uint64 sequence_id = 1;
  void clear_sequence_id();
  static const int kSequenceIdFieldNumber = 1;
  ::google::protobuf::uint64 sequence_id() const;
  void set_sequence_id(::google::protobuf::uint64 value);

  // int32 status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:goya.fs.ListDirectoryResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::goya::fs::FileInfoProto > file_info_proto_;
  ::google::protobuf::uint64 sequence_id_;
  ::google::protobuf::int32 status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_masterserver_2eproto::TableStruct;
};
// ===================================================================

class MasterServer_Stub;

class MasterServer : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline MasterServer() {};
 public:
  virtual ~MasterServer();

  typedef MasterServer_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void CreateFile(::google::protobuf::RpcController* controller,
                       const ::goya::fs::CreateFileRequest* request,
                       ::goya::fs::CreateFileResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void ListDirectory(::google::protobuf::RpcController* controller,
                       const ::goya::fs::ListDirectoryRequest* request,
                       ::goya::fs::ListDirectoryResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MasterServer);
};

class MasterServer_Stub : public MasterServer {
 public:
  MasterServer_Stub(::google::protobuf::RpcChannel* channel);
  MasterServer_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~MasterServer_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements MasterServer ------------------------------------------

  void CreateFile(::google::protobuf::RpcController* controller,
                       const ::goya::fs::CreateFileRequest* request,
                       ::goya::fs::CreateFileResponse* response,
                       ::google::protobuf::Closure* done);
  void ListDirectory(::google::protobuf::RpcController* controller,
                       const ::goya::fs::ListDirectoryRequest* request,
                       ::goya::fs::ListDirectoryResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MasterServer_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CreateFileRequest

// uint64 sequence_id = 1;
inline void CreateFileRequest::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 CreateFileRequest::sequence_id() const {
  // @@protoc_insertion_point(field_get:goya.fs.CreateFileRequest.sequence_id)
  return sequence_id_;
}
inline void CreateFileRequest::set_sequence_id(::google::protobuf::uint64 value) {
  
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.CreateFileRequest.sequence_id)
}

// int32 type = 2;
inline void CreateFileRequest::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CreateFileRequest::type() const {
  // @@protoc_insertion_point(field_get:goya.fs.CreateFileRequest.type)
  return type_;
}
inline void CreateFileRequest::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.CreateFileRequest.type)
}

// string file_name = 3;
inline void CreateFileRequest::clear_file_name() {
  file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CreateFileRequest::file_name() const {
  // @@protoc_insertion_point(field_get:goya.fs.CreateFileRequest.file_name)
  return file_name_.GetNoArena();
}
inline void CreateFileRequest::set_file_name(const ::std::string& value) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:goya.fs.CreateFileRequest.file_name)
}
#if LANG_CXX11
inline void CreateFileRequest::set_file_name(::std::string&& value) {
  
  file_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:goya.fs.CreateFileRequest.file_name)
}
#endif
inline void CreateFileRequest::set_file_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:goya.fs.CreateFileRequest.file_name)
}
inline void CreateFileRequest::set_file_name(const char* value, size_t size) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:goya.fs.CreateFileRequest.file_name)
}
inline ::std::string* CreateFileRequest::mutable_file_name() {
  
  // @@protoc_insertion_point(field_mutable:goya.fs.CreateFileRequest.file_name)
  return file_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CreateFileRequest::release_file_name() {
  // @@protoc_insertion_point(field_release:goya.fs.CreateFileRequest.file_name)
  
  return file_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CreateFileRequest::set_allocated_file_name(::std::string* file_name) {
  if (file_name != NULL) {
    
  } else {
    
  }
  file_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_name);
  // @@protoc_insertion_point(field_set_allocated:goya.fs.CreateFileRequest.file_name)
}

// -------------------------------------------------------------------

// CreateFileResponse

// uint64 sequence_id = 1;
inline void CreateFileResponse::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 CreateFileResponse::sequence_id() const {
  // @@protoc_insertion_point(field_get:goya.fs.CreateFileResponse.sequence_id)
  return sequence_id_;
}
inline void CreateFileResponse::set_sequence_id(::google::protobuf::uint64 value) {
  
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.CreateFileResponse.sequence_id)
}

// int32 status = 2;
inline void CreateFileResponse::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 CreateFileResponse::status() const {
  // @@protoc_insertion_point(field_get:goya.fs.CreateFileResponse.status)
  return status_;
}
inline void CreateFileResponse::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.CreateFileResponse.status)
}

// -------------------------------------------------------------------

// ListDirectoryRequest

// uint64 sequence_id = 1;
inline void ListDirectoryRequest::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ListDirectoryRequest::sequence_id() const {
  // @@protoc_insertion_point(field_get:goya.fs.ListDirectoryRequest.sequence_id)
  return sequence_id_;
}
inline void ListDirectoryRequest::set_sequence_id(::google::protobuf::uint64 value) {
  
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.ListDirectoryRequest.sequence_id)
}

// string path = 2;
inline void ListDirectoryRequest::clear_path() {
  path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ListDirectoryRequest::path() const {
  // @@protoc_insertion_point(field_get:goya.fs.ListDirectoryRequest.path)
  return path_.GetNoArena();
}
inline void ListDirectoryRequest::set_path(const ::std::string& value) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:goya.fs.ListDirectoryRequest.path)
}
#if LANG_CXX11
inline void ListDirectoryRequest::set_path(::std::string&& value) {
  
  path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:goya.fs.ListDirectoryRequest.path)
}
#endif
inline void ListDirectoryRequest::set_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:goya.fs.ListDirectoryRequest.path)
}
inline void ListDirectoryRequest::set_path(const char* value, size_t size) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:goya.fs.ListDirectoryRequest.path)
}
inline ::std::string* ListDirectoryRequest::mutable_path() {
  
  // @@protoc_insertion_point(field_mutable:goya.fs.ListDirectoryRequest.path)
  return path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ListDirectoryRequest::release_path() {
  // @@protoc_insertion_point(field_release:goya.fs.ListDirectoryRequest.path)
  
  return path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ListDirectoryRequest::set_allocated_path(::std::string* path) {
  if (path != NULL) {
    
  } else {
    
  }
  path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), path);
  // @@protoc_insertion_point(field_set_allocated:goya.fs.ListDirectoryRequest.path)
}

// -------------------------------------------------------------------

// ListDirectoryResponse

// uint64 sequence_id = 1;
inline void ListDirectoryResponse::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ListDirectoryResponse::sequence_id() const {
  // @@protoc_insertion_point(field_get:goya.fs.ListDirectoryResponse.sequence_id)
  return sequence_id_;
}
inline void ListDirectoryResponse::set_sequence_id(::google::protobuf::uint64 value) {
  
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.ListDirectoryResponse.sequence_id)
}

// int32 status = 2;
inline void ListDirectoryResponse::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 ListDirectoryResponse::status() const {
  // @@protoc_insertion_point(field_get:goya.fs.ListDirectoryResponse.status)
  return status_;
}
inline void ListDirectoryResponse::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:goya.fs.ListDirectoryResponse.status)
}

// repeated .goya.fs.FileInfoProto file_info_proto = 3;
inline int ListDirectoryResponse::file_info_proto_size() const {
  return file_info_proto_.size();
}
inline ::goya::fs::FileInfoProto* ListDirectoryResponse::mutable_file_info_proto(int index) {
  // @@protoc_insertion_point(field_mutable:goya.fs.ListDirectoryResponse.file_info_proto)
  return file_info_proto_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::goya::fs::FileInfoProto >*
ListDirectoryResponse::mutable_file_info_proto() {
  // @@protoc_insertion_point(field_mutable_list:goya.fs.ListDirectoryResponse.file_info_proto)
  return &file_info_proto_;
}
inline const ::goya::fs::FileInfoProto& ListDirectoryResponse::file_info_proto(int index) const {
  // @@protoc_insertion_point(field_get:goya.fs.ListDirectoryResponse.file_info_proto)
  return file_info_proto_.Get(index);
}
inline ::goya::fs::FileInfoProto* ListDirectoryResponse::add_file_info_proto() {
  // @@protoc_insertion_point(field_add:goya.fs.ListDirectoryResponse.file_info_proto)
  return file_info_proto_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::goya::fs::FileInfoProto >&
ListDirectoryResponse::file_info_proto() const {
  // @@protoc_insertion_point(field_list:goya.fs.ListDirectoryResponse.file_info_proto)
  return file_info_proto_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fs
}  // namespace goya

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_masterserver_2eproto
