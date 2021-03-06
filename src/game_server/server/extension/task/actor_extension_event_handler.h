//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-10-13 00:20:52.
// File name: actor_extension_event_handler.h
//
// Description:
// Define class ActorExtensionEventHandler.
//

#ifndef __GAME__SERVER__TASK__ACTOR__EXTENSION__EVENT__HANDLER__H
#define __GAME__SERVER__TASK__ACTOR__EXTENSION__EVENT__HANDLER__H

#include <stddef.h>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace game {

namespace server {

namespace task {

class ActorExtensionEventHandler : public core::Noncopyable {
 public:
  ActorExtensionEventHandler();
  ~ActorExtensionEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection conn_actor_extension_;
};

}  // namespace task

}  // namespace server

}  // namespace game

#endif  // __GAME__SERVER__TASK__ACTOR__EXTENSION__EVENT__HANDLER__H

