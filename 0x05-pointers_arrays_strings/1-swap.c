#include "main.h"

/**
 * swap_int - a function that swaps the value of the two integers
 * @n: input 1
 * @b: inputs 2
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;

}
