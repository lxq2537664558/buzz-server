#ifndef __GAME__SERVER__CHAT__ACTOR__LOGOUT__EVENT__HANDLER__H
#define __GAME__SERVER__CHAT__ACTOR__LOGOUT__EVENT__HANDLER__H

#include <cstddef>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace game {

namespace server {

namespace chat {

class ActorLogoutEventHandler : public core::Noncopyable {
 public:
  ActorLogoutEventHandler();
  ~ActorLogoutEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection conn_;
};

}  // namespace chat

}  // namespace server

}  // namespace game

#endif  // __GAME__SERVER__CHAT__ACTOR__LOGOUT__EVENT__HANDLER__H

