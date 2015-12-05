/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_skill_login_TYPES_H
#define storage_skill_login_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct SkillField {
  enum type {
    SKILL_ID = 0,
    CURRENT_LEVEL = 1,
    MAX = 2
  };
};

extern const std::map<int, const char*> _SkillField_VALUES_TO_NAMES;

struct SkillLoginResult {
  enum type {
    SUCCESS = 0,
    ERROR_UNKNOWN = 1
  };
};

extern const std::map<int, const char*> _SkillLoginResult_VALUES_TO_NAMES;


class StorageSkillField {
 public:

  static const char* ascii_fingerprint; // = "422C35A5D98C69C9CDE50568C7E3028F";
  static const uint8_t binary_fingerprint[16]; // = {0x42,0x2C,0x35,0xA5,0xD9,0x8C,0x69,0xC9,0xCD,0xE5,0x05,0x68,0xC7,0xE3,0x02,0x8F};

  StorageSkillField() : skill_id_(0), skill_current_level_(0) {
  }

  virtual ~StorageSkillField() throw() {}

  int32_t skill_id_;
  int16_t skill_current_level_;

  void __set_skill_id_(const int32_t val) {
    skill_id_ = val;
  }

  void __set_skill_current_level_(const int16_t val) {
    skill_current_level_ = val;
  }

  bool operator == (const StorageSkillField & rhs) const
  {
    if (!(skill_id_ == rhs.skill_id_))
      return false;
    if (!(skill_current_level_ == rhs.skill_current_level_))
      return false;
    return true;
  }
  bool operator != (const StorageSkillField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSkillField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSkillField &a, StorageSkillField &b);


class StorageSkillLoginRequest {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  StorageSkillLoginRequest() : id_(0) {
  }

  virtual ~StorageSkillLoginRequest() throw() {}

  int64_t id_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  bool operator == (const StorageSkillLoginRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    return true;
  }
  bool operator != (const StorageSkillLoginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSkillLoginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSkillLoginRequest &a, StorageSkillLoginRequest &b);

typedef struct _StorageSkillLoginResponse__isset {
  _StorageSkillLoginResponse__isset() : fields_(false) {}
  bool fields_;
} _StorageSkillLoginResponse__isset;

class StorageSkillLoginResponse {
 public:

  static const char* ascii_fingerprint; // = "3809E6B3119A454E67BE3A3FFB392A4D";
  static const uint8_t binary_fingerprint[16]; // = {0x38,0x09,0xE6,0xB3,0x11,0x9A,0x45,0x4E,0x67,0xBE,0x3A,0x3F,0xFB,0x39,0x2A,0x4D};

  StorageSkillLoginResponse() : result_((SkillLoginResult::type)0) {
  }

  virtual ~StorageSkillLoginResponse() throw() {}

  SkillLoginResult::type result_;
  std::vector<StorageSkillField>  fields_;

  _StorageSkillLoginResponse__isset __isset;

  void __set_result_(const SkillLoginResult::type val) {
    result_ = val;
  }

  void __set_fields_(const std::vector<StorageSkillField> & val) {
    fields_ = val;
    __isset.fields_ = true;
  }

  bool operator == (const StorageSkillLoginResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (__isset.fields_ != rhs.__isset.fields_)
      return false;
    else if (__isset.fields_ && !(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const StorageSkillLoginResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSkillLoginResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSkillLoginResponse &a, StorageSkillLoginResponse &b);

}} // namespace

#endif