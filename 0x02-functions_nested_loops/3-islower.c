#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to be checked 
 * Return: the program returns 0 on success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
