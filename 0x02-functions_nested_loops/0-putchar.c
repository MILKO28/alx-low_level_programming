#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		putchar(*p);
		p++;
	}
	putchar('\n');

	return (0);
}
