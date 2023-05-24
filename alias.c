#include "shell.h"

/**
 * _alias - function to set an alias
 * Return: 0
 */
int _alias(void)
{
	_puts("alias: usage: alias [-p] [name[=value] ...]\n");
	_puts("\tSet or view aliases.\n\tSet with name=value\n");
	_puts("\tView list of alias with no arguments or -p\n");
	return (0);
}
