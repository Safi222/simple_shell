# include "myshell.h"
/**
* cmd_excuter - Execute cmd
* @command: command to be executed
* @argv: command line argument
*/
void cmd_excuter(char **command, char *argv)
{
char *cm;
pid_t pid = fork();
if (pid == -1)
{
perror(argv);
exit(EXIT_FAILURE);
}
if (pid == 0)
{
cm = command[0];

if (execve(cm, command, NULL) == -1)
{
perror(argv);
exit(EXIT_FAILURE);
}
}
else
wait(NULL);
}
