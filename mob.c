#include "NPC.h"

/****************************************
 *prototypes
 ****************************************/
void *mob_construct(void);
int mob_destruct(void *this);

typedef struct MOB_OBJECT_STRUCT{
	//add stuff here
}mob_obj_t;

/**
 * @class	mob_t
 * @brief	The static class object for a mob character
 * @extends	npc_t
 */
typedef struct MOB_CLASS{
	//base class of mob
	npc_t base;
}mob_t;

static mob_t this_static;

npc_t const *install(void){
	this_static.base.base.constructor = mob_construct;
	this_static.base.base.destruct = mob_destruct;
	//
	return (npc_t *)&this_static;
}

void uninstall(void){

}

void *mob_construct(void){

}

int merchant_destruct(void *this){

}
