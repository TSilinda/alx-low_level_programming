#include "main.h"
/*
 * print_most_numbers - prints the numbers, 0 to 9, followed by a new line.
 * Return: numbers 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	if ((i == 2) | (i == 4))
	{
		return;
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
