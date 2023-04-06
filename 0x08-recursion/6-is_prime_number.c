#include "main.h"
/**
 * is_prime_number - checks if an input integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (is_prime_number_helper(n, 5));
}

/**
 * is_prime_number_helper - helper function for is_prime_number
 * @n: integer to be checked
 * @divisor: divisor to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (is_prime_number_helper(n, divisor + 2));
}

