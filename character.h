#include "object.h"

#ifndef CHARACTER_H
#define CHARACTER_H

/**
 * @class 	character
 * @brief 	an abstract class for all characters in a role playing game
 * @inherits	object
 */
typedef struct CHARACTER_CLASS{
	/**
	 * @brief 	constructs a new character and return it
	 * @return 	a new character object
	 * @details	the function should create a new character object and return
	 * 		that object.
	 */
	void *(*constructor)(void);

	/**
	 * @brief	destructor of a character and delete all memory used
	 * @param	this
	 * 			this character object
	 * @return	error if the object could not be deleted
	 * @details	this method is the destructor of the class. It is called
	 * 		when the object returned from the constructor is no longer
	 *		needed.
	 */
	int (*destruct)(void *this);

	/**
	 * More to add later today
	 */
}character_t;
#endif
