#include "shell.h"
/**
 * free_dp - free all file
 * @line: double pointer to free
 *
 * Return: ptr null
 */

char **free_dp(char **line)
{
	int i;

	for (i = 0; line[i]; i++)
	{
		free(line[i]);
		line[i] = NULL;
	}
	free(line);
	line = NULL;
	return (NULL);
}
