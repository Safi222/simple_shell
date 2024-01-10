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
char *input_cpy;
char *command[2];
size_t n;
ssize_t read_no;

int status = 0;
while (1)
{
prompt();
input = NULL;
n = 0;
read_no = mygetline(&input, &n);
if (read_no  == -1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "\n", 1);
free(input);
return (status);
}
input_cpy = NULL;
input_cpy = malloc(sizeof(char) * (read_no));
if (input_cpy == NULL)
perror(argv[0]);
string_copier(input, input_cpy);
command[0] = input_cpy;
command[1] = NULL;
if (ac == 2)
cmd_excuter(command, argv[0]);
free(input_cpy);
free(input);
}
}
