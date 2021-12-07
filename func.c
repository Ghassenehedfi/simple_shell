#include "main.h"

int store(char *line)
{
  char *filename = "history";
	size_t i = 0;
	ssize_t writecount;
	int fd;

	if (filename == NULL)
		return (-1);
	if (line == NULL)
		return (-1);
  fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	while (line[i] != 0)
		i++;
	writecount = write(fd, line, i);
	if (writecount == -1)
		return (-1);
	close(fd);
	return (1);
}
