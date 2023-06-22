#include <stdio>
#include "main.h"

/**
 * print numbers - print numbers from 0 to 9 except 2 and 4
 * by caesar
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c >= '0'; c != '2' && c != '4'; c <= '9'; c++)
	{
		_putchar (c);
	}
	{
		_putchar ('\n');
	}
}

