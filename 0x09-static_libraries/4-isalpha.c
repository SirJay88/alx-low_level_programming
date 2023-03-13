#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabeticc character or 0 for anything else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'));

}
