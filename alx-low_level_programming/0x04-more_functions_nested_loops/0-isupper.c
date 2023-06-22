/**
 * _isupper - Checks for uppercase letter
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
