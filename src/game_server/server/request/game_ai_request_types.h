/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_ai_request_TYPES_H
#define game_ai_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "entity_types.h"
#include "game_request_types.h"


namespace game { namespace server { namespace request {


class RequestAiAddThreat {
 public:

  static const char* ascii_fingerprint; // = "0B887E647C78CD577B5D44BA55C2679A";
  static const uint8_t binary_fingerprint[16]; // = {0x0B,0x88,0x7E,0x64,0x7C,0x78,0xCD,0x57,0x7B,0x5D,0x44,0xBA,0x55,0xC2,0x67,0x9A};

  RequestAiAddThreat() : src_id_(0), src_type_(( ::entity::EntityType::type)0), target_id_(0), target_type_(( ::entity::EntityType::type)0), threat_value_(0) {
  }

  virtual ~RequestAiAddThreat() throw() {}

  int64_t src_id_;
   ::entity::EntityType::type src_type_;
  int64_t target_id_;
   ::entity::EntityType::type target_type_;
  int32_t threat_value_;

  void __set_src_id_(const int64_t val) {
    src_id_ = val;
  }

  void __set_src_type_(const  ::entity::EntityType::type val) {
    src_type_ = val;
  }

  void __set_target_id_(const int64_t val) {
    target_id_ = val;
  }

  void __set_target_type_(const  ::entity::EntityType::type val) {
    target_type_ = val;
  }

  void __set_threat_value_(const int32_t val) {
    threat_value_ = val;
  }

  bool operator == (const RequestAiAddThreat & rhs) const
  {
    if (!(src_id_ == rhs.src_id_))
      return false;
    if (!(src_type_ == rhs.src_type_))
      return false;
    if (!(target_id_ == rhs.target_id_))
      return false;
    if (!(target_type_ == rhs.target_type_))
      return false;
    if (!(threat_value_ == rhs.threat_value_))
      return false;
    return true;
  }
  bool operator != (const RequestAiAddThreat &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestAiAddThreat & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestAiAddThreat &a, RequestAiAddThreat &b);


class RequestAiSetTarget {
 public:

  static const char* ascii_fingerprint; // = "4CB61584F69EAA894D96370790D2AF6F";
  static const uint8_t binary_fingerprint[16]; // = {0x4C,0xB6,0x15,0x84,0xF6,0x9E,0xAA,0x89,0x4D,0x96,0x37,0x07,0x90,0xD2,0xAF,0x6F};

  RequestAiSetTarget() : id_(0), type_(( ::entity::EntityType::type)0), target_id_(0), target_type_(( ::entity::EntityType::type)0), force_lock_(false) {
  }

  virtual ~RequestAiSetTarget() throw() {}

  int64_t id_;
   ::entity::EntityType::type type_;
  int64_t target_id_;
   ::entity::EntityType::type target_type_;
  bool force_lock_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_target_id_(const int64_t val) {
    target_id_ = val;
  }

  void __set_target_type_(const  ::entity::EntityType::type val) {
    target_type_ = val;
  }

  void __set_force_lock_(const bool val) {
    force_lock_ = val;
  }

  bool operator == (const RequestAiSetTarget & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    if (!(target_id_ == rhs.target_id_))
      return false;
    if (!(target_type_ == rhs.target_type_))
      return false;
    if (!(force_lock_ == rhs.force_lock_))
      return false;
    return true;
  }
  bool operator != (const RequestAiSetTarget &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestAiSetTarget & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestAiSetTarget &a, RequestAiSetTarget &b);


class RequestAiSetAi {
 public:

  static const char* ascii_fingerprint; // = "DF2FE2E4EB425A90BF93B80E73230790";
  static const uint8_t binary_fingerprint[16]; // = {0xDF,0x2F,0xE2,0xE4,0xEB,0x42,0x5A,0x90,0xBF,0x93,0xB8,0x0E,0x73,0x23,0x07,0x90};

  RequestAiSetAi() : id_(0), type_(( ::entity::EntityType::type)0), ai_(0) {
  }

  virtual ~RequestAiSetAi() throw() {}

  int64_t id_;
   ::entity::EntityType::type type_;
  int32_t ai_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_ai_(const int32_t val) {
    ai_ = val;
  }

  bool operator == (const RequestAiSetAi & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    if (!(ai_ == rhs.ai_))
      return false;
    return true;
  }
  bool operator != (const RequestAiSetAi &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestAiSetAi & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestAiSetAi &a, RequestAiSetAi &b);

}}} // namespace

#endif
