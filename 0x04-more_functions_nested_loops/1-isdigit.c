/**  _isdigit checks for a digit (0 through 9).
 * @c: character we are checking
 * Return: 0 OR 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
