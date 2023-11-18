#include "main.h"
#include <stdlib.h>

/**
 * print_hex_4 - function to print an hexadecimal number
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int print_hex_4(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789abcdef";
	char *hex_string;
	int conter = 0, i;

	if (number == 0)
	{
		write('0');
		return (1);
	}

	while (number > 0)
	{
		conter++;
		number /= 16;
	}

	hex_string = malloc(conter + 1);

	if (hex_string == NULL)
		return (-1);

	hex_string[conter] = '\0';

	number = va_arg(args, unsigned int);

	for (i = conter - 1; i >= 0; i--)
	{
		hex_string[i] = hex_digits[number % 16];
		number /= 16;
	}

	for (i = 0; hex_string[i] != '\0'; i++)
		write(hex_string[i]);

	free(hex_string);
	return (count);
}
