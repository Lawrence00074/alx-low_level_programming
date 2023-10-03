#include "main.h"
/**
 * _strlen - get the length of string
 * @str: the string
 * Return: the length of the string
 */
int _strlen(char *str)
{
int to = 0;
if (str[to] == '\0')
return (0);
to++;
return (to + _strlen(str + to));
}
/**
 * append_text_to_file - append text to the end of a file
 * @filename: the file name
 * @text_content: the content of the text
 * Return: 1 (success), -1 (failed)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int ftd;
ssize_t wrt_file;
if (filename == NULL)
return (-1);
ftd = open(filename, O_WRONLY | O_APPEND);
if (ftd == -1)
return (-1);
if (text_content == NULL)
{
close(ftd);
return (1);
}
wrt_file = write(ftd, text_content, _strlen(text_content));
if (wrt_file == -1 || wrt_file != _strlen(text_content))
{
close(ftd);
return (-1);
}
close(ftd);
return (1);
}
