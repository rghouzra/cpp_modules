#ifndef ICharacter_HPP
#define ICharacter_HPP

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ICharacter
{
	public	:
		ICharacter ();
		ICharacter (ICharacter const &obj);
		~ICharacter ();
		ICharacter &operator= (const ICharacter &obj);

	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
