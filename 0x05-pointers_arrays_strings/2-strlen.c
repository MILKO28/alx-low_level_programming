#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer 
 */
int _strlen(char *s)
{
	int i;
        char str = s[0];
	
	for (i = 0; str != '\0'; i++)
	{
		str = s[i];
	}
	return i - 1;
}
