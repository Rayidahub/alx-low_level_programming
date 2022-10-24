#include "main.h"

/**
 * swap_int - swaps both int
 * @a:  swap int 1
 * @b:  swap int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
