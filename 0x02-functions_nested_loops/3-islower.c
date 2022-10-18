#include "main.h"

/**
 * _islower - checks if a character is lowercase
* @c: character to test.
* Return: 1 if letter is lowercase, 0 if it is not lowercase letter
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
