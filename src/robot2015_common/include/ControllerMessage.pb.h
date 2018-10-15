// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ControllerMessage.proto

#ifndef PROTOBUF_INCLUDED_ControllerMessage_2eproto
#define PROTOBUF_INCLUDED_ControllerMessage_2eproto

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
#include "ExternSensor.pb.h"
#include "BMSMessage.pb.h"
#include "ErrorMessage.pb.h"
#include "AlarmMessage.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ControllerMessage_2eproto 

namespace protobuf_ControllerMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ControllerMessage_2eproto
class ControllerMessage;
class ControllerMessageDefaultTypeInternal;
extern ControllerMessageDefaultTypeInternal _ControllerMessage_default_instance_;
class ControllerMessage_Dirver;
class ControllerMessage_DirverDefaultTypeInternal;
extern ControllerMessage_DirverDefaultTypeInternal _ControllerMessage_Dirver_default_instance_;
namespace google {
namespace protobuf {
template<> ::ControllerMessage* Arena::CreateMaybeMessage<::ControllerMessage>(Arena*);
template<> ::ControllerMessage_Dirver* Arena::CreateMaybeMessage<::ControllerMessage_Dirver>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ControllerMessage_Dirver : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ControllerMessage.Dirver) */ {
 public:
  ControllerMessage_Dirver();
  virtual ~ControllerMessage_Dirver();

  ControllerMessage_Dirver(const ControllerMessage_Dirver& from);

  inline ControllerMessage_Dirver& operator=(const ControllerMessage_Dirver& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ControllerMessage_Dirver(ControllerMessage_Dirver&& from) noexcept
    : ControllerMessage_Dirver() {
    *this = ::std::move(from);
  }

  inline ControllerMessage_Dirver& operator=(ControllerMessage_Dirver&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ControllerMessage_Dirver& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ControllerMessage_Dirver* internal_default_instance() {
    return reinterpret_cast<const ControllerMessage_Dirver*>(
               &_ControllerMessage_Dirver_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ControllerMessage_Dirver* other);
  friend void swap(ControllerMessage_Dirver& a, ControllerMessage_Dirver& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ControllerMessage_Dirver* New() const final {
    return CreateMaybeMessage<ControllerMessage_Dirver>(NULL);
  }

  ControllerMessage_Dirver* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ControllerMessage_Dirver>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ControllerMessage_Dirver& from);
  void MergeFrom(const ControllerMessage_Dirver& from);
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
  void InternalSwap(ControllerMessage_Dirver* other);
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

  // string Error = 9;
  void clear_error();
  static const int kErrorFieldNumber = 9;
  const ::std::string& error() const;
  void set_error(const ::std::string& value);
  #if LANG_CXX11
  void set_error(::std::string&& value);
  #endif
  void set_error(const char* value);
  void set_error(const char* value, size_t size);
  ::std::string* mutable_error();
  ::std::string* release_error();
  void set_allocated_error(::std::string* error);

  // int32 device_status = 1;
  void clear_device_status();
  static const int kDeviceStatusFieldNumber = 1;
  ::google::protobuf::int32 device_status() const;
  void set_device_status(::google::protobuf::int32 value);

  // int32 device_add = 2;
  void clear_device_add();
  static const int kDeviceAddFieldNumber = 2;
  ::google::protobuf::int32 device_add() const;
  void set_device_add(::google::protobuf::int32 value);

  // int32 ActVelocity = 3;
  void clear_actvelocity();
  static const int kActVelocityFieldNumber = 3;
  ::google::protobuf::int32 actvelocity() const;
  void set_actvelocity(::google::protobuf::int32 value);

  // int32 SetVelocity = 4;
  void clear_setvelocity();
  static const int kSetVelocityFieldNumber = 4;
  ::google::protobuf::int32 setvelocity() const;
  void set_setvelocity(::google::protobuf::int32 value);

  // float ctrl_dc_Voltage = 5;
  void clear_ctrl_dc_voltage();
  static const int kCtrlDcVoltageFieldNumber = 5;
  float ctrl_dc_voltage() const;
  void set_ctrl_dc_voltage(float value);

  // float CTRL_IPM_TEMPERATURE = 6;
  void clear_ctrl_ipm_temperature();
  static const int kCTRLIPMTEMPERATUREFieldNumber = 6;
  float ctrl_ipm_temperature() const;
  void set_ctrl_ipm_temperature(float value);

  // int32 ActualPos = 7;
  void clear_actualpos();
  static const int kActualPosFieldNumber = 7;
  ::google::protobuf::int32 actualpos() const;
  void set_actualpos(::google::protobuf::int32 value);

  // bool EmergencyInputValue = 8;
  void clear_emergencyinputvalue();
  static const int kEmergencyInputValueFieldNumber = 8;
  bool emergencyinputvalue() const;
  void set_emergencyinputvalue(bool value);

  // float ActCurrent = 11;
  void clear_actcurrent();
  static const int kActCurrentFieldNumber = 11;
  float actcurrent() const;
  void set_actcurrent(float value);

  // @@protoc_insertion_point(class_scope:ControllerMessage.Dirver)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr error_;
  ::google::protobuf::int32 device_status_;
  ::google::protobuf::int32 device_add_;
  ::google::protobuf::int32 actvelocity_;
  ::google::protobuf::int32 setvelocity_;
  float ctrl_dc_voltage_;
  float ctrl_ipm_temperature_;
  ::google::protobuf::int32 actualpos_;
  bool emergencyinputvalue_;
  float actcurrent_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ControllerMessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ControllerMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ControllerMessage) */ {
 public:
  ControllerMessage();
  virtual ~ControllerMessage();

  ControllerMessage(const ControllerMessage& from);

  inline ControllerMessage& operator=(const ControllerMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ControllerMessage(ControllerMessage&& from) noexcept
    : ControllerMessage() {
    *this = ::std::move(from);
  }

  inline ControllerMessage& operator=(ControllerMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ControllerMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ControllerMessage* internal_default_instance() {
    return reinterpret_cast<const ControllerMessage*>(
               &_ControllerMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ControllerMessage* other);
  friend void swap(ControllerMessage& a, ControllerMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ControllerMessage* New() const final {
    return CreateMaybeMessage<ControllerMessage>(NULL);
  }

  ControllerMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ControllerMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ControllerMessage& from);
  void MergeFrom(const ControllerMessage& from);
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
  void InternalSwap(ControllerMessage* other);
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

  typedef ControllerMessage_Dirver Dirver;

  // accessors -------------------------------------------------------

  // repeated .ControllerMessage.Dirver DirverMessage = 2;
  int dirvermessage_size() const;
  void clear_dirvermessage();
  static const int kDirverMessageFieldNumber = 2;
  ::ControllerMessage_Dirver* mutable_dirvermessage(int index);
  ::google::protobuf::RepeatedPtrField< ::ControllerMessage_Dirver >*
      mutable_dirvermessage();
  const ::ControllerMessage_Dirver& dirvermessage(int index) const;
  ::ControllerMessage_Dirver* add_dirvermessage();
  const ::google::protobuf::RepeatedPtrField< ::ControllerMessage_Dirver >&
      dirvermessage() const;

  // .ExternSensor SensorMsg = 3;
  bool has_sensormsg() const;
  void clear_sensormsg();
  static const int kSensorMsgFieldNumber = 3;
  private:
  const ::ExternSensor& _internal_sensormsg() const;
  public:
  const ::ExternSensor& sensormsg() const;
  ::ExternSensor* release_sensormsg();
  ::ExternSensor* mutable_sensormsg();
  void set_allocated_sensormsg(::ExternSensor* sensormsg);

  // .BmsMessage bmsMsg = 5;
  bool has_bmsmsg() const;
  void clear_bmsmsg();
  static const int kBmsMsgFieldNumber = 5;
  private:
  const ::BmsMessage& _internal_bmsmsg() const;
  public:
  const ::BmsMessage& bmsmsg() const;
  ::BmsMessage* release_bmsmsg();
  ::BmsMessage* mutable_bmsmsg();
  void set_allocated_bmsmsg(::BmsMessage* bmsmsg);

  // .ErrorMessage errormsg = 6;
  bool has_errormsg() const;
  void clear_errormsg();
  static const int kErrormsgFieldNumber = 6;
  private:
  const ::ErrorMessage& _internal_errormsg() const;
  public:
  const ::ErrorMessage& errormsg() const;
  ::ErrorMessage* release_errormsg();
  ::ErrorMessage* mutable_errormsg();
  void set_allocated_errormsg(::ErrorMessage* errormsg);

  // .AlarmMessage alarmmsg = 7;
  bool has_alarmmsg() const;
  void clear_alarmmsg();
  static const int kAlarmmsgFieldNumber = 7;
  private:
  const ::AlarmMessage& _internal_alarmmsg() const;
  public:
  const ::AlarmMessage& alarmmsg() const;
  ::AlarmMessage* release_alarmmsg();
  ::AlarmMessage* mutable_alarmmsg();
  void set_allocated_alarmmsg(::AlarmMessage* alarmmsg);

  // int32 Stat = 1;
  void clear_stat();
  static const int kStatFieldNumber = 1;
  ::google::protobuf::int32 stat() const;
  void set_stat(::google::protobuf::int32 value);

  // int32 ctrl_device = 4;
  void clear_ctrl_device();
  static const int kCtrlDeviceFieldNumber = 4;
  ::google::protobuf::int32 ctrl_device() const;
  void set_ctrl_device(::google::protobuf::int32 value);

  // float LineVelocity = 9;
  void clear_linevelocity();
  static const int kLineVelocityFieldNumber = 9;
  float linevelocity() const;
  void set_linevelocity(float value);

  // float THVelocity = 10;
  void clear_thvelocity();
  static const int kTHVelocityFieldNumber = 10;
  float thvelocity() const;
  void set_thvelocity(float value);

  // @@protoc_insertion_point(class_scope:ControllerMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ControllerMessage_Dirver > dirvermessage_;
  ::ExternSensor* sensormsg_;
  ::BmsMessage* bmsmsg_;
  ::ErrorMessage* errormsg_;
  ::AlarmMessage* alarmmsg_;
  ::google::protobuf::int32 stat_;
  ::google::protobuf::int32 ctrl_device_;
  float linevelocity_;
  float thvelocity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ControllerMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ControllerMessage_Dirver

// int32 device_status = 1;
inline void ControllerMessage_Dirver::clear_device_status() {
  device_status_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage_Dirver::device_status() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.device_status)
  return device_status_;
}
inline void ControllerMessage_Dirver::set_device_status(::google::protobuf::int32 value) {
  
  device_status_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.device_status)
}

// int32 device_add = 2;
inline void ControllerMessage_Dirver::clear_device_add() {
  device_add_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage_Dirver::device_add() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.device_add)
  return device_add_;
}
inline void ControllerMessage_Dirver::set_device_add(::google::protobuf::int32 value) {
  
  device_add_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.device_add)
}

// int32 ActVelocity = 3;
inline void ControllerMessage_Dirver::clear_actvelocity() {
  actvelocity_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage_Dirver::actvelocity() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.ActVelocity)
  return actvelocity_;
}
inline void ControllerMessage_Dirver::set_actvelocity(::google::protobuf::int32 value) {
  
  actvelocity_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.ActVelocity)
}

// int32 SetVelocity = 4;
inline void ControllerMessage_Dirver::clear_setvelocity() {
  setvelocity_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage_Dirver::setvelocity() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.SetVelocity)
  return setvelocity_;
}
inline void ControllerMessage_Dirver::set_setvelocity(::google::protobuf::int32 value) {
  
  setvelocity_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.SetVelocity)
}

