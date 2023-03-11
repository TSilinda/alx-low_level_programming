/*
 * print_numbers - prints numbers 0 to 9, follwed by a new line
 * Return:0
 */
void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '10');
	}
	_putchar('\n');
}
