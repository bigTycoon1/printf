#include "main.h"
/**
 * _putchar - This function print char to stdout
 * @s: char to be printed
 * Return: zero on success
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
/**
 * _strlen - This function return length of string
 * @s: pointer to string
 * Return: zero on success
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * _printf - This function print whatever input to stdout
 * @format: constant format
 * Return: zero on success
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	va_list arg;

	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(arg, int);

				_putchar(c);
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(arg, char*);

				fputs(s, stdout);
				printed_chars += _strlen(s);
			}
			else if (*format == '%')
			{
				_putchar('%');
				printed_chars++;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(arg);
	return (printed_chars);
}
