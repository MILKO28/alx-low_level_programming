#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print out the integer contained in a listint_t node
 * @s: Pointer to the start of the list
 * Return: Number of node in the list
 */
size_t print_listint(const listint_t *s)
{
	size_t nodecount;

	nodecount = 0;
	while (s != NULL)
	{
		printf("%d\n", s->n);
		nodecount++;
		s = s->next;
	}
	return (nodecount);
}
