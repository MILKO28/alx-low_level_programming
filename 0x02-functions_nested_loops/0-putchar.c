#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{

char printing[10]="_putchar";

for (int i=0; printing[i] != '\0'; i++)
{
putchar(printing[i]);
}

return (0);
}
