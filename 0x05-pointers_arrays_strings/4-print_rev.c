#include "main.h"


/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int k, j, len;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	len = k;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
