#include "main.h"
/**
 *function that checks for uppercase character
 *@c: input character
 *returns 1 if c is upper
 *returns 0 if c is lower
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
