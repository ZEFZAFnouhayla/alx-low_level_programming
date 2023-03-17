#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that print all possible different combinations
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c = b + 1; c <= '9'; c++)
	{
	if ((b != a) != c)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
}


