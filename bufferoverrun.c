#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10


char buffer[BUFFER_SIZE] = "message";
char password[BUFFER_SIZE] = "password";


int main (int argc , char **argv) {
    if(argc != 3) {
        printf("Usage: %s  <password>  <string_to_string>\n", argv[0]);        
        exit(1);
    }

    strcpy(buffer, argv[2]);
    if(strcmp(argv[1], password) == 0) {
        printf("password checks out\n");
        printf("MSG: %s\n", buffer);
    }else{
        printf("password does not match\n");
    }
}