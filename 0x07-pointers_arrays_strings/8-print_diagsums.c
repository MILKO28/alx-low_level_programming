#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, total_1 = 0, total_2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total_1 = total_1 + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total_2 = total_2 + a[n];
	printf("%d, %d\n", total_1, total_2);
}
