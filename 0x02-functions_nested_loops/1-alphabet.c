#include <stdio.h>


/**
 *function code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}

	putchar ('\n');
}
