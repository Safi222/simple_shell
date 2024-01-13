# include "myshell.h"
/**
* cmd_excuter - Execute cmd
* @cmd: command to be executed
* @argv: command line argument
* Return: exist status
*/
int cmd_excuter(char **cmd, char *argv)
{

char *cm;
int i, status;
pid_t pid = fork();
if (pid == -1)
{
perror(argv);
exit(EXIT_FAILURE);
}
if (pid == 0)
{
cm = cmd[0];
if(cm == NULL)
{
for (i = 0; cmd[i]; i++)
free(cmd[i]);
free(cmd);
cmd = NULL;
perror(argv);
exit(EXIT_FAILURE);
}

if (execve(cm, cmd, environ) == -1)
{
for (i = 0; cmd[i]; i++)
free(cmd[i]);
free(cmd);
cmd = NULL;
perror(argv);
exit(EXIT_FAILURE);
}
}
else
{
waitpid(pid, &status, 0);
for (i = 0; cmd[i]; i++)
free(cmd[i]);
free(cmd);
cmd = NULL;
}
return (WEXITSTATUS(status));
}
