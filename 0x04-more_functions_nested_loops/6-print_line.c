#include "main.h"
/**
 * print_line - draw a straight line according to parameter
 * @a: the number of lines to draw
 * Return: empty
 */
void print_line(int a)
{
	int x;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < a; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
