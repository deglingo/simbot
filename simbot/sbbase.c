/* sbbase.c -
 */

#include "simbot/sbbase.h"



/* simbot_init_once:
 */
static gpointer simbot_init_once ( gpointer dummy )
{
  los_init();
  return NULL;
}



/* simbot_init:
 */
void simbot_init ( void )
{
  GOnce once = G_ONCE_INIT;
  g_once(&once, simbot_init_once, NULL);
}
