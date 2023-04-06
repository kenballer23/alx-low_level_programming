#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	/* Base cases */
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - Helper function to recursively calculate the square root
 * @n: The number for which to calculate the square root
 * @start: The starting point of the binary search
 * @end: The ending point of the binary search
 *
 * Return: The natural square root of n within the specified range, or -1 if
 * n does not have a natural square root within the range.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	/* Base case */
	if (start > end)
		return (-1);

	if (mid * mid == n)
		return (mid);
	else if (mid * mid < n)
		return (sqrt_helper(n, mid + 1, end));
	else
		return (sqrt_helper(n, start, mid - 1));
}

