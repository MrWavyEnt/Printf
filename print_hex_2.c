#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_HEX_2 - function to get a hexadecimal number
 * @args: variable arguments
 * Return: return the number of characters printed
 */
int print_HEX_2(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);

	if (number == 0)
	{
		write('0');
		return (1);
	}

	int conter = 0;
		unsigned int temp = number;

		while (temp != 0)
		{
			conter++;
			temp /= 16;
		}
		char *hex_buffer = malloc(conter);

		if (hex_buffer == NULL)
			return (-1);
		for (int i = conter - 1; i >= 0; i--)
		{
			int remainder = number % 16;

			hex_buffer[i] = (remainder < 10) ? remainder + '0' : remainder + '7';
			number /= 16;
		}
		for (int i = 0; i < count; i++)
		{
			write(hex_buffer[i]);
		}

		free(hex_buffer);
		return (count);
}
