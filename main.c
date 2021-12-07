#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: triggers the loop fucntion
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	loop();
	free(argv);
	return (EXIT_SUCCESS);
}