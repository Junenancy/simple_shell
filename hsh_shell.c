#include "shell.h"
/**
 * main - entry point
 * @argc: arguments
 * @av: arguments
 * @env: area
 * Return: nothing
 */
int main(int argc __attribute__((unused)), char **av, char **env)
{
	char *string = NULL, **line = NULL;
	int n_prompt = 0, val_isatty = 0;

	while (1)
	{
		val_isatty = isatty(STDIN_FILENO);
		string = get_line(val_isatty);

	if (_strcmp(string, "exit\n") == 0)
	{
		free(string);
		exit(0);
	}

		if (string != NULL)
		{
			n_prompt++;
			line = _strtok(string);
			_execev(line, av[0], n_prompt, val_isatty, env);
			free(string);
			free(line);
		}
		val_isatty = 0;
	}
	return (0);
}
