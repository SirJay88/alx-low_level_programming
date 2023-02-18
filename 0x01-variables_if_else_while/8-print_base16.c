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
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d > 10) {
			putchar(d + '0');
			d++;
		}
	while
		(d < 10) {
			putchar(c);
			d++;
		}
	putchar('\n');
	return (0);
}
