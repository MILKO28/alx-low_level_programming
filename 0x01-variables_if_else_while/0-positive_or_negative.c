#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
else if (n < 0)
	{
printf("%d", n);
printf(" is negative\n");
}
	else
	{
printf("%d", n);
printf(" is zero\n");
}
	return (0);
}
