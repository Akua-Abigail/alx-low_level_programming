#include "main.h"
/**
 * print_triangle - prints a triangle of squares according parameters
 * @a: the size of the square triangle
 * Return: 0
 */
void print_triangle(int a)
{
	int x, y, z;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < a; x++)
	{
	for (y = a - x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
