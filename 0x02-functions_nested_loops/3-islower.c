#include "main.h"

/**
 * _islower - checks for lowercase characters
 *@c: single letter input
 * Return: the program returns 0 on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
