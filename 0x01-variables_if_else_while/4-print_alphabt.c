#include <stdio.h>

/**
 * main - prints alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: 0 if compiled well
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

