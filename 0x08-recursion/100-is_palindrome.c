#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;
	int start = 0;

	while (s[length] != '\0')
		length++;
	return (palindrome_helper(s, start, length - 1));
}

/**
 * palindrome_helper - Helper function to recursively check for palindrome
 * @s: The string to check
 * @start: The starting index of the current substring
 * @end: The ending index of the current substring
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}

