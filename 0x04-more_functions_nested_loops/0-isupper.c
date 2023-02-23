#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input character
 * returns 1 if c is upper, 0 if it is lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
