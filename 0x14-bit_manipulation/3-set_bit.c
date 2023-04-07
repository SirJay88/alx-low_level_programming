#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the unsigned long int to set the bit in
 * @index: the index of the bit to set, starting from 0 at the rightmost bit
 *
 * Return: 1 if the operation was successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n |= (1ul << index);

	return (1);
}
