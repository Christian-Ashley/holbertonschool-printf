#include "main.h"
/**
 * c_print - prints a single character
 * @list: va_list containinf the char to print as te next element
 *
 * Return: number of bytes printed
 */

int c_print(va_list list)
{
	char C = va_arg(list, int);
	int count = 0, retval;

	retval = _putchar(C);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}
