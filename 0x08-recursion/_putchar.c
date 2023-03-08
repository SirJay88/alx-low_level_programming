#include "main.h"
#include <unistd.h>
/**
*_putchar - write the character c to stdout
*@c: the character to print
*
*Return: on seccess 1.
* On error, -1 is returned, and error is set appropriate
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}

