#include "main.h"
/**
* print_octal - This funtion print octal
* @o: unsigned to be converted
* Return: size the output
*/
int print_octal(va_list o)
{
	unsigned int len, p, i, digit, n, num;
	int count = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		p = 1;
		for (i = 1; i <= len - 1; i++)
			p *= 8;
		for (i = 1; i <= len; i++)
		{
			digit = n / p;
			_putchar(digit + '0');
			count++;
			n -= digit * p;
			p /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
