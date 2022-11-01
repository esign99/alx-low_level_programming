#include "main.h"
/**
 * _strchr - locate a character in a string
 *
 * @c: the occurence character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurence character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else

			return (s);
	}
	if (c == '\n')
		return (s);

	return (NULL);
}
