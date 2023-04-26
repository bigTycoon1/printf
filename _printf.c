#include "main.h"
/**
 *_printf - This function that produces output according to a format
 *@format: character string
 *Return:the number of characters printed
 *(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
			format++;
		if (*format == 'c')
		{
			char c = (char)va_arg(arg, int);

			_putchar(c);
			count++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(arg, char*);

			while (*str)
			{
				_putchar(*str++);
				count++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
