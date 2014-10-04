/* sbbot.c -
 */

#include "simbot/sbbot.h"
#include "simbot/sbbot.inl"



/* sb_bot_new:
 */
SbBot *sb_bot_new ( SbSim *sim )
{
  SbBot *bot = SB_BOT(l_object_new(SB_CLASS_BOT, NULL));
  return bot;
}
