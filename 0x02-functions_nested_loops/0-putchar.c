#include <stdio.h>
/**
* main - Entry
* Return: 0 on success.
*/
int main(void)

{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
{
	putchar(c[i]);
}
	putchar('\n');
	return (0);
}
