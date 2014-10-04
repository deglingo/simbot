/* sbsim.c -
 */

#include "simbot/sbsim.h"
#include "simbot/sbsim.inl"



/* sb_sim_new:
 */
SbSim *sb_sim_new ( void )
{
  SbSim *sim;
  sim = SB_SIM(l_object_new(SB_CLASS_SIM, NULL));
  return sim;
}
