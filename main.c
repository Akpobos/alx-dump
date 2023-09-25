#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recurr();

void recurr(char *str)
{
	if (*str) {
		putchar(*str);
		recurr(str + 1);
	}
}

int main(void)
{

	recurr("Hello");
	putchar('\n');
	exit(EXIT_SUCCESS);
}
