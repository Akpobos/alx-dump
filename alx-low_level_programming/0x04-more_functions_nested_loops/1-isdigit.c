/**
 * _isdigit - Checks if a c is digit (0 - 9)
 * @c: Character to check
 *
 * Return: 1 if true, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
