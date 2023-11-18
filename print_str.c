#include "main.h"
#include <string.h>

/**
 * print_str - function to print a string
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int print_str(va_list args)
{
	int string_iterator;
	char *str;
	int str_length;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
			str_length = string_length(str);
	for (string_iterator = 0; string_iterator < str_length;
	string_iterator++)
	{
	write(str[string_iterator]);
	}

	return (str_length);
}
	else
{
	str_length = string_length(str);

	for (string_iterator = 0; string_iterator < str_length;
		string_iterator++)
	{
	write(str[string_iterator]);
}
	return (str_length);
}
}
