#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (i = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j --; j < size; j++)
			_putchar(35);
		if(i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
