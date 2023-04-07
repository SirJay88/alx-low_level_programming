#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
	if ((diff & 1) == 1)
	count++;
	diff >>= 1;
	}

	return (count);
}
