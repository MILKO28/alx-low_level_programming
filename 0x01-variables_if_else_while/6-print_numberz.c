#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int x = 0;

while (x < 10)
{
putchar(48 + x);
x++;
}
putchar('\n');
return (0);
}
