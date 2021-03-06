/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef session_social_request_TYPES_H
#define session_social_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "session_request_types.h"


namespace session { namespace server { namespace request {


class RequestSocialCheckInBlacklist {
 public:

  static const char* ascii_fingerprint; // = "CC6255EBA8E77F25EDEFA14C686CCFE6";
  static const uint8_t binary_fingerprint[16]; // = {0xCC,0x62,0x55,0xEB,0xA8,0xE7,0x7F,0x25,0xED,0xEF,0xA1,0x4C,0x68,0x6C,0xCF,0xE6};

  RequestSocialCheckInBlacklist() : actor_id_(0), target_actor_id_(0), result_(0) {
  }

  virtual ~RequestSocialCheckInBlacklist() throw() {}

  int64_t actor_id_;
  int64_t target_actor_id_;
  bool result_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  void __set_target_actor_id_(const int64_t val) {
    target_actor_id_ = val;
  }

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const RequestSocialCheckInBlacklist & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    if (!(target_actor_id_ == rhs.target_actor_id_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const RequestSocialCheckInBlacklist &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestSocialCheckInBlacklist & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestSocialCheckInBlacklist &a, RequestSocialCheckInBlacklist &b);

}}} // namespace

#endif
