#include "main.h"

/**
 * function
 *
 * Return: Always 0 (Succes)
 */

int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
