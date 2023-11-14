#include "main.h"
/**
 * str_output - print a string
 * @val : argument
 * Return: Total length of the string.
 */

int str_output(va_list val)
{
	char *str;
/**
 * int i -> int y
 */
	int y;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str  = "(null)";
		length = _strlen(str);
		for (y = 0; y < length; y++)
			/**
			 * _Putchar -> _putchar
			 */
			_putchar(str[y]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		/**
		 * y = o -> y = 0
		 */
		for (y = 0; y < length; y++)
			_putchar(str[y]);
		return (length);
	}
}
