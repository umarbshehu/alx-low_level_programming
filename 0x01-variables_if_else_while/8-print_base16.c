#include <stdio.h>

/**
 * main - printing num bers in base 16
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int num;
	int lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}
