/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_effect_request_types.h"

#include <algorithm>

namespace game { namespace server { namespace request {

const char* RequestEffectStart::ascii_fingerprint = "729E45C97A0E730BDEEBC207E4F729D3";
const uint8_t RequestEffectStart::binary_fingerprint[16] = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

uint32_t RequestEffectStart::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_entity_type_ = false;
  bool isset_entity_id_ = false;
  bool isset_effect_id_ = false;
  bool isset_succeed_ = false;

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
          this->entity_type_ = ( ::entity::EntityType::type)ecast0;
          isset_entity_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->entity_id_);
          isset_entity_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->effect_id_);
          isset_effect_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->succeed_);
          isset_succeed_ = true;
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

  if (!isset_entity_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_entity_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_effect_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_succeed_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestEffectStart::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestEffectStart");

  xfer += oprot->writeFieldBegin("entity_type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->entity_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("entity_id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->entity_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("effect_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->effect_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("succeed_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->succeed_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestEffectStart &a, RequestEffectStart &b) {
  using ::std::swap;
  swap(a.entity_type_, b.entity_type_);
  swap(a.entity_id_, b.entity_id_);
  swap(a.effect_id_, b.effect_id_);
  swap(a.succeed_, b.succeed_);
}

const char* RequestEffectEnd::ascii_fingerprint = "729E45C97A0E730BDEEBC207E4F729D3";
const uint8_t RequestEffectEnd::binary_fingerprint[16] = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

uint32_t RequestEffectEnd::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_entity_type_ = false;
  bool isset_entity_id_ = false;
  bool isset_effect_id_ = false;
  bool isset_succeed_ = false;

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
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->entity_type_ = ( ::entity::EntityType::type)ecast1;
          isset_entity_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->entity_id_);
          isset_entity_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->effect_id_);
          isset_effect_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->succeed_);
          isset_succeed_ = true;
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

  if (!isset_entity_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_entity_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_effect_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_succeed_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestEffectEnd::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestEffectEnd");

  xfer += oprot->writeFieldBegin("entity_type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->entity_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("entity_id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->entity_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("effect_id_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->effect_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("succeed_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->succeed_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestEffectEnd &a, RequestEffectEnd &b) {
  using ::std::swap;
  swap(a.entity_type_, b.entity_type_);
  swap(a.entity_id_, b.entity_id_);
  swap(a.effect_id_, b.effect_id_);
  swap(a.succeed_, b.succeed_);
}

const char* RequestEffectCommonStatusStart::ascii_fingerprint = "0B404843D363CA575114065309EF6552";
const uint8_t RequestEffectCommonStatusStart::binary_fingerprint[16] = {0x0B,0x40,0x48,0x43,0xD3,0x63,0xCA,0x57,0x51,0x14,0x06,0x53,0x09,0xEF,0x65,0x52};

uint32_t RequestEffectCommonStatusStart::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_entity_type_ = false;
  bool isset_entity_id_ = false;
  bool isset_status_ = false;
  bool isset_succeed_ = false;

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
          int32_t ecast2;
          xfer += iprot->readI32(ecast2);
          this->entity_type_ = ( ::entity::EntityType::type)ecast2;
          isset_entity_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->entity_id_);
          isset_entity_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->status_ = ( ::entity::RoleCommonStatus::type)ecast3;
          isset_status_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->succeed_);
          isset_succeed_ = true;
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

  if (!isset_entity_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_entity_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_status_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_succeed_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestEffectCommonStatusStart::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestEffectCommonStatusStart");

  xfer += oprot->writeFieldBegin("entity_type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->entity_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("entity_id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->entity_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->status_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("succeed_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->succeed_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestEffectCommonStatusStart &a, RequestEffectCommonStatusStart &b) {
  using ::std::swap;
  swap(a.entity_type_, b.entity_type_);
  swap(a.entity_id_, b.entity_id_);
  swap(a.status_, b.status_);
  swap(a.succeed_, b.succeed_);
}

const char* RequestEffectCommonStatusEnd::ascii_fingerprint = "0B404843D363CA575114065309EF6552";
const uint8_t RequestEffectCommonStatusEnd::binary_fingerprint[16] = {0x0B,0x40,0x48,0x43,0xD3,0x63,0xCA,0x57,0x51,0x14,0x06,0x53,0x09,0xEF,0x65,0x52};

uint32_t RequestEffectCommonStatusEnd::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_entity_type_ = false;
  bool isset_entity_id_ = false;
  bool isset_status_ = false;
  bool isset_succeed_ = false;

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
          int32_t ecast4;
          xfer += iprot->readI32(ecast4);
          this->entity_type_ = ( ::entity::EntityType::type)ecast4;
          isset_entity_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->entity_id_);
          isset_entity_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast5;
          xfer += iprot->readI32(ecast5);
          this->status_ = ( ::entity::RoleCommonStatus::type)ecast5;
          isset_status_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->succeed_);
          isset_succeed_ = true;
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

  if (!isset_entity_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_entity_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_status_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_succeed_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestEffectCommonStatusEnd::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestEffectCommonStatusEnd");

  xfer += oprot->writeFieldBegin("entity_type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->entity_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("entity_id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->entity_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->status_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("succeed_", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->succeed_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestEffectCommonStatusEnd &a, RequestEffectCommonStatusEnd &b) {
  using ::std::swap;
  swap(a.entity_type_, b.entity_type_);
  swap(a.entity_id_, b.entity_id_);
  swap(a.status_, b.status_);
  swap(a.succeed_, b.succeed_);
}

}}} // namespace
