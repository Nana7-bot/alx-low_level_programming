#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 if compiled well
 */
int main(void)
{
	int num;
	char letter;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