// float ctrl_dc_Voltage = 5;
inline void ControllerMessage_Dirver::clear_ctrl_dc_voltage() {
  ctrl_dc_voltage_ = 0;
}
inline float ControllerMessage_Dirver::ctrl_dc_voltage() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.ctrl_dc_Voltage)
  return ctrl_dc_voltage_;
}
inline void ControllerMessage_Dirver::set_ctrl_dc_voltage(float value) {
  
  ctrl_dc_voltage_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.ctrl_dc_Voltage)
}

// float CTRL_IPM_TEMPERATURE = 6;
inline void ControllerMessage_Dirver::clear_ctrl_ipm_temperature() {
  ctrl_ipm_temperature_ = 0;
}
inline float ControllerMessage_Dirver::ctrl_ipm_temperature() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.CTRL_IPM_TEMPERATURE)
  return ctrl_ipm_temperature_;
}
inline void ControllerMessage_Dirver::set_ctrl_ipm_temperature(float value) {
  
  ctrl_ipm_temperature_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.CTRL_IPM_TEMPERATURE)
}

// int32 ActualPos = 7;
inline void ControllerMessage_Dirver::clear_actualpos() {
  actualpos_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage_Dirver::actualpos() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.ActualPos)
  return actualpos_;
}
inline void ControllerMessage_Dirver::set_actualpos(::google::protobuf::int32 value) {
  
  actualpos_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.ActualPos)
}

