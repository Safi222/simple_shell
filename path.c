#include "myshell.h"
/**
 * mypath - get  full path of a command
 * @cmd:  cmd to be get.
 * @arg0: argument 0 for error print
 * Return: pointer to the full path of string
 */
char *mypath(char *cmd, char *arg0)
{
char *_pathargv[1024];
char *_path = NULL, *copyofpath = NULL, *token = NULL;
struct stat buf;
int n, k, count = 0;
_path = getenv("PATH");
if (_path == NULL)
return (NULL);
count = strlen(_path);
copyofpath = malloc(count + 1);
if (copyofpath == NULL)
{
perror(arg0);
exit(EXIT_FAILURE);
}
_copier(_path, copyofpath);
token = strtok(copyofpath, ":");
k = 0;
while (token != NULL)
{
_pathargv[k] = malloc(strlen(token) + strlen(cmd) + 2);
if (_pathargv[k] == NULL)
{
perror(arg0);
exit(EXIT_FAILURE);
}
_copier(token, _pathargv[k]);
strcat(_pathargv[k], "/");
strcat(_pathargv[k], cmd);
if (stat(_pathargv[k], &buf) == 0)
{
free(copyofpath);
return (_pathargv[k]);
}
k++;
token = strtok(NULL, " :");
}
free(copyofpath);
for (n = 0; n < k; n++)
free(_pathargv[n]);
return (NULL);
}
