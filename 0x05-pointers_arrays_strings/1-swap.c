#include "main.h"

/**
 * swap_int - swap values of two integer
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
