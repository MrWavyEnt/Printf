#include "main.h"

/**
 * print_hex_2 - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int print_hex_2(unsigned int num)
{
	int y;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (y = 0; y < counter; y++)
	{
		array[y] = tem % 16;
		tem /= 16;
	}
	for (y = counter - 1; y >= 0; y--)
	{
		if (array[y] > 9)
			array[y] = array[y] + 7;
		_putchar(array[y] + '0');
	}
	free(array);
	return (counter);
}
