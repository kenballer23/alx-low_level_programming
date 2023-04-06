#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whos square root we looking for
 * Return: the natural square root of a number.
 * Else the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - Helper function to calculate
 * the natural square root of a number recursively.
 * @n: The number to calculate the square root of.
 * @low: The lower bound for the search range.
 * @high: The upper bound for the search range.
 *
 * Return: The natural square root of n.
 * If n does not have a natural square root, return -1.
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid;

	if (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			return (_sqrt_recursion_helper(n, mid + 1, high));
		else
			return (_sqrt_recursion_helper(n, low, mid - 1));
	}
	else
	{
		return (-1);
	}
}
