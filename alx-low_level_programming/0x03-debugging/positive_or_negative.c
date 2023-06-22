#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Check if a number is positive, negative or zero
 * Return: zero
 */
void positive_or_negative(int i)
{

	printf("%d is ", i);
	if (i > 0)
		printf("positive");
	else if (i < 0)
		printf("negative");
	else
		printf("zero");
	printf("\n");
}
