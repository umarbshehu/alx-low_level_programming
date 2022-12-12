#include <stdio.h>
/**
 * main - Write a program that prints all digit numbers of base 10
 *
 * Return: Alway return 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
