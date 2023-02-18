#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	int c;
	while (c = 10)
		putchar(c + '0');

		c++;
	putchar('\n');
	return (0);
}
