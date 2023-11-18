#include "main.h"

/**
 * print_rev_str - print string in reverse
 * @args: variable argument
 * Return: return number of characters printed
 */

int print_rev_str(va_list args)
{
	char *str = va_arg(args, char *);
	int str_i, i = 0;
	int str_length = 0;
	
	if (str == NULL)
	{
		str = "(null)";
		str_length = string_length(str);
		for (str_i = str_length - 1; str_i >= 0; str_i--)
		{
			write(str[str_i]);
		}
		return str_length;
	}
	while (str[i] != '\0')
			{
				i++;
			}
	
	for (str_i = i - 1; str_i >= 0; str_i--)
	{
		write(str[str_i]);
	}
		return (i);
}
