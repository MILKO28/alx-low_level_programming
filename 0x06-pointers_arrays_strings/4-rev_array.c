#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: input array
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp[n];

	for (i = 0; n >= 0; n--, i++)
	{
		temp[i] = a[n];
	}
	for (j=0; j <= i; j++)
	{
		a[j] = temp[j];
	}
}
