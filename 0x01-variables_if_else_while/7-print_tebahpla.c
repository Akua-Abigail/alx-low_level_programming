#include <stdio.h>
/**
 * main - print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ra;

	for (ra = 'z'; ra >= 'a'; ra--)
		putchar(ra);

	putchar('\n');

	return (0);
}
