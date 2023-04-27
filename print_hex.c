#include "main.h"
/**
* print_hex - This function print hexadecimal
* @n: number to be printed
* @c: case of printing (0 = lower, 1 = upper)
* Return: size the output
*/
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, p, i, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		p = 1;
		for (i = 1; i <= len - 1; i++)
			p *= 16;
		for (i = 1; i <= len; i++)
		{
			digit = n / p;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * p;
			p /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* print_x - print lowercase hex
* @x: variable to print
* Return: size of the output
*/
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/**
* print_X - print uppercase hex
* @X: variable to print
* Return: size of the output
*/
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
