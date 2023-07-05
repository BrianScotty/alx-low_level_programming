#include "main.h"

int actual_prime_number(int n, int x);

/**
 * is_prime_number - determines if a number is a prime number or not
 * @n: input number
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - recurses calculations for prime numbers
 * @n: input number
 * @x: iterator
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime_number(n, x - 1));
}
