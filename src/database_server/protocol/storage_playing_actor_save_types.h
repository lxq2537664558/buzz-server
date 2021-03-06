/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_playing_actor_save_TYPES_H
#define storage_playing_actor_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_playing_actor_login_types.h"


namespace database { namespace protocol {


class StoragePlayingActorSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "3263F68A3D2A7BE612300F8E1F9F37EA";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x63,0xF6,0x8A,0x3D,0x2A,0x7B,0xE6,0x12,0x30,0x0F,0x8E,0x1F,0x9F,0x37,0xEA};

  StoragePlayingActorSaveRequest() : actor_id_(0) {
  }

  virtual ~StoragePlayingActorSaveRequest() throw() {}

  int64_t actor_id_;
   ::database::protocol::StoragePlayingActorField field_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_field_(const  ::database::protocol::StoragePlayingActorField& val) {
    field_ = val;
  }

  bool operator == (const StoragePlayingActorSaveRequest & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(field_ == rhs.field_))
      return false;
    return true;
  }
  bool operator != (const StoragePlayingActorSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StoragePlayingActorSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StoragePlayingActorSaveRequest &a, StoragePlayingActorSaveRequest &b);


class StoragePlayingActorSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StoragePlayingActorSaveResponse() : result_(0) {
  }

  virtual ~StoragePlayingActorSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StoragePlayingActorSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StoragePlayingActorSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StoragePlayingActorSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StoragePlayingActorSaveResponse &a, StoragePlayingActorSaveResponse &b);

}} // namespace

#endif
