#include "main.h"

/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	int p[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}

	return (0);
}
