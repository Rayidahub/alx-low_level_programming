#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry
 * Return: 0 on success
 */
int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
	{
		printf("%d is %s\n", n, "is positive");
	}
		else if (n == 0)
	{
		printf("%d is %s\n", n, "is zero");
	}
		else  (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
		return (0);
}
