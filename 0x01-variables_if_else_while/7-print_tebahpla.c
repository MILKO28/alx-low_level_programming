#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int alpha = 'z';

while (alpha >= 'a')
{
putchar (alpha);
alpha--;
}
putchar ('\n');
return (0);
}

