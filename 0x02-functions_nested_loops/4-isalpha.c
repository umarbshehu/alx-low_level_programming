#include "main.h"

/**
 *_isalpha - checks if a character is an alphabet
 * @c: the ASCII value of the character to be checked 
 *Return: the program returns 0 if successful 
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90) || (c >= 97 && c<= 122)
		return (1);
	else
		return (0);
}


