#include "main.h"
/**
 * str_output - print a string
 * @val : argument
 * Return: Total length of the string.
 */

int str_output(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str  = "(null)";
		length = _strlen(str);
		for (y = 0; y < length; y++)
			_Putchar(str[y]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (y = o; y < length; y++)
			_putchar(str[y]);
		return (length);
	}
}
