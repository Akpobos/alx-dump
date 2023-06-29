#include <stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char *p = s1;

	while (*p)
	{
		putchar(*p);
		putchar('\n');
		p++;
	}
}
