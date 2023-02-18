#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all possible different combinations
 *Return: 0 always
 */
int main(void)
{
	int d;
	int c = 0;

	while (d = 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar('0');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}

