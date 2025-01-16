#include <stdio.h>
#include <stdlib.h>

extern char **environ;


int main(int argc,char **argv, char **envp) {

    putenv("HELLO=World");
    setenv("HELLO", "World", 1);
    
    for(int i=0; environ[i] != NULL; i++){
        printf("%d: %s\n",i, environ[i]);
    }
    return 0;
}