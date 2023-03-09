#include "main.h"


int prime_check(int n, int i);
/**
 * is_prime_number - executes prime_checker
 * @n: input to check
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_check(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_check - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */

int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_check(n, i - 1));
}
