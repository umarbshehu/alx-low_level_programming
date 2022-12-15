include "main.h"

/**
 * -isuper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise 
 */

int _isuper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
