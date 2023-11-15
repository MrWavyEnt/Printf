#include "main.h"

/**
* format_declarator - function that chooses the argument to print
* based on the format declarator.
*
* @format_dec: character after special character '%'.
* @list: argument pointer
*
* Return: number of characters printed in code.
*/

int constant_declarator(char format_dec, va_list list)
{
	int val = 0;
	switch (format_dec)
{
	case 'c':
		val += char_output(va_arg(list, int));
		break;
	case 's':
		val += str_output(va_arg(list, char*));
		break;
	case '%':
		val += _putchar('%');
		break;
	case 'd': case 'i':
		val += print_int((va_arg(list, int)));
		break;
	case 'x':
		val += print_hex(va_arg(list, unsigned int), 0);
		break;
	case 'X':
		val += print_hex_2(va_arg(list, unsigned int), 1);
		break;
	case 'u':
		val += print_hex_1(va_arg(list, unsigned int));
		break;
	case 'o':
		val += print_oct(va_arg(list, unsigned int));
		break;
	case 'b':
		val += print_bin(va_arg(list, unsigned int));
		break;
	default:
		val += _putchar('%');
		val += _putchar(constant_dec);
		break;
}
	return (val);
}
