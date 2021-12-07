*#include "main.h"
/**
 * loop - loop
 * Return: void
 */
void loop(void)
{
        char *line;
        char **args;
        int status;

if (isatty(STDIN_FILENO))
{
	do {
	write(1, "$ ", 2);
	line = lsh_read_line();
 	args = lsh_split_line(line);
	status = lsh_execute(args);

                free(line);
		free(args);
	} while (status);
	}
}
