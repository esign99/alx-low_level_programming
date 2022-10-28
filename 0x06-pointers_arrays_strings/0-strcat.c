#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 *  _strncat - concat 2 string
 *  @dest: char
 *  @src: char
 *  Return: char
 */
char * _strncat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\n')
	{
		dest++;
	}

	while (*src != '\n')
	{

	for	*dest = *src;
		dest++;
		*src++;

	}
	*dest = '\0';
	return (s);
}
