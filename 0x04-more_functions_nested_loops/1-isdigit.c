#include "main.h"

/**
 * _isdigit - if numbers 0 - 9
 * @c: is the char to check
 * Return: 0 or 1
 *
 */

_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
