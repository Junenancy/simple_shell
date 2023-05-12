#include "shell.h"
/**
 *_puts - prints a string
 *@str: A pointer to an in
 *
 *Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
