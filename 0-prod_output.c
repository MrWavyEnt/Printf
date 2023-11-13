#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Custom printf function
 * @format: Format string.
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char(*format), ...)
{
	if (format == NULL)
	return (-1);

	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
	{
		printed_chars += putchar(*format);
	}
	else
	{
		format++;
		switch (*format)
	{
		case 'c':
			printed_chars += putchar(va_arg(args, int));
			break;
		case 's':
			printed_chars += puts(va_arg(args, char *));
			break;
		case '%':
			printed_chars += putchar('%');
			break;
		default:
			printed_chars += putchar('%') + putchar(*format);
			break;
	}
	}

	format++;
	}

	va_end(args);
	return (printed_chars);
}

/**
 * _puts - Custom function to print a string
 * @str: String to be printed.
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
	if (str == NULL)
	str = "(null)";

	int i = 0;

	while
		(str[i]);

	putchar(str[i++]);

	return (i);
}

/**
 * putchar - Custom putchar function
 * @c: Character to be printed.
 * Return: 1 (success).
 */
int putchar(int c)
{
	return (fputs(int, stdout));
}
