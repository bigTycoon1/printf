#include "main.h"
/**
* print_unsig -This function that prints unsigned number
* @u: unsigned number
* Return: size the output
*/
int print_unsig(va_list u)
{
	unsigned int len, p, i, digit, n, num;
	int count = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
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
