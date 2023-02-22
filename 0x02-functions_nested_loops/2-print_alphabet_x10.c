#include "main.h"


/**
 *function code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
void print_alphabet(void)
{
        int i;
	i = 0;
        while  (i < 10)
	{
	int alpha = 'a';
        while (alpha <= 'z')
        {
                putchar (alpha);
                alpha++;
        }

        putchar ('\n');
	i++;
	}
}
