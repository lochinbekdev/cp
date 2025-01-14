#include <stdio.h>
#include <string.h>

int main() {
    //strlen method returns the length of the string
    char str[100] = "Hello World";
    int length = strlen(str);
    printf("Length of the string: %d\n", length );

    //strcmp method returns 0 if the strings are equal
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = strcmp(str1, str2);
    printf("Result: %d\n", result);

    

    return 0;

}