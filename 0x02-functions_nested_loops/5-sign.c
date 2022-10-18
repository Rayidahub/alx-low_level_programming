#include "main.h"

/**
* print_sign -print the sign of a number
* Return: 1 if number is greater than zero
* @n: the number of the sign to be printed
 * 0 of number is zero
* -1 if number is less that zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
