#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; <= size; i++)
		{
			for (j = size -1; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
