#include "main.h"

int a_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * int _printf - a function that produces output according to a format
 * @format: formatting string
 * Return: Always
 */
int a_printf(const char *format, ...)
{
	int charPrint = 0;

	va_list listArgs;

	if(format == NULL)
	{
		return (-1);
	}

	va_start(listArgs, format);

	while(*format)
	{
		if (*format != '%')
		{
			a_putchar((char)(*format));
			charPrint++;
		} else
		{
			format++;

			if (*format == '\0')
			{
				break;
			} else if (*format == '%')
			{
				a_putchar('%');
				charPrint++;
			} else if (*format == 'c')
			{
				int i = va_arg(listArgs, int);
				a_putchar(i);
				charPrint++;
			} else if (*format == 's')
			{
				char *string = va_arg(listArgs, char*);
				int stringLength = strlen(string);

				write(1, string, stringLength);
				charPrint += stringLength;
			}
		}
		format++;
	}
	
	va_end(listArgs);

	return (charPrint);
}
