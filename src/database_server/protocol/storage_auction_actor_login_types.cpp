/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_auction_actor_login_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kAuctionActorFieldValues[] = {
  AuctionActorField::SELL_ITEMS,
  AuctionActorField::BUY_ITEMS,
  AuctionActorField::HISTORY,
  AuctionActorField::MAX
};
const char* _kAuctionActorFieldNames[] = {
  "SELL_ITEMS",
  "BUY_ITEMS",
  "HISTORY",
  "MAX"
};
const std::map<int, const char*> _AuctionActorField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kAuctionActorFieldValues, _kAuctionActorFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAuctionActorLoginResultValues[] = {
  AuctionActorLoginResult::SUCCESS,
  AuctionActorLoginResult::ERROR_UNKNOWN,
  AuctionActorLoginResult::MAX
};
const char* _kAuctionActorLoginResultNames[] = {
  "SUCCESS",
  "ERROR_UNKNOWN",
  "MAX"
};
const std::map<int, const char*> _AuctionActorLoginResult_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kAuctionActorLoginResultValues, _kAuctionActorLoginResultNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageAuctionActorField::ascii_fingerprint = "AB879940BD15B6B25691265F7384B271";
const uint8_t StorageAuctionActorField::binary_fingerprint[16] = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

uint32_t StorageAuctionActorField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_sell_items_ = false;
  bool isset_buy_items_ = false;
  bool isset_history_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sell_items_);
          isset_sell_items_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->buy_items_);
          isset_buy_items_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->history_);
          isset_history_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_sell_items_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_buy_items_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_history_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageAuctionActorField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageAuctionActorField");

  xfer += oprot->writeFieldBegin("sell_items_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->sell_items_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("buy_items_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->buy_items_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("history_", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->history_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageAuctionActorField &a, StorageAuctionActorField &b) {
  using ::std::swap;
  swap(a.sell_items_, b.sell_items_);
  swap(a.buy_items_, b.buy_items_);
  swap(a.history_, b.history_);
}

const char* StorageAuctionActorLoginRequest::ascii_fingerprint = "F5E236E76F6B26AEDFAED3A0E6551651";
const uint8_t StorageAuctionActorLoginRequest::binary_fingerprint[16] = {0xF5,0xE2,0x36,0xE7,0x6F,0x6B,0x26,0xAE,0xDF,0xAE,0xD3,0xA0,0xE6,0x55,0x16,0x51};

uint32_t StorageAuctionActorLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->offline_load_);
          this->__isset.offline_load_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->offline_task_id_);
          this->__isset.offline_task_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageAuctionActorLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageAuctionActorLoginRequest");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.offline_load_) {
    xfer += oprot->writeFieldBegin("offline_load_", ::apache::thrift::protocol::T_BOOL, 2);
    xfer += oprot->writeBool(this->offline_load_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.offline_task_id_) {
    xfer += oprot->writeFieldBegin("offline_task_id_", ::apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->offline_task_id_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageAuctionActorLoginRequest &a, StorageAuctionActorLoginRequest &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.offline_load_, b.offline_load_);
  swap(a.offline_task_id_, b.offline_task_id_);
  swap(a.__isset, b.__isset);
}

const char* StorageAuctionActorLoginResponse::ascii_fingerprint = "9686679C94D43D75F2B35A0BED2E4003";
const uint8_t StorageAuctionActorLoginResponse::binary_fingerprint[16] = {0x96,0x86,0x67,0x9C,0x94,0xD4,0x3D,0x75,0xF2,0xB3,0x5A,0x0B,0xED,0x2E,0x40,0x03};

uint32_t StorageAuctionActorLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_result_ = false;
  bool isset_field_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->result_ = (AuctionActorLoginResult::type)ecast0;
          isset_result_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->field_.read(iprot);
          isset_field_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_field_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageAuctionActorLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageAuctionActorLoginResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->field_.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageAuctionActorLoginResponse &a, StorageAuctionActorLoginResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
  swap(a.field_, b.field_);
}

}} // namespace
