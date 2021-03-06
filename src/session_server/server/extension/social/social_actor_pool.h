#ifndef __SESSION__SERVER__SOCIAL__SOCIAL__ACTOR__POOL__H
#define __SESSION__SERVER__SOCIAL__SOCIAL__ACTOR__POOL__H

#include "global/pool_template.h"
#include "global/singleton_factory.h"
#include "session_server/server/extension/social/social_actor.h"

namespace session {

namespace server {

namespace social {

class SocialActorPool : public global::SingletonFactory<SocialActorPool> {
  friend class global::SingletonFactory<SocialActorPool>;

 public:
  bool Initialize(size_t initial_number, size_t extend_number);
  void Finalize();

  SocialActor *Allocate();
  void Deallocate(SocialActor *actor);

 private:
  SocialActorPool() {}
  ~SocialActorPool() {}

  global::PoolTemplate<SocialActor> actors_;
};

}  // namespace social

}  // namespace server

}  // namespace session

#endif  // __SESSION__SERVER__SOCIAL__SOCIAL__ACTOR__POOL__H

