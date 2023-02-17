#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int y, z;
for (y = '0'; y < '9'; y++)
{
for (z = y + 1; z <= '9'; z++)
{
if (y != z)
{

putchar(y);
putchar(z);
if (y == '8' && z == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


