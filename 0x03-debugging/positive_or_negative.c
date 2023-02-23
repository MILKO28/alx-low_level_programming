#include "main.h"

/**
 * positive_or_negative - function that checkes negative or positive
 * @i: input
 * Return: Always 1 (Success)
 */
void positive_or_negative(int n)
{

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
}
