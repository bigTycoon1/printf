#include "main.h"
/**
 *get_func - This function get format for _printf to
 *call other functions
 *@format: character string
 *Return:NULL or the function called
 */
int (*get_func(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f get_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (get_f[i].sc)
	{
		if (get_f[i].sc[0] == (*format))
			return (get_f[i].f);
		i++;
	}
	return (NULL);
}
/**
 *_printf - This function that produces output according to a format
 *@format: character string
 *Return:the number of characters printed
 *(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, cp = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cp++;
			i++;
		}
		if (format[i] == '\0')
			return (cp);
		f = get_func(&format[i + 1]);
		if (f != NULL)
		{
			cp += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		cp++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (cp);
}
