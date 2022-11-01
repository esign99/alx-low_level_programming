#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int p = 0, r, b;

	for (r = 0; s[r] != '\n'; r++)

	{
		if (s[r] != 32)
		{
			for (b = 0; accept[b] != '\n'; b++)

			{
				if (s[r] == accept[b])
					p++;
			}
		}

		else
			return (p);
	}
	return (p);
}
