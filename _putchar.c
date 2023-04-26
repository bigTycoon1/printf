#include "main.h"
/**
 * _putchar - This function print char to stdout
 * @c: char to be printed
 * Return: zero on success
 */
int _putchar(int c)
{
	if (write (1, &c, 1) != 1)
		return (-1);
	return (1);
}
