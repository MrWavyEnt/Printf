#include "main.h"
/**
 * print_oct - coverts to octal
 * @val: variable parameter
 * Return: counter
 */

int print_oct(va_list val)
{
	int y, counter = 0;
	int *array;
	/**
	 * vaarg -> va_arg
	 */
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = temp;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	/**
	 * sizeod() -> sizeof()
	 */
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (NULL);
	for (y = 0; y < counter; y++)
	{
		array[y] = temp % 8;
		temp = temp / 8;
	}
	/**
	 * i-- -> y--
	 */
	for (y = counter - 1; y >= 0; y--)
		_putchar(array[y] + '0');
	free(array);
	return (counter);

}
