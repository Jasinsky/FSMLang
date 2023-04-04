#include "sub_machine3.h"

TOP_LEVEL_EVENT sub_machine3_a3(pSUB_MACHINE3 pfsm)
{
   DBG_PRINTF("sub_machine3_a3\n");

   return PARENT(noEvent);
}

TOP_LEVEL_EVENT sub_machine3_a2(pSUB_MACHINE3 pfsm)
{
   DBG_PRINTF("sub_machine3_a2\n");

   return THIS(e3);
}

TOP_LEVEL_EVENT sub_machine3_a1(pSUB_MACHINE3 pfsm)
{
   DBG_PRINTF("sub_machine3_a1\n");

   return THIS(e2);
}

TOP_LEVEL_EVENT sub_machine3_noAction(pSUB_MACHINE3 pfsm)
{
   DBG_PRINTF("sub_machine3_noAction\n");

   return THIS(noEvent);
}

TOP_LEVEL_EVENT __attribute__((weak)) sub_machine3_handle_e7(pSUB_MACHINE3 pfsm)
{
	DBG_PRINTF("weak: sub_machine3_handle_e7");
	return THIS(noEvent);
}

