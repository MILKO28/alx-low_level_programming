#include "main.h"

/**
 * cap_string -changes all lowercase letters of a string to uppercase
 * @s: input
 * Return: destination
 */
char *leet(char *s)
{
char *r = s;
char a[] = { 'a', 'e', 'o', 't', 'l' };
char n[] = { 4, 3, 0, 7, 1 };
int i = 0;

for (; *s; s++)
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] - 32)
*s = n[i] + '0';
}
}
return (r);
}
