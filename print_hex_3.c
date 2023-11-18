#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_HEX_3 - function to convert an unsigned long int to
 * hexadecimal number
 * @value: number to convert
 * Return: return the number of characters printed
 */
size_t print_HEX_3(unsigned long int value)
{
	char hex_digits[] = "0123456789ABCDEF";
	char hex_buffer[20];
	size_t conter = 0;

	if (value == 0)
	{
		write(1, "0", 1)
			return (1);
	}

	while (value != 0)
	{
		hex_buffer[conter] = hex_digits[value % 16];
		value /= 16;
		conter++;
	}

	for (size_t i = conter; i > 0; i--)
	{
		write(1, &(hex_buffer[i - 1]), 1);
	}

	return (conter);
}
/**
 * main - number of characters printed
 * Return: 0
 */
int main(void)
{
	unsigned long int value = 255;
	size_t characters_printed = print_HEX_3(value);

	printf("\nNumber of characters printed: %zu\n", characters_printed);

	return (0);
}
