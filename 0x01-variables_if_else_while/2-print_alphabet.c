#include <stdio.h>
/**
 * main - print letters in lowercase
 * Return: 0
 */
int main(void)
{
	char sc;

	for (sc = 'a'; sc <= 'z'; sc++)
	{
		putchar(sc);
	}
	putchar('\n');
	return (0);
}
