// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: snellgoapi.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_snellgoapi_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_snellgoapi_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_snellgoapi_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_snellgoapi_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_snellgoapi_2eproto;
namespace snell {
namespace api {
class StatsReply;
class StatsReplyDefaultTypeInternal;
extern StatsReplyDefaultTypeInternal _StatsReply_default_instance_;
class StatsRequest;
class StatsRequestDefaultTypeInternal;
extern StatsRequestDefaultTypeInternal _StatsRequest_default_instance_;
}  // namespace api
}  // namespace snell
PROTOBUF_NAMESPACE_OPEN
template<> ::snell::api::StatsReply* Arena::CreateMaybeMessage<::snell::api::StatsReply>(Arena*);
template<> ::snell::api::StatsRequest* Arena::CreateMaybeMessage<::snell::api::StatsRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace snell {
namespace api {

// ===================================================================

class StatsRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:snell.api.StatsRequest) */ {
 public:
  inline StatsRequest() : StatsRequest(nullptr) {};
  virtual ~StatsRequest();

  StatsRequest(const StatsRequest& from);
  StatsRequest(StatsRequest&& from) noexcept
    : StatsRequest() {
    *this = ::std::move(from);
  }

  inline StatsRequest& operator=(const StatsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsRequest& operator=(StatsRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StatsRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StatsRequest* internal_default_instance() {
    return reinterpret_cast<const StatsRequest*>(
               &_StatsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatsRequest& a, StatsRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StatsRequest* New() const final {
    return CreateMaybeMessage<StatsRequest>(nullptr);
  }

  StatsRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StatsRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StatsRequest& from);
  void MergeFrom(const StatsRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StatsRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "snell.api.StatsRequest";
  }
  protected:
  explicit StatsRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_snellgoapi_2eproto);
    return ::descriptor_table_snellgoapi_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPasswordFieldNumber = 1,
  };
  // string password = 1;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_password();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_password(
      std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // @@protoc_insertion_point(class_scope:snell.api.StatsRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_snellgoapi_2eproto;
};
// -------------------------------------------------------------------

class StatsReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:snell.api.StatsReply) */ {
 public:
  inline StatsReply() : StatsReply(nullptr) {};
  virtual ~StatsReply();

  StatsReply(const StatsReply& from);
  StatsReply(StatsReply&& from) noexcept
    : StatsReply() {
    *this = ::std::move(from);
  }

  inline StatsReply& operator=(const StatsReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsReply& operator=(StatsReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StatsReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StatsReply* internal_default_instance() {
    return reinterpret_cast<const StatsReply*>(
               &_StatsReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StatsReply& a, StatsReply& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StatsReply* New() const final {
    return CreateMaybeMessage<StatsReply>(nullptr);
  }

  StatsReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StatsReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StatsReply& from);
  void MergeFrom(const StatsReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StatsReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "snell.api.StatsReply";
  }
  protected:
  explicit StatsReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_snellgoapi_2eproto);
    return ::descriptor_table_snellgoapi_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUploadTrafficFieldNumber = 1,
    kDownloadTrafficFieldNumber = 2,
    kUploadSpeedFieldNumber = 3,
    kDownloadSpeedFieldNumber = 4,
  };
  // uint64 upload_traffic = 1;
  void clear_upload_traffic();
  ::PROTOBUF_NAMESPACE_ID::uint64 upload_traffic() const;
  void set_upload_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_upload_traffic() const;
  void _internal_set_upload_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 download_traffic = 2;
  void clear_download_traffic();
  ::PROTOBUF_NAMESPACE_ID::uint64 download_traffic() const;
  void set_download_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_download_traffic() const;
  void _internal_set_download_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 upload_speed = 3;
  void clear_upload_speed();
  ::PROTOBUF_NAMESPACE_ID::uint64 upload_speed() const;
  void set_upload_speed(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_upload_speed() const;
  void _internal_set_upload_speed(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 download_speed = 4;
  void clear_download_speed();
  ::PROTOBUF_NAMESPACE_ID::uint64 download_speed() const;
  void set_download_speed(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_download_speed() const;
  void _internal_set_download_speed(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:snell.api.StatsReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint64 upload_traffic_;
  ::PROTOBUF_NAMESPACE_ID::uint64 download_traffic_;
  ::PROTOBUF_NAMESPACE_ID::uint64 upload_speed_;
  ::PROTOBUF_NAMESPACE_ID::uint64 download_speed_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_snellgoapi_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatsRequest

// string password = 1;
inline void StatsRequest::clear_password() {
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& StatsRequest::password() const {
  // @@protoc_insertion_point(field_get:snell.api.StatsRequest.password)
  return _internal_password();
}
inline void StatsRequest::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:snell.api.StatsRequest.password)
}
inline std::string* StatsRequest::mutable_password() {
  // @@protoc_insertion_point(field_mutable:snell.api.StatsRequest.password)
  return _internal_mutable_password();
}
inline const std::string& StatsRequest::_internal_password() const {
  return password_.Get();
}
inline void StatsRequest::_internal_set_password(const std::string& value) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void StatsRequest::set_password(std::string&& value) {
  
  password_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:snell.api.StatsRequest.password)
}
inline void StatsRequest::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:snell.api.StatsRequest.password)
}
inline void StatsRequest::set_password(const char* value,
    size_t size) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:snell.api.StatsRequest.password)
}
inline std::string* StatsRequest::_internal_mutable_password() {
  
  return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* StatsRequest::release_password() {
  // @@protoc_insertion_point(field_release:snell.api.StatsRequest.password)
  return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void StatsRequest::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:snell.api.StatsRequest.password)
}
inline std::string* StatsRequest::unsafe_arena_release_password() {
  // @@protoc_insertion_point(field_unsafe_arena_release:snell.api.StatsRequest.password)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return password_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void StatsRequest::unsafe_arena_set_allocated_password(
    std::string* password) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (password != nullptr) {
    
  } else {
    
  }
  password_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      password, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:snell.api.StatsRequest.password)
}

