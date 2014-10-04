/* sbsim.h -
 */

#ifndef _SBSIM_H_
#define _SBSIM_H_

#include "simbot/sbbase.h"
#include "simbot/sbsim-def.h"



/* SbSim:
 */
struct _SbSim
{
  SB_SIM_INSTANCE_HEADER;
};



/* SbSimClass:
 */
struct _SbSimClass
{
  SB_SIM_CLASS_HEADER;
};



SbSim *sb_sim_new ( void );
void sb_sim_update ( SbSim *sim );



#endif
