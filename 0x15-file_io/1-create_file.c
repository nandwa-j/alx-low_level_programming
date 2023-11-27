#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: contents written in the file
 * Return: 1 if successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fd, rwr;
if (!filename)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (!text_content)
{
text_content = "";
}
rwr = write(fd, text_content, text_content ? strlen(text_content) : 0);
close(fd);
return (rwr == -1 ? -1 : 1);
}
