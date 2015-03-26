#include "character.h"
#include "partymember.h"

/***************************************
 * prototypes
 **************************************/
void *PC_construct(void);
int PC_destruct(void *this);

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



void *PC_construct(void){
	/**
	 * fill out more later
	 */
}

void *PC_destruct(void *this){

}
