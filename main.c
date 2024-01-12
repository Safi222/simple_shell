#include "myshell.h"
/**
 * main -shell entry point;
 * @ac: number of command line arguments
 * @argv: An array of command line argument
 * Return: zero on success,and in  faulure non-zero
 */
int main(int ac, char **argv)
{
char *input;
int  x;
char **cmd;
size_t n;
ssize_t read_no;
int status;
(void) ac;
status = 0;
cmd =   NULL;
while (1)
{
prompt();
input = NULL;
n = 0;
read_no = mygetline(&input, &n);
if (read_no  == -1)
{
free(input);
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "\n", 1);
return (status);
}
cmd = tokener(input);
if (cmd == NULL)
continue;
x = str_compare(cmd[0], "exit");
if (x == 0)
return (status);
status = cmd_excuter(cmd, argv[0]);
}
return (0);
}
