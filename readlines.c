#include "main.h"

/**
 * read_line - reads the command entered
 * Return: the command readed
 */
char *read_line(void)
{
	{
		char *line = NULL;
		size_t len = 0;
		ssize_t read;

		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			free(line);
			perror("hsh");
			exit(EXIT_SUCCESS);
		}


		return (line);
	}
}

/**
 * split_line - splites the command into tokens
 * @line: the command entere dby the user
 * Return: tokens
 */

char **split_line(char *line)
{
	int bufsize = TOK_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("allocation error\n");
		free_array(tokens);
		free(line);
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}