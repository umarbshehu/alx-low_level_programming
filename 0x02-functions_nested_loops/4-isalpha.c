#include "main.h"

/**
 *_isalpha - checks if a character is an alphabet
 * @c: the ASCII value of the character to be checked
 *Return: the program returns 0 if successful:wq!
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}


