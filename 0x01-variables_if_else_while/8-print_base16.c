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
	int numb;
	char alphab;

	for (numb = '0'; numb <= '9'; numb++)
	putchar(numb);

	for (alphab = 'a'; alphab <= 'f'; alphab++)
	putchar(alphab);
	putchar('\n');

	return (0);
}
