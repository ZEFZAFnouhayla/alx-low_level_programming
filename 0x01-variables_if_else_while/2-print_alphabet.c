#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
