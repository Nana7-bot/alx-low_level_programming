#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

