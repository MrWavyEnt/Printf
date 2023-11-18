#include "main.h"
#include <stdarg.h>

/**
 * char_output - function to print a character
 * @args: variable arguments
 * Return: return the number of characters printed
 */
int char_output(va_list args)
{
	return (write(va_arg(args, int)));
}

