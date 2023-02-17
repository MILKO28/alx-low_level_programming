#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int alpha = 'a', Alpha = 'A';

while (alpha <= 'z')
{
putchar (alpha);
alpha++;
}
while (Alpha <= 'Z')
{
putchar (Alpha);
Alpha++;
}
putchar ('\n');
return (0);
}
