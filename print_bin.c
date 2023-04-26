#include "main.h"
/**
* print_bin - print binary
* @b: number in decimal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	unsigned int len, p, i, digit, n, num;
	int count = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		p = 1;
		for (i = 1; i <= len - 1; i++)
			p *= 2;
		for (i = 1; i <= len; i++)
		{
			digit = n / p;
			_putchar(digit + '0');
			count++;
			n -= digit * p;
			p /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);

}
