#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 if compiled well
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

