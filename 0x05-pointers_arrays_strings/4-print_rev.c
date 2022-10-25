#include "main.h"
/**
 * print_rev - Prints a string to reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

<<<<<<< HEAD
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		(s[i--]);
	}
	('\n');
=======
	_putchar('\n');
>>>>>>> b01eb7badf87ef2d082afca4cad2efcc2d1f46b3
}
