#include <stdio.h> 

int main() {
    FILE *fptr;
    fptr = fopen("file.txt", "r"); 
    FILE *writeToFile;
    writeToFile = fopen("newfile.txt", "w");

    if(writeToFile != NULL)
    {
        char line[100];
        while(fgets(line, 100, fptr) )
        {
            fprintf(writeToFile, "%s", line);
        }
        printf("File written successfully");
       
    }


    char myString[100];

    if(fptr != NULL)
    {
        while(fgets(myString, 100, fptr) )
        {
            printf("%s", myString);
        }
    }else{
        printf("Error!");
    }
    return 0; 
}
