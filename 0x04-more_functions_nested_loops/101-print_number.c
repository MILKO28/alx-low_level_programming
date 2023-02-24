#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: is input
 * Return:integer that is input
 */
void print_number(int n)
{
        if (n < 10 && n > 0)
        {
                putchar(n);
        }
        else if (n == 0)
        {
            putchar('0');
        }
        else if (n >= 10 && n < 100)
        {

            putchar(n/10 + '0');
            putchar(n%10 + '0');

        }
        else if (n >= 100 && n < 1000)
        {
                putchar(n / 100 + '0');
                n= n%100;

        putchar(n / 10 + '0');
        putchar(n + '0');
        }
        else if (n >=100 && n < 10000)
        {
            putchar(n / 1000 + '0');
                n= n%1000;

        putchar(n / 100 + '0');
        n= n%100;
         putchar(n / 10 + '0');
         n=n%10;
        putchar(n + '0');
        }
        else if (n <= -10 && n > -100)
            {
            putchar('-');
            putchar( - n / 10 + '0');
            n=n%10;
            putchar(-n + '0');
            }
	else if (n >= 10 && n < 100)
	{
		_putchar(n % 10 + '0');
         	_putchar(n + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n % 100 + '0');
		_putchar(n % 10 + '0');
		_putchar(n + '0');
	}
}
