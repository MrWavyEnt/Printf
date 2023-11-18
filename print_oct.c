#include "main.h"
#include <stdlib.h>

/**
 * print_oct - function to print an octal number
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int print_oct(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char *octal_string;
	int conter = 0, iterator;

		if (number == 0)
		{
			write('0');
			return (1);
		}
		while (number > 0)
		{
			conter++;
			number /= 8;
		}

		octal_string = malloc(conter + 1);

		if (octal_string == NULL)
			return (-1);

		octal_string[conter] = '\0';
		number = va_arg(args, unsigned int);
		for (iterator = conter - 1; iterator >= 0; iterator--)
		{
			octal_string[iterator] = (number % 8) + '0';
				number /= 8;
		}

		for (iterator = 0; octal_string[iterator] != '\0'; iterator++)
			write(octal_string[iterator]);
				free(octal_string);
				return (conter);
}
