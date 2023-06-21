#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char capital;

	for (capital = 'a'; capital <= 'z'; capital++)
	{
		_putchar(capital);
	}
	putchar('\n');
}
