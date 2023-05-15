#include "shell.h"
/**
 * _strtok - function for string tokenization
 * @line_messages: parameter
 * Return: array
 */
char **_strtok(char *line_messages)
{
	char *delimiters = " ,!¡¿?'\"\n\t";
	char *h = NULL, **array = NULL;
	int i = 0;

	if (line_messages == NULL)
	{
		return (NULL);
	}
	array = malloc(_strlen(line_messages) + 1024);
	h = strtok(line_messages, delimiters);
	array[i] = h;

	while (h)
	{
		i++;
		h = strtok(NULL, delimiters);
		array[i] = h;
	}
	i++;
	array[i] = NULL;
	return (array);
}
