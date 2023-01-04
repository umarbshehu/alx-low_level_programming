#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Return the neutral square roo tof a number
 * @n: number to calculate the neutral square root
 *
 *Return: the neutral square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
