#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that print the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
	putchar(low);
	}
	putchar('\n');
	return (0);
}
