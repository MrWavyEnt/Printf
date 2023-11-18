#include <stdarg.h>
#include <stdio.h>
/**
 * _printf_ - prints constant char
 * @format: integer as format
 * Return: conter
 */
int _printf_(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int conter = 0;

	for (int i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		case 'c':
		{
			char c = (char) va_arg(args, int);

			write(c);
			conter++;
			break;
		}
		case 's':
		{
			char *s = va_arg(args, char*);

			while (*s)
			{
				write(*s);
				s++;
				conter++;
			}
			break;
		}
			case '%':
		{
			write('%');
			conter++;
			break;
		}
			case 'd':
			case 'i':
		{
			int num = va_arg(args, int);
			char buffer[20];
			int len = sprintf(buffer, "%d", num);

			for (int j = 0; j < len; j++)
			{
				write(buffer[j]);
				conter++;
			}
			break;
		}
		break;
	}
	}
	else
	{
		write(format[i]);
		conter++;
	}
}

va_end(args);
return (conter);
}
