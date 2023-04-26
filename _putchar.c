#include "main.h"
/**
 * _putchar - This function print char to stdout
 * @c: char to be printed
 * Return: zero on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
