#include "main.h"
/**
 * _strlen - This function return length of string
 * @s: the char to be tested
 *
 * Return: The string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
