#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x;

	n = 0;
	x = 9;
	while (n < 10)
	{
		putchar (n + '0');
		if (n != x)
		{
			putchar (',');
			putchar (' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
