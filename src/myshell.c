/* $begin shellmain */
#include "myshell.h"

int main()
{
    char cmdline[MAXLINE]; /* Command line */
    init_sig();
    while (1)
    {
        /* Read */
        printf("myshell> ");
        fgets(cmdline, MAXLINE, stdin);

        /* Evaluate */
        eval(cmdline);
    }
}
/* $end shellmain */
