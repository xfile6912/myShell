/* $begin shellmain */
#include "myshell.h"

int main()
{
    char cmdline[MAXLINE]; /* Command line */
    init_sig();
    while (1)
    {
        /* Read */
        //fflush(stdout);
        printf("myshell> ");
        fgets(cmdline, MAXLINE, stdin);

        /* Evaluate */
        eval(cmdline);
        print_reaped_child();
        fflush(stdout);
    }
}
/* $end shellmain */
