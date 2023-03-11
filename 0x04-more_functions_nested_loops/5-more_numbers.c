#include "main.h"
/*
 * more_numbers - prints 10 times the numbers, 0 to 14, followed by a new line
 * Return:mnumber 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
	j++;
	}
	_putchar('\n');
}
