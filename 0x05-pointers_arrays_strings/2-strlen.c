#include "main.h"

/**
 *  _strlen - find the length of a string
 *  @s: string pointer to the string length to be found
 *  Return: return the length of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increament until last char is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
