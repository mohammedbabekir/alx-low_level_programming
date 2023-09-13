#include "main.h"

/**
 * _isalpha - cheked the character is a letter
 * both lower case or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
