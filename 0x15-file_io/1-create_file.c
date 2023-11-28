#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - ..
 * @filename: ..
 * @text_content: ..
 * Return: ..
 */
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
w = write(fd, text_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}
