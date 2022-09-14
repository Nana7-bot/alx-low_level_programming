# include <stdio.h>
# include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * Return: 0 if compiled well
*/

int print_alphabet(void) {
		char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		ch++;
	}

	_putchar('\n');

}
