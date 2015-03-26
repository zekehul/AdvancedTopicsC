#include "character.h"
#include "partymember.h"

/***************************************
 * prototypes
 **************************************/
void *PC_construct(void);
int PC_destruct(void *this);

typedef struct PC_OBJECT_STRUCT{
	//add stuff here
}pc_obj_t;

/**
 * @class	pc_t
 * @brief	The static class object for a player character
 * @extends	character_t
 * @extends	party_mem_t
 */
typedef struct PC_CLASS{
	//base class of PC
	character_t base;
	//PC is extending
	party_mem_t extended;
}pc_t;

static pc_t this_static;

character_t const *install(void){
	this_static.base.constructor = PC_construct;
	this_static.base.destruct = PC_destruct;
	//more to be added later
	//this_static.extended.
	return (character_t *)&this_static;
}

void uninstall(void){

}

void *PC_construct(void){
	/**
	 * fill out more later
	 */
}

int PC_destruct(void *this){
	/**
	 * fill more out later
	 */
}
