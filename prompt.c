#include "myshell.h"
/**
 * prompt - display  prompt to the user
 * It does not have return value.
 */
void prompt(void)
{
if (isatty(STDIN_FILENO) == 1)
{
write(STDOUT_FILENO, "$ ", 2);
fflush(stdout);
}
}