// bool EmergencyInputValue = 8;
inline void ControllerMessage_Dirver::clear_emergencyinputvalue() {
  emergencyinputvalue_ = false;
}
inline bool ControllerMessage_Dirver::emergencyinputvalue() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.EmergencyInputValue)
  return emergencyinputvalue_;
}
inline void ControllerMessage_Dirver::set_emergencyinputvalue(bool value) {
  
  emergencyinputvalue_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.EmergencyInputValue)
}

// string Error = 9;
inline void ControllerMessage_Dirver::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ControllerMessage_Dirver::error() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.Error)
  return error_.GetNoArena();
}
inline void ControllerMessage_Dirver::set_error(const ::std::string& value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.Error)
}
#if LANG_CXX11
inline void ControllerMessage_Dirver::set_error(::std::string&& value) {
  
  error_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ControllerMessage.Dirver.Error)
}
#endif
inline void ControllerMessage_Dirver::set_error(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ControllerMessage.Dirver.Error)
}
inline void ControllerMessage_Dirver::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ControllerMessage.Dirver.Error)
}
inline ::std::string* ControllerMessage_Dirver::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:ControllerMessage.Dirver.Error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ControllerMessage_Dirver::release_error() {
  // @@protoc_insertion_point(field_release:ControllerMessage.Dirver.Error)
  
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ControllerMessage_Dirver::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:ControllerMessage.Dirver.Error)
}

