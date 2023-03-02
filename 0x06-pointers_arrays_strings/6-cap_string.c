#include "main.h"

/**
 * cap_string -changes all lowercase letters of a string to uppercase
 * @s: input
 * Return: destination
 */

char *cap_string(char *s)
{
int i, j;

for(i = 0; s[i] != '\0'; i++)
{
if(i == 0)
{
if((s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
continue;
}
if((s[i] >= '!' && s[i] <= '?') || (s[i] >= '{' && s[i] <= '}')
   || s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
{
j = ++i;
if(s[j] >= 'a' && s[j] <= 'z')
{
s[j] = s[j] - 32;
continue;
}
}
else
{
if(s[i] >= 'A' && s[i] <= 'Z')
s[i] = s[i]+32;
}
}
return (s);
}
