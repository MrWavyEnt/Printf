#include "main.h"
#include <stdlib.h>

/**
 * print_HEX_plus - function to convert to hexadecimal number
 * @value: number to convert
 * Return: return the number of characters printed
 */

int print_HEX_plus(unsigned int value)
{
	int conter = 0, iterator;

	if (value == 0)
	{
		write('0');
		return (1);
	}
	while (value > 0)
	{
		conter++
			value /= 16;
	}
	char *hex_string = malloc(conter + 1);

	if (hex_string == NULL)
		return (-1);

	hex_string[conter] = '\0';
	value = value;
	for (iterator = conter - 1; iterator >= 0; iterator--)
	{
	hex_string[iterator] = (value % 16 < 10) ? (value % 16 + '0') 
		: (value % 16 + 55);
			value /= 16;
	}

	for (iterator = 0; hex_string[iterator] != '\0'; iterator++)
		write(hex_string[iterator]);
	free(hex_string;
			return (count);
}

/**
 * print_hex_str - function to print non-printable characters
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int print_hex_str(va_list args)
{
int iterator, length = 0;
char *str;
int value;

str = va_arg(args, char *);

if (str == NULL)
str = "(null)";

for (iterator = 0; str[iterator] != '\0'; iterator++)
{
	if (str[iterator] < 32 || str[iterator] >= 127)
			{
				write('\\');
				write('x');
				length += 2;
				value = str[iterator];
				if (value < 16)
				{
					write('0');
					length++;
				}
				length += get_HEX_two(value);
			}
	els
	{
		write(str[iterator]);
		length++;
	}
}
return (length);
}