// -------------------------------------------------------------------

// StatsReply

// uint64 upload_traffic = 1;
inline void StatsReply::clear_upload_traffic() {
  upload_traffic_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::_internal_upload_traffic() const {
  return upload_traffic_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::upload_traffic() const {
  // @@protoc_insertion_point(field_get:snell.api.StatsReply.upload_traffic)
  return _internal_upload_traffic();
}
inline void StatsReply::_internal_set_upload_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  upload_traffic_ = value;
}
inline void StatsReply::set_upload_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_upload_traffic(value);
  // @@protoc_insertion_point(field_set:snell.api.StatsReply.upload_traffic)
}

// uint64 download_traffic = 2;
inline void StatsReply::clear_download_traffic() {
  download_traffic_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::_internal_download_traffic() const {
  return download_traffic_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::download_traffic() const {
  // @@protoc_insertion_point(field_get:snell.api.StatsReply.download_traffic)
  return _internal_download_traffic();
}
inline void StatsReply::_internal_set_download_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  download_traffic_ = value;
}
inline void StatsReply::set_download_traffic(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_download_traffic(value);
  // @@protoc_insertion_point(field_set:snell.api.StatsReply.download_traffic)
}

// uint64 upload_speed = 3;
inline void StatsReply::clear_upload_speed() {
  upload_speed_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::_internal_upload_speed() const {
  return upload_speed_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::upload_speed() const {
  // @@protoc_insertion_point(field_get:snell.api.StatsReply.upload_speed)
  return _internal_upload_speed();
}
inline void StatsReply::_internal_set_upload_speed(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  upload_speed_ = value;
}
inline void StatsReply::set_upload_speed(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_upload_speed(value);
  // @@protoc_insertion_point(field_set:snell.api.StatsReply.upload_speed)
}

// uint64 download_speed = 4;
inline void StatsReply::clear_download_speed() {
  download_speed_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::_internal_download_speed() const {
  return download_speed_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StatsReply::download_speed() const {
  // @@protoc_insertion_point(field_get:snell.api.StatsReply.download_speed)
  return _internal_download_speed();
}
inline void StatsReply::_internal_set_download_speed(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  download_speed_ = value;
}
inline void StatsReply::set_download_speed(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_download_speed(value);
  // @@protoc_insertion_point(field_set:snell.api.StatsReply.download_speed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace snell

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_snellgoapi_2eproto
