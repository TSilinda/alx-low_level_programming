#include "main.h"
/*
 * print_line - draws a straight line in the terminal
 * Return: 0
 */
void print_line(int n)
{
	n = 0;
	while (n < 10)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
