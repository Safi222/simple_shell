#include "myshell.h"

/**
 * myexit - make a process turminate
 * @cmd: empty args
 * Return: 0 to terminate process
 */
int myexit(char **cmd)
{
if (cmd[1])
return (atoi(cmd[1]));
return (0);
}
