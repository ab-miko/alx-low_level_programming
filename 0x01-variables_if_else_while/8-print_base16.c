#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7'
		, '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int n, length;

	length = sizeof(hexa) / sizeof(hexa[0]);
	n = 0;
	while (n < length)
	{
		putchar (hexa[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
