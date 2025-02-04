#include <stdlib.h>
#include <string.h>
int main ()
{ char cmd[50];
    strcpy(cmd, "echo Hello World");
    system(cmd);
    return(0);
}