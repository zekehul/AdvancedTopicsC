#include "NPC.h"

/***********************************
 *prototypes
 ***********************************/
void *merchant_construct(void);
int merchant_destruct(void *this);

typedef struct MERCHANT_OBJECT_STRUCT{
	//add stuff here
}merch_obj_t;

/**
 * @class	merch_t
 * @brief	The static class object for a merchant character
 * @extends	character_t
 */
typedef struct MERCHANT_CLASS{
	//base class of merchant
	npc_t base;
}merchant_t;

static merchant_t this_static;

npc_t const *install(void){
	this_static.base.base.constructor = merchant_construct;
	this_static.base.base.destruct = merchant_destruct;
	//more to be added later
	return (npc_t *)&this_static;
}

void uninstall(void){

}

void *merchant_construct(void){

}

int merchant_destruct(void *this){

}
