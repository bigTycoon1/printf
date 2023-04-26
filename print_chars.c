#include "main.h"
/**
 * print_char - print characters to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char _char;

	_char = va_arg(c, int);
	_putchar(_char);
	return (1);
}
/**
 * print_percentage - %
 *
 * Return: 1.
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}

