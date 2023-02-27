#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a - number to be swapped
 * @b - number to be sawpped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
