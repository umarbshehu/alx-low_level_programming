#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int sp, ro, rt;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
			for (rt = 0; rt <= ro; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
