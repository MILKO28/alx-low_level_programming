#include "main.h"

/**
 * function
 *
 * Return: Always 0 (Succes)
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
