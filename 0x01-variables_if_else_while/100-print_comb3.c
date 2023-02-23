#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all possible different combinations
 *Return: 0 always
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		putchar(i % 10 + '0');
		putchar(j % 10 + '0');
		}
		if (i != 8)
			{
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
