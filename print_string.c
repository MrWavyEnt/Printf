#include "main.h"

int print_string(char *str)
{
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
		_putchar(str[i]);

	return (length);
}
