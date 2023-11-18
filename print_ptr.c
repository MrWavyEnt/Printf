#include "main.h"

/**
 * print_ptr - prints a hexadecimal number representing a pointer.
 * @val: arguments.
 * Return: conter.
 */
int print_ptr(va_list val)
{
	void *ptr = va_arg(val, void *)
		char *null_str = "(nil)";
	unsigned long int address = (unsigned long int)ptr;
	int conter = 0;

	if (ptr == NULL)
	{
		while (null_str[conter] != '\0')
		{
			write(null_str[conter]);
			conter++;
		}
		return (conter);
	}

	write('0');
	write('x');

	return (conter + 2 + print_HEX_3(address));
}
