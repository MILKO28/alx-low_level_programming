#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes
 */

char* _strncat(char *dest, const char *src, int n)
{
    int sum_1 = 0, i;

    for (i = 0; dest[i] != '\0'; i++)
    {
        sum_1++;
    }
    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[sum_1 + i] = src[i];
    dest[sum_1 + i] = '\0';
   return (dest);
}
