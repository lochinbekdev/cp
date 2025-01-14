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

    //strcpy method copies the source string into the destination string
    char dest[50];
    char source[] = "Hello World";
    strcpy(dest, source);
    printf("Copied string: %s\n", dest);

    //strcat method appends the source string to the end of the destination string
    char source1[] = "Hello ";
    char source2[] = "World";
    strcat(source1, source2);
    printf("Concatenated string: %s\n", source1);

    //strchr method returns a pointer to the first occurrence of the specified character in the string
    char str3[] = "Hello World";
    char ch = 'l';
    char* ptr = strchr(str3, ch);
    printf("Position of the character: %s\n", ptr);

    //strrchr method returns a pointer to the last occurrence of the specified character in the string
    char str4[] = "Hello World";
    char ch1 = 'l';
    char* ptr1 = strrchr(str4, ch1);
    printf("Position of the character: %s\n", ptr1);

    //strstr method returns a pointer to the first occurrence of the specified substring in the string
    char str5[] = "Hello World";
    char sub[] = "World";
    char* ptr2 = strstr(str5, sub);
    printf("Position of the substring: %s\n", ptr2);

    //reverses the order of the characters in the string
    char str6[] = "Hello World";
    for(int i =strlen(str6); i >= 0;i--){
        printf("%c",str6[i]);
    }

    
    return 0;

}