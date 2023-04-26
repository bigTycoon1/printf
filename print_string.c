#include "main.h"
/**
 * print_string - print string to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
	char *_string;
	int  i = 0;

	_string = va_arg(s, char *);

	if (_string == NULL)
		_string = "(null)";
	while (_string[i])
	{
		_putchar(_string[i]);
		i++;
	}
	return (i);
}
