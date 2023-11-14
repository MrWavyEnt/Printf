#include "main.h"
/**
 * print_spec_str - prints exclusive string
 * @val: parameter.
 * Return: integer.
 */

int print_spec_str(va_list val)
{
	char *s;
	int y, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		S = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[y] != '0'; y++)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[y]
			if (value < 16)
			{
				_Putcha('0');
				len++;
			}
			len len + print_hex_2(value);
		}

	}
}

