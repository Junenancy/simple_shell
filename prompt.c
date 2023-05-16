#include "shell.h"
/**
 * prompt_shell - function that prints the prompt
 *
 * @void: empty
 */
void prompt_shell(void)
{
	write(STDOUT, "\033[1;31msimple_shell/user@root$ ", 36);
	write(STDOUT, "\033[0m", 4);
}
