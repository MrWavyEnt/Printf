#include "main.h"

/**
 * _printf - function that printsf
 *
 * @format: format.
 *
 * Return: Prints characters.
 */

int _printf(const char *format, ...)
{
	int i;
	int val = 0;
	va_list list;


	if (format == NULL)
		return (1);

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			val += _putchar(format[i]);
		else
		{
			i++;
			val += format_declarator(format[i], list);
		}
	}

	va_end(list);

	return (val);
}
