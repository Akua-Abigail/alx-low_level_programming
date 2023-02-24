#include "main.h"
/**
 * print_square - prints a square follwed by a new line
 * @a: number of squares
 * Return: empty
 */
void print_square(int a)
{
	int x, y;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < a; x++)
	{
	for (y = 0; y < a; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
