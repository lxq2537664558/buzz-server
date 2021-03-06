/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_soul_login_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kSoulFieldValues[] = {
  SoulField::ID,
  SoulField::LEVEL,
  SoulField::STEP,
  SoulField::COMMON_SKILL_LEVEL,
  SoulField::APPEAR_SKILL_LEVEL,
  SoulField::SOUL_SKILL_LEVEL,
  SoulField::MAX
};
const char* _kSoulFieldNames[] = {
  "ID",
  "LEVEL",
  "STEP",
  "COMMON_SKILL_LEVEL",
  "APPEAR_SKILL_LEVEL",
  "SOUL_SKILL_LEVEL",
  "MAX"
};
const std::map<int, const char*> _SoulField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kSoulFieldValues, _kSoulFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kSoulLoginResultValues[] = {
  SoulLoginResult::SUCCESS,
  SoulLoginResult::ERROR_UNKNOWN
};
const char* _kSoulLoginResultNames[] = {
  "SUCCESS",
  "ERROR_UNKNOWN"
};
const std::map<int, const char*> _SoulLoginResult_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kSoulLoginResultValues, _kSoulLoginResultNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageSoulField::ascii_fingerprint = "62CBF95059CB084430B0BABE2E5A68C7";
const uint8_t StorageSoulField::binary_fingerprint[16] = {0x62,0xCB,0xF9,0x50,0x59,0xCB,0x08,0x44,0x30,0xB0,0xBA,0xBE,0x2E,0x5A,0x68,0xC7};

uint32_t StorageSoulField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id_ = false;
  bool isset_level_ = false;
  bool isset_step_ = false;
  bool isset_common_skill_level_ = false;
  bool isset_appear_skill_level_ = false;
  bool isset_soul_skill_level_ = false;

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
          xfer += iprot->readI32(this->id_);
          isset_id_ = true;
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
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->step_);
          isset_step_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->common_skill_level_);
          isset_common_skill_level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->appear_skill_level_);
          isset_appear_skill_level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->soul_skill_level_);
          isset_soul_skill_level_ = true;
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

  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_step_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_common_skill_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_appear_skill_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_soul_skill_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSoulField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSoulField");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("step_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->step_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("common_skill_level_", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->common_skill_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("appear_skill_level_", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->appear_skill_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("soul_skill_level_", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->soul_skill_level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSoulField &a, StorageSoulField &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
  swap(a.level_, b.level_);
  swap(a.step_, b.step_);
  swap(a.common_skill_level_, b.common_skill_level_);
  swap(a.appear_skill_level_, b.appear_skill_level_);
  swap(a.soul_skill_level_, b.soul_skill_level_);
}

const char* StorageSoulLoginRequest::ascii_fingerprint = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
const uint8_t StorageSoulLoginRequest::binary_fingerprint[16] = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

uint32_t StorageSoulLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t StorageSoulLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSoulLoginRequest");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSoulLoginRequest &a, StorageSoulLoginRequest &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
}

const char* StorageSoulLoginResponse::ascii_fingerprint = "2B08EB97564FBB4AF730341C4A2653B3";
const uint8_t StorageSoulLoginResponse::binary_fingerprint[16] = {0x2B,0x08,0xEB,0x97,0x56,0x4F,0xBB,0x4A,0xF7,0x30,0x34,0x1C,0x4A,0x26,0x53,0xB3};

uint32_t StorageSoulLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_result_ = false;
  bool isset_fields_ = false;

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
          this->result_ = (SoulLoginResult::type)ecast0;
          isset_result_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fields_.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->fields_.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += this->fields_[_i5].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_fields_ = true;
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
  if (!isset_fields_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSoulLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSoulLoginResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fields_", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fields_.size()));
    std::vector<StorageSoulField> ::const_iterator _iter6;
    for (_iter6 = this->fields_.begin(); _iter6 != this->fields_.end(); ++_iter6)
    {
      xfer += (*_iter6).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSoulLoginResponse &a, StorageSoulLoginResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
  swap(a.fields_, b.fields_);
}

}} // namespace
