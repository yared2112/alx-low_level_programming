#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to the name of the file
* @letters: number of letters it should read and print
*Return: n of bytes it can read and print or NULL on failure
*
*if the file can not be opened or read, return 0
*if filename is NULL return 0
*if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, len;
char *buffer;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
return (0);

len = read(fd, buffer, letters);
if (write(STDOUT_FILENO, buffer, len) != len)
return (0);

close(fd);
free(buffer);

return (len);
}
