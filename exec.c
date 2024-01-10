# include "myshell.h"
/**
* cmd_excuter - Execute cmd
* @command: The command to be executed
* @argv: command line argument
*/
void cmd_excuter(char **command, char *argv)
{
pid_t pid = fork();
if (pid == -1)
{
perror(argv);
exit(EXIT_FAILURE);
}
if (pid == 0)
{

if (execve(command[0], command, NULL) == -1)
{
perror(argv);
exit(EXIT_FAILURE);
}
}
else
wait(NULL);
}
