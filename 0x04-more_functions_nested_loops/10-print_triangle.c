#include "main.h"
/*
 * print_triangle - prints triangle of integer size using '#' sign
 * Return: 0
 */
void print_triangle(int size)
{
	int i;

	size = 0;

	i = 1;

	if (size = 0, size++)
	{
		_putchar('\n');
	}
	else
	{
		while (size <= 10)
		{
			while (i <= size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			size++;
		}
	}
}
