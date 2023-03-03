#include "main.h"

/**
 * cap_string -changes all lowercase letters of a string to uppercase
 * @s: input
 * Return: destination
 */
char *leet(char *s)
{
int i;
for (i = 0; s[i] != 0; i++)
{
if (s[i] == 'a' || s[i] == 'A')
{
s[i] = '4';
}
else if (s[i] == 'e' || s[i] == 'E')
{
s[i] = '3';
}
else if (s[i] == 'o' || s[i] == 'O')
{
s[i] = '0';
}
else if  (s[i] == 't' || s[i] == 'T')
{
s[i] = '7';
}
else if (s[i] == 'l' || s[i] == 'L')
{
s[i] = '1';
}
}
return s;
}
