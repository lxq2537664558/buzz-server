/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef spirit_TYPES_H
#define spirit_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct SpiritFacadeType {
  enum type {
    MIN = 0,
    HORSE = 0,
    WING = 1,
    MAX = 2
  };
};

extern const std::map<int, const char*> _SpiritFacadeType_VALUES_TO_NAMES;

struct RuneAttributeType {
  enum type {
    MIN = 0,
    PHYSIQUE = 0,
    STRENGTH = 1,
    INTELLIGENCE = 2,
    AGILE = 3,
    SPIRIT = 4,
    MAX = 5
  };
};

extern const std::map<int, const char*> _RuneAttributeType_VALUES_TO_NAMES;

} // namespace

#endif