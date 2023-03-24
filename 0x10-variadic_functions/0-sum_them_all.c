#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: number of arguments
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int position;
	int sum;
	va_list all_parameters;

	sum = 0;

	va_start(all_parameters, n);
	if (n > 0)
		for (position = 0; position < n; position++)
			sum += va_arg(all_parameters, int);

	va_end(all_parameters);

	return (sum);
}
