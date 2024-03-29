#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned int
 * @n: the unsigned int to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	putchar((n & 1) + '0');
}