// float ActCurrent = 11;
inline void ControllerMessage_Dirver::clear_actcurrent() {
  actcurrent_ = 0;
}
inline float ControllerMessage_Dirver::actcurrent() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Dirver.ActCurrent)
  return actcurrent_;
}
inline void ControllerMessage_Dirver::set_actcurrent(float value) {
  
  actcurrent_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Dirver.ActCurrent)
}

// -------------------------------------------------------------------

// ControllerMessage

// int32 Stat = 1;
inline void ControllerMessage::clear_stat() {
  stat_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage::stat() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.Stat)
  return stat_;
}
inline void ControllerMessage::set_stat(::google::protobuf::int32 value) {
  
  stat_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.Stat)
}

// repeated .ControllerMessage.Dirver DirverMessage = 2;
inline int ControllerMessage::dirvermessage_size() const {
  return dirvermessage_.size();
}
inline void ControllerMessage::clear_dirvermessage() {
  dirvermessage_.Clear();
}
inline ::ControllerMessage_Dirver* ControllerMessage::mutable_dirvermessage(int index) {
  // @@protoc_insertion_point(field_mutable:ControllerMessage.DirverMessage)
  return dirvermessage_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ControllerMessage_Dirver >*
ControllerMessage::mutable_dirvermessage() {
  // @@protoc_insertion_point(field_mutable_list:ControllerMessage.DirverMessage)
  return &dirvermessage_;
}
inline const ::ControllerMessage_Dirver& ControllerMessage::dirvermessage(int index) const {
  // @@protoc_insertion_point(field_get:ControllerMessage.DirverMessage)
  return dirvermessage_.Get(index);
}
inline ::ControllerMessage_Dirver* ControllerMessage::add_dirvermessage() {
  // @@protoc_insertion_point(field_add:ControllerMessage.DirverMessage)
  return dirvermessage_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ControllerMessage_Dirver >&
ControllerMessage::dirvermessage() const {
  // @@protoc_insertion_point(field_list:ControllerMessage.DirverMessage)
  return dirvermessage_;
}

// .ExternSensor SensorMsg = 3;
inline bool ControllerMessage::has_sensormsg() const {
  return this != internal_default_instance() && sensormsg_ != NULL;
}
inline const ::ExternSensor& ControllerMessage::_internal_sensormsg() const {
  return *sensormsg_;
}
inline const ::ExternSensor& ControllerMessage::sensormsg() const {
  const ::ExternSensor* p = sensormsg_;
  // @@protoc_insertion_point(field_get:ControllerMessage.SensorMsg)
  return p != NULL ? *p : *reinterpret_cast<const ::ExternSensor*>(
      &::_ExternSensor_default_instance_);
}
inline ::ExternSensor* ControllerMessage::release_sensormsg() {
  // @@protoc_insertion_point(field_release:ControllerMessage.SensorMsg)
  
  ::ExternSensor* temp = sensormsg_;
  sensormsg_ = NULL;
  return temp;
}
inline ::ExternSensor* ControllerMessage::mutable_sensormsg() {
  
  if (sensormsg_ == NULL) {
    auto* p = CreateMaybeMessage<::ExternSensor>(GetArenaNoVirtual());
    sensormsg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ControllerMessage.SensorMsg)
  return sensormsg_;
}
inline void ControllerMessage::set_allocated_sensormsg(::ExternSensor* sensormsg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(sensormsg_);
  }
  if (sensormsg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      sensormsg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, sensormsg, submessage_arena);
    }
    
  } else {
    
  }
  sensormsg_ = sensormsg;
  // @@protoc_insertion_point(field_set_allocated:ControllerMessage.SensorMsg)
}

