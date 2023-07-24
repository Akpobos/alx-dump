#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *c = "\\n";
	int i = 0;
	putchar('a');
	while (*(c + i))
	{
		putchar(*(c + i));
		i++;
	}
	exit(EXIT_SUCCESS);
}
