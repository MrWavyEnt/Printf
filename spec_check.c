#include "main.h"

/**
 * format_specifier_checker - function to check for unknown specifiers
 * @format: string to check
 * Return: return -1 if unknown specifier is found
 */

int format_specifier_checker(const char *format)
{
	int len = 0;

	if ((format[0] == '%' && format[1] != 'c') ||
	    (format[0] == '%' && format[1] != 's') ||
	    (format[0] == '%' && format[1] != '%') ||
	    (format[0] == '%' && format[1] != 'd') ||
	    (format[0] == '%' && format[1] != 'i') ||
	    (format[0] == '%' && format[1] != 'u') ||
	    (format[0] == '%' && format[1] != 'o') ||
	    (format[0] == '%' && format[1] != 'x') ||
	    (format[0] == '%' && format[1] != 'X') ||
	    (format[0] == '%' && format[1] != 'p') ||
	    (format[0] == '%' && format[1] != 'b') ||
	    (format[0] == '%' && format[1] != 'S'))
	{
		len += _putchar(format[1]);
	}
	return (len);
}
