#include "main.h"
/**
* print_dec - This function print decimal
* @d: integer to print
* Return: size the output text
*/
int print_dec(va_list d)
{
	int len, p, i, digit, n, count = 0, num;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		p = 1;
		for (i = 1; i <= len - 1; i++)
			p *= 10;
		for (i = 1; i <= len; i++)
		{
			digit = n / p;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * p;
			p /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