// int32 ctrl_device = 4;
inline void ControllerMessage::clear_ctrl_device() {
  ctrl_device_ = 0;
}
inline ::google::protobuf::int32 ControllerMessage::ctrl_device() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.ctrl_device)
  return ctrl_device_;
}
inline void ControllerMessage::set_ctrl_device(::google::protobuf::int32 value) {
  
  ctrl_device_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.ctrl_device)
}

// .BmsMessage bmsMsg = 5;
inline bool ControllerMessage::has_bmsmsg() const {
  return this != internal_default_instance() && bmsmsg_ != NULL;
}
inline const ::BmsMessage& ControllerMessage::_internal_bmsmsg() const {
  return *bmsmsg_;
}
inline const ::BmsMessage& ControllerMessage::bmsmsg() const {
  const ::BmsMessage* p = bmsmsg_;
  // @@protoc_insertion_point(field_get:ControllerMessage.bmsMsg)
  return p != NULL ? *p : *reinterpret_cast<const ::BmsMessage*>(
      &::_BmsMessage_default_instance_);
}
inline ::BmsMessage* ControllerMessage::release_bmsmsg() {
  // @@protoc_insertion_point(field_release:ControllerMessage.bmsMsg)
  
  ::BmsMessage* temp = bmsmsg_;
  bmsmsg_ = NULL;
  return temp;
}
inline ::BmsMessage* ControllerMessage::mutable_bmsmsg() {
  
  if (bmsmsg_ == NULL) {
    auto* p = CreateMaybeMessage<::BmsMessage>(GetArenaNoVirtual());
    bmsmsg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ControllerMessage.bmsMsg)
  return bmsmsg_;
}
inline void ControllerMessage::set_allocated_bmsmsg(::BmsMessage* bmsmsg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(bmsmsg_);
  }
  if (bmsmsg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      bmsmsg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, bmsmsg, submessage_arena);
    }
    
  } else {
    
  }
  bmsmsg_ = bmsmsg;
  // @@protoc_insertion_point(field_set_allocated:ControllerMessage.bmsMsg)
}

