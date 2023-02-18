#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digits number of base 10
 * starting from 0, followed by a new line.
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
