#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: format.
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				count += putchar(va_arg(args, int));
				break;
				case 's':
				count += printf("%s", va_arg(args, char *));
				break;
				case '%':
				count += putchar('%');
				break;
				default:
				return (-1);
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
