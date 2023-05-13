#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	{
		length++;
	}
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
	{
		return (NULL);
	}
	for (length++; length--;)
	{
		ret[length] = *--str;
	}
	return (ret);
}

/**
 * _puts - prints an input string
 * @str: the string to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
