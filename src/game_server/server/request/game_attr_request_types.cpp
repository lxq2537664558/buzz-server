/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_attr_request_types.h"

#include <algorithm>

namespace game { namespace server { namespace request {

const char* RequestAttrCheckSwordOpen::ascii_fingerprint = "25038F937443AC9A2A06CEE5209E41BF";
const uint8_t RequestAttrCheckSwordOpen::binary_fingerprint[16] = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

uint32_t RequestAttrCheckSwordOpen::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_result_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrCheckSwordOpen::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrCheckSwordOpen");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrCheckSwordOpen &a, RequestAttrCheckSwordOpen &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.result_, b.result_);
}

const char* RequestAttrOpenSword::ascii_fingerprint = "25038F937443AC9A2A06CEE5209E41BF";
const uint8_t RequestAttrOpenSword::binary_fingerprint[16] = {0x25,0x03,0x8F,0x93,0x74,0x43,0xAC,0x9A,0x2A,0x06,0xCE,0xE5,0x20,0x9E,0x41,0xBF};

uint32_t RequestAttrOpenSword::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_result_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrOpenSword::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrOpenSword");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrOpenSword &a, RequestAttrOpenSword &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.result_, b.result_);
}

const char* RequestAttrGetSwordStep::ascii_fingerprint = "AFAFBCDB9822F9D1AA4E44188E720B47";
const uint8_t RequestAttrGetSwordStep::binary_fingerprint[16] = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

uint32_t RequestAttrGetSwordStep::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_step_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->step_);
          isset_step_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_step_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrGetSwordStep::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrGetSwordStep");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("step_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->step_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrGetSwordStep &a, RequestAttrGetSwordStep &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.step_, b.step_);
}

const char* RequestAttrAddSpiritFacade::ascii_fingerprint = "74790CD6C921812BFE1FB306DD15F078";
const uint8_t RequestAttrAddSpiritFacade::binary_fingerprint[16] = {0x74,0x79,0x0C,0xD6,0xC9,0x21,0x81,0x2B,0xFE,0x1F,0xB3,0x06,0xDD,0x15,0xF0,0x78};

uint32_t RequestAttrAddSpiritFacade::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_spirit_facade_id_ = false;
  bool isset_duration_time_ = false;
  bool isset_result_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->spirit_facade_id_);
          isset_spirit_facade_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->duration_time_);
          isset_duration_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_spirit_facade_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_duration_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrAddSpiritFacade::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrAddSpiritFacade");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("spirit_facade_id_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->spirit_facade_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("duration_time_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->duration_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrAddSpiritFacade &a, RequestAttrAddSpiritFacade &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.spirit_facade_id_, b.spirit_facade_id_);
  swap(a.duration_time_, b.duration_time_);
  swap(a.result_, b.result_);
}

const char* RequestAttrGetSpiritLevel::ascii_fingerprint = "AFAFBCDB9822F9D1AA4E44188E720B47";
const uint8_t RequestAttrGetSpiritLevel::binary_fingerprint[16] = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

uint32_t RequestAttrGetSpiritLevel::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_level_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          isset_level_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrGetSpiritLevel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrGetSpiritLevel");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrGetSpiritLevel &a, RequestAttrGetSpiritLevel &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.level_, b.level_);
}

const char* RequestAttrGetNobleLevel::ascii_fingerprint = "AFAFBCDB9822F9D1AA4E44188E720B47";
const uint8_t RequestAttrGetNobleLevel::binary_fingerprint[16] = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

uint32_t RequestAttrGetNobleLevel::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_level_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          isset_level_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrGetNobleLevel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrGetNobleLevel");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrGetNobleLevel &a, RequestAttrGetNobleLevel &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.level_, b.level_);
}

const char* RequestAttrGetSpiritFacadeType::ascii_fingerprint = "AFAFBCDB9822F9D1AA4E44188E720B47";
const uint8_t RequestAttrGetSpiritFacadeType::binary_fingerprint[16] = {0xAF,0xAF,0xBC,0xDB,0x98,0x22,0xF9,0xD1,0xAA,0x4E,0x44,0x18,0x8E,0x72,0x0B,0x47};

uint32_t RequestAttrGetSpiritFacadeType::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_ = false;
  bool isset_type_ = false;

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
          xfer += iprot->readI64(this->actor_);
          isset_actor_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type_);
          isset_type_ = true;
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

  if (!isset_actor_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestAttrGetSpiritFacadeType::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestAttrGetSpiritFacadeType");

  xfer += oprot->writeFieldBegin("actor_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestAttrGetSpiritFacadeType &a, RequestAttrGetSpiritFacadeType &b) {
  using ::std::swap;
  swap(a.actor_, b.actor_);
  swap(a.type_, b.type_);
}

}}} // namespace
