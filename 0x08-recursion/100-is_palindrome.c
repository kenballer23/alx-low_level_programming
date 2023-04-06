#include "main.h"
/**
 * is_palindrome - Check if a string is a palindrome recursively.
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	/* Find the length of the string */
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

/**
 * is_palindrome_helper - Recursive helper function to check
 * if a substring is a palindrome.
 * @s: Pointer to the input string.
 * @start: Starting index of the substring.
 * @end: Ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
	{
		if (start >= end)
		{
			return (1);
		}
		if (s[start] != s[end])
		{
			return (0);
		}
		return (is_palindrome_helper(s, start + 1, end - 1));
	}


	return (is_palindrome_helper(s, 0, len - 1));
}

