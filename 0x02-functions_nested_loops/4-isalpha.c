#include "holberton.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c)
{
	if (c => 97 && c <= 122)
		return (1);
	if (c => 65 && c <= 90)
		return (1);
	return (0);
}
