#include <stdio.h>

/**
 * main - prints single numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: 0 if compiled well
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

