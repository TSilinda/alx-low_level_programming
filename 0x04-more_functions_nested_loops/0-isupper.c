#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 0 OR 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
