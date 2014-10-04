/* sbbot.h -
 */

#ifndef _SBBOT_H_
#define _SBBOT_H_

#include "simbot/sbbase.h"
#include "simbot/sbsim.h"
#include "simbot/sbbot-def.h"



/* SbBot:
 */
struct _SbBot
{
  SB_BOT_INSTANCE_HEADER;
};



/* SbBotClass:
 */
struct _SbBotClass
{
  SB_BOT_CLASS_HEADER;
};



SbBot *sb_bot_new ( SbSim *sim );



#endif