// .ErrorMessage errormsg = 6;
inline bool ControllerMessage::has_errormsg() const {
  return this != internal_default_instance() && errormsg_ != NULL;
}
inline const ::ErrorMessage& ControllerMessage::_internal_errormsg() const {
  return *errormsg_;
}
inline const ::ErrorMessage& ControllerMessage::errormsg() const {
  const ::ErrorMessage* p = errormsg_;
  // @@protoc_insertion_point(field_get:ControllerMessage.errormsg)
  return p != NULL ? *p : *reinterpret_cast<const ::ErrorMessage*>(
      &::_ErrorMessage_default_instance_);
}
inline ::ErrorMessage* ControllerMessage::release_errormsg() {
  // @@protoc_insertion_point(field_release:ControllerMessage.errormsg)
  
  ::ErrorMessage* temp = errormsg_;
  errormsg_ = NULL;
  return temp;
}
inline ::ErrorMessage* ControllerMessage::mutable_errormsg() {
  
  if (errormsg_ == NULL) {
    auto* p = CreateMaybeMessage<::ErrorMessage>(GetArenaNoVirtual());
    errormsg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ControllerMessage.errormsg)
  return errormsg_;
}
inline void ControllerMessage::set_allocated_errormsg(::ErrorMessage* errormsg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(errormsg_);
  }
  if (errormsg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      errormsg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, errormsg, submessage_arena);
    }
    
  } else {
    
  }
  errormsg_ = errormsg;
  // @@protoc_insertion_point(field_set_allocated:ControllerMessage.errormsg)
}

// .AlarmMessage alarmmsg = 7;
inline bool ControllerMessage::has_alarmmsg() const {
  return this != internal_default_instance() && alarmmsg_ != NULL;
}
inline const ::AlarmMessage& ControllerMessage::_internal_alarmmsg() const {
  return *alarmmsg_;
}
inline const ::AlarmMessage& ControllerMessage::alarmmsg() const {
  const ::AlarmMessage* p = alarmmsg_;
  // @@protoc_insertion_point(field_get:ControllerMessage.alarmmsg)
  return p != NULL ? *p : *reinterpret_cast<const ::AlarmMessage*>(
      &::_AlarmMessage_default_instance_);
}
inline ::AlarmMessage* ControllerMessage::release_alarmmsg() {
  // @@protoc_insertion_point(field_release:ControllerMessage.alarmmsg)
  
  ::AlarmMessage* temp = alarmmsg_;
  alarmmsg_ = NULL;
  return temp;
}
inline ::AlarmMessage* ControllerMessage::mutable_alarmmsg() {
  
  if (alarmmsg_ == NULL) {
    auto* p = CreateMaybeMessage<::AlarmMessage>(GetArenaNoVirtual());
    alarmmsg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ControllerMessage.alarmmsg)
  return alarmmsg_;
}
inline void ControllerMessage::set_allocated_alarmmsg(::AlarmMessage* alarmmsg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(alarmmsg_);
  }
  if (alarmmsg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      alarmmsg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, alarmmsg, submessage_arena);
    }
    
  } else {
    
  }
  alarmmsg_ = alarmmsg;
  // @@protoc_insertion_point(field_set_allocated:ControllerMessage.alarmmsg)
}

// float LineVelocity = 9;
inline void ControllerMessage::clear_linevelocity() {
  linevelocity_ = 0;
}
inline float ControllerMessage::linevelocity() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.LineVelocity)
  return linevelocity_;
}
inline void ControllerMessage::set_linevelocity(float value) {
  
  linevelocity_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.LineVelocity)
}

// float THVelocity = 10;
inline void ControllerMessage::clear_thvelocity() {
  thvelocity_ = 0;
}
inline float ControllerMessage::thvelocity() const {
  // @@protoc_insertion_point(field_get:ControllerMessage.THVelocity)
  return thvelocity_;
}
inline void ControllerMessage::set_thvelocity(float value) {
  
  thvelocity_ = value;
  // @@protoc_insertion_point(field_set:ControllerMessage.THVelocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ControllerMessage_2eproto