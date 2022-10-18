#include "main.h"

/**
* _is lower - checks if a character is lowercase
* @c: the character
* Returen: 1 if letter is lowercase, if not print 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
