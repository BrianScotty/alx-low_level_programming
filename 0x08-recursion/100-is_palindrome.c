#include "main.h"

int check_palindrome(char *s, int x, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string
 * @x: iterator
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (check_palindrome(s, x + 1, length - 1));
}
