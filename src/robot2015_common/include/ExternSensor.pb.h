// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExternSensor.proto

#ifndef PROTOBUF_INCLUDED_ExternSensor_2eproto
#define PROTOBUF_INCLUDED_ExternSensor_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ExternSensor_2eproto 

namespace protobuf_ExternSensor_2eproto {
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
}  // namespace protobuf_ExternSensor_2eproto
class ExternSensor;
class ExternSensorDefaultTypeInternal;
extern ExternSensorDefaultTypeInternal _ExternSensor_default_instance_;
class ExternSensor_Mode_PX24ES;
class ExternSensor_Mode_PX24ESDefaultTypeInternal;
extern ExternSensor_Mode_PX24ESDefaultTypeInternal _ExternSensor_Mode_PX24ES_default_instance_;
class ExternSensor_Mode_Temp_humi;
class ExternSensor_Mode_Temp_humiDefaultTypeInternal;
extern ExternSensor_Mode_Temp_humiDefaultTypeInternal _ExternSensor_Mode_Temp_humi_default_instance_;
class ExternSensor_Mode_fan;
class ExternSensor_Mode_fanDefaultTypeInternal;
extern ExternSensor_Mode_fanDefaultTypeInternal _ExternSensor_Mode_fan_default_instance_;
namespace google {
namespace protobuf {
template<> ::ExternSensor* Arena::CreateMaybeMessage<::ExternSensor>(Arena*);
template<> ::ExternSensor_Mode_PX24ES* Arena::CreateMaybeMessage<::ExternSensor_Mode_PX24ES>(Arena*);
template<> ::ExternSensor_Mode_Temp_humi* Arena::CreateMaybeMessage<::ExternSensor_Mode_Temp_humi>(Arena*);
template<> ::ExternSensor_Mode_fan* Arena::CreateMaybeMessage<::ExternSensor_Mode_fan>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ExternSensor_Mode_Temp_humi : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ExternSensor.Mode_Temp_humi) */ {
 public:
  ExternSensor_Mode_Temp_humi();
  virtual ~ExternSensor_Mode_Temp_humi();

  ExternSensor_Mode_Temp_humi(const ExternSensor_Mode_Temp_humi& from);

  inline ExternSensor_Mode_Temp_humi& operator=(const ExternSensor_Mode_Temp_humi& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExternSensor_Mode_Temp_humi(ExternSensor_Mode_Temp_humi&& from) noexcept
    : ExternSensor_Mode_Temp_humi() {
    *this = ::std::move(from);
  }

  inline ExternSensor_Mode_Temp_humi& operator=(ExternSensor_Mode_Temp_humi&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_Temp_humi& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExternSensor_Mode_Temp_humi* internal_default_instance() {
    return reinterpret_cast<const ExternSensor_Mode_Temp_humi*>(
               &_ExternSensor_Mode_Temp_humi_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ExternSensor_Mode_Temp_humi* other);
  friend void swap(ExternSensor_Mode_Temp_humi& a, ExternSensor_Mode_Temp_humi& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExternSensor_Mode_Temp_humi* New() const final {
    return CreateMaybeMessage<ExternSensor_Mode_Temp_humi>(NULL);
  }

  ExternSensor_Mode_Temp_humi* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExternSensor_Mode_Temp_humi>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExternSensor_Mode_Temp_humi& from);
  void MergeFrom(const ExternSensor_Mode_Temp_humi& from);
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
  void InternalSwap(ExternSensor_Mode_Temp_humi* other);
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

  // int32 interior_temp = 1;
  void clear_interior_temp();
  static const int kInteriorTempFieldNumber = 1;
  ::google::protobuf::int32 interior_temp() const;
  void set_interior_temp(::google::protobuf::int32 value);

  // int32 interior_humi = 2;
  void clear_interior_humi();
  static const int kInteriorHumiFieldNumber = 2;
  ::google::protobuf::int32 interior_humi() const;
  void set_interior_humi(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_Temp_humi)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 interior_temp_;
  ::google::protobuf::int32 interior_humi_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ExternSensor_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ExternSensor_Mode_fan : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ExternSensor.Mode_fan) */ {
 public:
  ExternSensor_Mode_fan();
  virtual ~ExternSensor_Mode_fan();

  ExternSensor_Mode_fan(const ExternSensor_Mode_fan& from);

  inline ExternSensor_Mode_fan& operator=(const ExternSensor_Mode_fan& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExternSensor_Mode_fan(ExternSensor_Mode_fan&& from) noexcept
    : ExternSensor_Mode_fan() {
    *this = ::std::move(from);
  }

  inline ExternSensor_Mode_fan& operator=(ExternSensor_Mode_fan&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_fan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExternSensor_Mode_fan* internal_default_instance() {
    return reinterpret_cast<const ExternSensor_Mode_fan*>(
               &_ExternSensor_Mode_fan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ExternSensor_Mode_fan* other);
  friend void swap(ExternSensor_Mode_fan& a, ExternSensor_Mode_fan& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExternSensor_Mode_fan* New() const final {
    return CreateMaybeMessage<ExternSensor_Mode_fan>(NULL);
  }

  ExternSensor_Mode_fan* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExternSensor_Mode_fan>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExternSensor_Mode_fan& from);
  void MergeFrom(const ExternSensor_Mode_fan& from);
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
  void InternalSwap(ExternSensor_Mode_fan* other);
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

  // int32 fan_ID = 1;
  void clear_fan_id();
  static const int kFanIDFieldNumber = 1;
  ::google::protobuf::int32 fan_id() const;
  void set_fan_id(::google::protobuf::int32 value);

  // int32 fan_Mode = 2;
  void clear_fan_mode();
  static const int kFanModeFieldNumber = 2;
  ::google::protobuf::int32 fan_mode() const;
  void set_fan_mode(::google::protobuf::int32 value);

  // int32 fan_status = 3;
  void clear_fan_status();
  static const int kFanStatusFieldNumber = 3;
  ::google::protobuf::int32 fan_status() const;
  void set_fan_status(::google::protobuf::int32 value);

  // int32 vaule_open = 4;
  void clear_vaule_open();
  static const int kVauleOpenFieldNumber = 4;
  ::google::protobuf::int32 vaule_open() const;
  void set_vaule_open(::google::protobuf::int32 value);

  // int32 vaule_close = 5;
  void clear_vaule_close();
  static const int kVauleCloseFieldNumber = 5;
  ::google::protobuf::int32 vaule_close() const;
  void set_vaule_close(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_fan)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 fan_id_;
  ::google::protobuf::int32 fan_mode_;
  ::google::protobuf::int32 fan_status_;
  ::google::protobuf::int32 vaule_open_;
  ::google::protobuf::int32 vaule_close_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ExternSensor_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ExternSensor_Mode_PX24ES : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ExternSensor.Mode_PX24ES) */ {
 public:
  ExternSensor_Mode_PX24ES();
  virtual ~ExternSensor_Mode_PX24ES();

  ExternSensor_Mode_PX24ES(const ExternSensor_Mode_PX24ES& from);

  inline ExternSensor_Mode_PX24ES& operator=(const ExternSensor_Mode_PX24ES& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExternSensor_Mode_PX24ES(ExternSensor_Mode_PX24ES&& from) noexcept
    : ExternSensor_Mode_PX24ES() {
    *this = ::std::move(from);
  }

  inline ExternSensor_Mode_PX24ES& operator=(ExternSensor_Mode_PX24ES&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_PX24ES& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExternSensor_Mode_PX24ES* internal_default_instance() {
    return reinterpret_cast<const ExternSensor_Mode_PX24ES*>(
               &_ExternSensor_Mode_PX24ES_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ExternSensor_Mode_PX24ES* other);
  friend void swap(ExternSensor_Mode_PX24ES& a, ExternSensor_Mode_PX24ES& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExternSensor_Mode_PX24ES* New() const final {
    return CreateMaybeMessage<ExternSensor_Mode_PX24ES>(NULL);
  }

  ExternSensor_Mode_PX24ES* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExternSensor_Mode_PX24ES>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExternSensor_Mode_PX24ES& from);
  void MergeFrom(const ExternSensor_Mode_PX24ES& from);
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
  void InternalSwap(ExternSensor_Mode_PX24ES* other);
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

  // int32 out1 = 1;
  void clear_out1();
  static const int kOut1FieldNumber = 1;
  ::google::protobuf::int32 out1() const;
  void set_out1(::google::protobuf::int32 value);

  // int32 out2 = 2;
  void clear_out2();
  static const int kOut2FieldNumber = 2;
  ::google::protobuf::int32 out2() const;
  void set_out2(::google::protobuf::int32 value);

  // int32 Extraneouslight_out = 3;
  void clear_extraneouslight_out();
  static const int kExtraneouslightOutFieldNumber = 3;
  ::google::protobuf::int32 extraneouslight_out() const;
  void set_extraneouslight_out(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_PX24ES)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 out1_;
  ::google::protobuf::int32 out2_;
  ::google::protobuf::int32 extraneouslight_out_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ExternSensor_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ExternSensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ExternSensor) */ {
 public:
  ExternSensor();
  virtual ~ExternSensor();

  ExternSensor(const ExternSensor& from);

  inline ExternSensor& operator=(const ExternSensor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExternSensor(ExternSensor&& from) noexcept
    : ExternSensor() {
    *this = ::std::move(from);
  }

  inline ExternSensor& operator=(ExternSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExternSensor* internal_default_instance() {
    return reinterpret_cast<const ExternSensor*>(
               &_ExternSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(ExternSensor* other);
  friend void swap(ExternSensor& a, ExternSensor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExternSensor* New() const final {
    return CreateMaybeMessage<ExternSensor>(NULL);
  }

  ExternSensor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExternSensor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExternSensor& from);
  void MergeFrom(const ExternSensor& from);
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
  void InternalSwap(ExternSensor* other);
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

  typedef ExternSensor_Mode_Temp_humi Mode_Temp_humi;
  typedef ExternSensor_Mode_fan Mode_fan;
  typedef ExternSensor_Mode_PX24ES Mode_PX24ES;

  // accessors -------------------------------------------------------

  // repeated int32 Temp_Pt100 = 1;
  int temp_pt100_size() const;
  void clear_temp_pt100();
  static const int kTempPt100FieldNumber = 1;
  ::google::protobuf::int32 temp_pt100(int index) const;
  void set_temp_pt100(int index, ::google::protobuf::int32 value);
  void add_temp_pt100(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      temp_pt100() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_temp_pt100();

  // repeated .ExternSensor.Mode_Temp_humi Temp_humi = 2;
  int temp_humi_size() const;
  void clear_temp_humi();
  static const int kTempHumiFieldNumber = 2;
  ::ExternSensor_Mode_Temp_humi* mutable_temp_humi(int index);
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >*
      mutable_temp_humi();
  const ::ExternSensor_Mode_Temp_humi& temp_humi(int index) const;
  ::ExternSensor_Mode_Temp_humi* add_temp_humi();
  const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >&
      temp_humi() const;

  // repeated .ExternSensor.Mode_fan fan_msg = 3;
  int fan_msg_size() const;
  void clear_fan_msg();
  static const int kFanMsgFieldNumber = 3;
  ::ExternSensor_Mode_fan* mutable_fan_msg(int index);
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >*
      mutable_fan_msg();
  const ::ExternSensor_Mode_fan& fan_msg(int index) const;
  ::ExternSensor_Mode_fan* add_fan_msg();
  const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >&
      fan_msg() const;

  // repeated int32 IO_Infrared = 4;
  int io_infrared_size() const;
  void clear_io_infrared();
  static const int kIOInfraredFieldNumber = 4;
  ::google::protobuf::int32 io_infrared(int index) const;
  void set_io_infrared(int index, ::google::protobuf::int32 value);
  void add_io_infrared(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      io_infrared() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_io_infrared();

  // repeated int32 IO_collision = 5;
  int io_collision_size() const;
  void clear_io_collision();
  static const int kIOCollisionFieldNumber = 5;
  ::google::protobuf::int32 io_collision(int index) const;
  void set_io_collision(int index, ::google::protobuf::int32 value);
  void add_io_collision(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      io_collision() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_io_collision();

  // string LED_status = 6;
  void clear_led_status();
  static const int kLEDStatusFieldNumber = 6;
  const ::std::string& led_status() const;
  void set_led_status(const ::std::string& value);
  #if LANG_CXX11
  void set_led_status(::std::string&& value);
  #endif
  void set_led_status(const char* value);
  void set_led_status(const char* value, size_t size);
  ::std::string* mutable_led_status();
  ::std::string* release_led_status();
  void set_allocated_led_status(::std::string* led_status);

  // .ExternSensor.Mode_PX24ES PX24ES = 7;
  bool has_px24es() const;
  void clear_px24es();
  static const int kPX24ESFieldNumber = 7;
  private:
  const ::ExternSensor_Mode_PX24ES& _internal_px24es() const;
  public:
  const ::ExternSensor_Mode_PX24ES& px24es() const;
  ::ExternSensor_Mode_PX24ES* release_px24es();
  ::ExternSensor_Mode_PX24ES* mutable_px24es();
  void set_allocated_px24es(::ExternSensor_Mode_PX24ES* px24es);

  // int32 online = 8;
  void clear_online();
  static const int kOnlineFieldNumber = 8;
  ::google::protobuf::int32 online() const;
  void set_online(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > temp_pt100_;
  mutable int _temp_pt100_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi > temp_humi_;
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan > fan_msg_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > io_infrared_;
  mutable int _io_infrared_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > io_collision_;
  mutable int _io_collision_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr led_status_;
  ::ExternSensor_Mode_PX24ES* px24es_;
  ::google::protobuf::int32 online_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ExternSensor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExternSensor_Mode_Temp_humi

// int32 interior_temp = 1;
inline void ExternSensor_Mode_Temp_humi::clear_interior_temp() {
  interior_temp_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_Temp_humi::interior_temp() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_Temp_humi.interior_temp)
  return interior_temp_;
}
inline void ExternSensor_Mode_Temp_humi::set_interior_temp(::google::protobuf::int32 value) {
  
  interior_temp_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_Temp_humi.interior_temp)
}

// int32 interior_humi = 2;
inline void ExternSensor_Mode_Temp_humi::clear_interior_humi() {
  interior_humi_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_Temp_humi::interior_humi() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_Temp_humi.interior_humi)
  return interior_humi_;
}
inline void ExternSensor_Mode_Temp_humi::set_interior_humi(::google::protobuf::int32 value) {
  
  interior_humi_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_Temp_humi.interior_humi)
}

// -------------------------------------------------------------------

// ExternSensor_Mode_fan

// int32 fan_ID = 1;
inline void ExternSensor_Mode_fan::clear_fan_id() {
  fan_id_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_id() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_fan.fan_ID)
  return fan_id_;
}
inline void ExternSensor_Mode_fan::set_fan_id(::google::protobuf::int32 value) {
  
  fan_id_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_fan.fan_ID)
}

// int32 fan_Mode = 2;
inline void ExternSensor_Mode_fan::clear_fan_mode() {
  fan_mode_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_mode() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_fan.fan_Mode)
  return fan_mode_;
}
inline void ExternSensor_Mode_fan::set_fan_mode(::google::protobuf::int32 value) {
  
  fan_mode_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_fan.fan_Mode)
}

// int32 fan_status = 3;
inline void ExternSensor_Mode_fan::clear_fan_status() {
  fan_status_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_status() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_fan.fan_status)
  return fan_status_;
}
inline void ExternSensor_Mode_fan::set_fan_status(::google::protobuf::int32 value) {
  
  fan_status_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_fan.fan_status)
}

// int32 vaule_open = 4;
inline void ExternSensor_Mode_fan::clear_vaule_open() {
  vaule_open_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::vaule_open() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_fan.vaule_open)
  return vaule_open_;
}
inline void ExternSensor_Mode_fan::set_vaule_open(::google::protobuf::int32 value) {
  
  vaule_open_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_fan.vaule_open)
}

// int32 vaule_close = 5;
inline void ExternSensor_Mode_fan::clear_vaule_close() {
  vaule_close_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::vaule_close() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_fan.vaule_close)
  return vaule_close_;
}
inline void ExternSensor_Mode_fan::set_vaule_close(::google::protobuf::int32 value) {
  
  vaule_close_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_fan.vaule_close)
}

// -------------------------------------------------------------------

// ExternSensor_Mode_PX24ES

// int32 out1 = 1;
inline void ExternSensor_Mode_PX24ES::clear_out1() {
  out1_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::out1() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_PX24ES.out1)
  return out1_;
}
inline void ExternSensor_Mode_PX24ES::set_out1(::google::protobuf::int32 value) {
  
  out1_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_PX24ES.out1)
}

// int32 out2 = 2;
inline void ExternSensor_Mode_PX24ES::clear_out2() {
  out2_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::out2() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_PX24ES.out2)
  return out2_;
}
inline void ExternSensor_Mode_PX24ES::set_out2(::google::protobuf::int32 value) {
  
  out2_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_PX24ES.out2)
}

// int32 Extraneouslight_out = 3;
inline void ExternSensor_Mode_PX24ES::clear_extraneouslight_out() {
  extraneouslight_out_ = 0;
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::extraneouslight_out() const {
  // @@protoc_insertion_point(field_get:ExternSensor.Mode_PX24ES.Extraneouslight_out)
  return extraneouslight_out_;
}
inline void ExternSensor_Mode_PX24ES::set_extraneouslight_out(::google::protobuf::int32 value) {
  
  extraneouslight_out_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.Mode_PX24ES.Extraneouslight_out)
}

// -------------------------------------------------------------------

// ExternSensor

// repeated int32 Temp_Pt100 = 1;
inline int ExternSensor::temp_pt100_size() const {
  return temp_pt100_.size();
}
inline void ExternSensor::clear_temp_pt100() {
  temp_pt100_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::temp_pt100(int index) const {
  // @@protoc_insertion_point(field_get:ExternSensor.Temp_Pt100)
  return temp_pt100_.Get(index);
}
inline void ExternSensor::set_temp_pt100(int index, ::google::protobuf::int32 value) {
  temp_pt100_.Set(index, value);
  // @@protoc_insertion_point(field_set:ExternSensor.Temp_Pt100)
}
inline void ExternSensor::add_temp_pt100(::google::protobuf::int32 value) {
  temp_pt100_.Add(value);
  // @@protoc_insertion_point(field_add:ExternSensor.Temp_Pt100)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::temp_pt100() const {
  // @@protoc_insertion_point(field_list:ExternSensor.Temp_Pt100)
  return temp_pt100_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_temp_pt100() {
  // @@protoc_insertion_point(field_mutable_list:ExternSensor.Temp_Pt100)
  return &temp_pt100_;
}

// repeated .ExternSensor.Mode_Temp_humi Temp_humi = 2;
inline int ExternSensor::temp_humi_size() const {
  return temp_humi_.size();
}
inline void ExternSensor::clear_temp_humi() {
  temp_humi_.Clear();
}
inline ::ExternSensor_Mode_Temp_humi* ExternSensor::mutable_temp_humi(int index) {
  // @@protoc_insertion_point(field_mutable:ExternSensor.Temp_humi)
  return temp_humi_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >*
ExternSensor::mutable_temp_humi() {
  // @@protoc_insertion_point(field_mutable_list:ExternSensor.Temp_humi)
  return &temp_humi_;
}
inline const ::ExternSensor_Mode_Temp_humi& ExternSensor::temp_humi(int index) const {
  // @@protoc_insertion_point(field_get:ExternSensor.Temp_humi)
  return temp_humi_.Get(index);
}
inline ::ExternSensor_Mode_Temp_humi* ExternSensor::add_temp_humi() {
  // @@protoc_insertion_point(field_add:ExternSensor.Temp_humi)
  return temp_humi_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >&
ExternSensor::temp_humi() const {
  // @@protoc_insertion_point(field_list:ExternSensor.Temp_humi)
  return temp_humi_;
}

// repeated .ExternSensor.Mode_fan fan_msg = 3;
inline int ExternSensor::fan_msg_size() const {
  return fan_msg_.size();
}
inline void ExternSensor::clear_fan_msg() {
  fan_msg_.Clear();
}
inline ::ExternSensor_Mode_fan* ExternSensor::mutable_fan_msg(int index) {
  // @@protoc_insertion_point(field_mutable:ExternSensor.fan_msg)
  return fan_msg_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >*
ExternSensor::mutable_fan_msg() {
  // @@protoc_insertion_point(field_mutable_list:ExternSensor.fan_msg)
  return &fan_msg_;
}
inline const ::ExternSensor_Mode_fan& ExternSensor::fan_msg(int index) const {
  // @@protoc_insertion_point(field_get:ExternSensor.fan_msg)
  return fan_msg_.Get(index);
}
inline ::ExternSensor_Mode_fan* ExternSensor::add_fan_msg() {
  // @@protoc_insertion_point(field_add:ExternSensor.fan_msg)
  return fan_msg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >&
ExternSensor::fan_msg() const {
  // @@protoc_insertion_point(field_list:ExternSensor.fan_msg)
  return fan_msg_;
}

// repeated int32 IO_Infrared = 4;
inline int ExternSensor::io_infrared_size() const {
  return io_infrared_.size();
}
inline void ExternSensor::clear_io_infrared() {
  io_infrared_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::io_infrared(int index) const {
  // @@protoc_insertion_point(field_get:ExternSensor.IO_Infrared)
  return io_infrared_.Get(index);
}
inline void ExternSensor::set_io_infrared(int index, ::google::protobuf::int32 value) {
  io_infrared_.Set(index, value);
  // @@protoc_insertion_point(field_set:ExternSensor.IO_Infrared)
}
inline void ExternSensor::add_io_infrared(::google::protobuf::int32 value) {
  io_infrared_.Add(value);
  // @@protoc_insertion_point(field_add:ExternSensor.IO_Infrared)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::io_infrared() const {
  // @@protoc_insertion_point(field_list:ExternSensor.IO_Infrared)
  return io_infrared_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_io_infrared() {
  // @@protoc_insertion_point(field_mutable_list:ExternSensor.IO_Infrared)
  return &io_infrared_;
}

// repeated int32 IO_collision = 5;
inline int ExternSensor::io_collision_size() const {
  return io_collision_.size();
}
inline void ExternSensor::clear_io_collision() {
  io_collision_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::io_collision(int index) const {
  // @@protoc_insertion_point(field_get:ExternSensor.IO_collision)
  return io_collision_.Get(index);
}
inline void ExternSensor::set_io_collision(int index, ::google::protobuf::int32 value) {
  io_collision_.Set(index, value);
  // @@protoc_insertion_point(field_set:ExternSensor.IO_collision)
}
inline void ExternSensor::add_io_collision(::google::protobuf::int32 value) {
  io_collision_.Add(value);
  // @@protoc_insertion_point(field_add:ExternSensor.IO_collision)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::io_collision() const {
  // @@protoc_insertion_point(field_list:ExternSensor.IO_collision)
  return io_collision_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_io_collision() {
  // @@protoc_insertion_point(field_mutable_list:ExternSensor.IO_collision)
  return &io_collision_;
}

// string LED_status = 6;
inline void ExternSensor::clear_led_status() {
  led_status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ExternSensor::led_status() const {
  // @@protoc_insertion_point(field_get:ExternSensor.LED_status)
  return led_status_.GetNoArena();
}
inline void ExternSensor::set_led_status(const ::std::string& value) {
  
  led_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExternSensor.LED_status)
}
#if LANG_CXX11
inline void ExternSensor::set_led_status(::std::string&& value) {
  
  led_status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ExternSensor.LED_status)
}
#endif
inline void ExternSensor::set_led_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  led_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExternSensor.LED_status)
}
inline void ExternSensor::set_led_status(const char* value, size_t size) {
  
  led_status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExternSensor.LED_status)
}
inline ::std::string* ExternSensor::mutable_led_status() {
  
  // @@protoc_insertion_point(field_mutable:ExternSensor.LED_status)
  return led_status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExternSensor::release_led_status() {
  // @@protoc_insertion_point(field_release:ExternSensor.LED_status)
  
  return led_status_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExternSensor::set_allocated_led_status(::std::string* led_status) {
  if (led_status != NULL) {
    
  } else {
    
  }
  led_status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), led_status);
  // @@protoc_insertion_point(field_set_allocated:ExternSensor.LED_status)
}

// .ExternSensor.Mode_PX24ES PX24ES = 7;
inline bool ExternSensor::has_px24es() const {
  return this != internal_default_instance() && px24es_ != NULL;
}
inline void ExternSensor::clear_px24es() {
  if (GetArenaNoVirtual() == NULL && px24es_ != NULL) {
    delete px24es_;
  }
  px24es_ = NULL;
}
inline const ::ExternSensor_Mode_PX24ES& ExternSensor::_internal_px24es() const {
  return *px24es_;
}
inline const ::ExternSensor_Mode_PX24ES& ExternSensor::px24es() const {
  const ::ExternSensor_Mode_PX24ES* p = px24es_;
  // @@protoc_insertion_point(field_get:ExternSensor.PX24ES)
  return p != NULL ? *p : *reinterpret_cast<const ::ExternSensor_Mode_PX24ES*>(
      &::_ExternSensor_Mode_PX24ES_default_instance_);
}
inline ::ExternSensor_Mode_PX24ES* ExternSensor::release_px24es() {
  // @@protoc_insertion_point(field_release:ExternSensor.PX24ES)
  
  ::ExternSensor_Mode_PX24ES* temp = px24es_;
  px24es_ = NULL;
  return temp;
}
inline ::ExternSensor_Mode_PX24ES* ExternSensor::mutable_px24es() {
  
  if (px24es_ == NULL) {
    auto* p = CreateMaybeMessage<::ExternSensor_Mode_PX24ES>(GetArenaNoVirtual());
    px24es_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ExternSensor.PX24ES)
  return px24es_;
}
inline void ExternSensor::set_allocated_px24es(::ExternSensor_Mode_PX24ES* px24es) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete px24es_;
  }
  if (px24es) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      px24es = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, px24es, submessage_arena);
    }
    
  } else {
    
  }
  px24es_ = px24es;
  // @@protoc_insertion_point(field_set_allocated:ExternSensor.PX24ES)
}

// int32 online = 8;
inline void ExternSensor::clear_online() {
  online_ = 0;
}
inline ::google::protobuf::int32 ExternSensor::online() const {
  // @@protoc_insertion_point(field_get:ExternSensor.online)
  return online_;
}
inline void ExternSensor::set_online(::google::protobuf::int32 value) {
  
  online_ = value;
  // @@protoc_insertion_point(field_set:ExternSensor.online)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ExternSensor_2eproto
