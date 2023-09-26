#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: if a set matched - a pointer to the matched bytes
 * if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}
		s++;
	}
	return ('\0');
}
