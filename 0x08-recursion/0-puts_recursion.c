#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
