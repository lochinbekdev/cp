#include <stdio.h>
#include <string.h>


int calculateCountofData(char str[], char data){
    int count=0;
    for(int i=0; i <= strlen(str); i++){
        if(str[i]==data){
            count++;
        }
    }
    return count;
}

int calculateCountofLetters(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            count++;
        }
    }
    return count;
}

int calculateCountofSymbols(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9')){
            count++;
        }
    }
    return count;
}


int main() {
    // Task 1 => Founf str length
    char str1[] = "Hello";
    int result_str1 = strlen(str1);
    printf("Length of str1: %d\n", result_str1);

    // Task 2 => Reverse strings
    char str2[] = "Hello";
    for(int i=strlen(str2); i>=0; i--){
        printf("%c", str2[i]);
    }

    // Task 3 => Count of data
    char str3[] = "Hello";
    char data = 'l';
    int result_str3 = calculateCountofData(str3, data);
    printf("Count of data: %d\n", result_str3);


    // Task 4 => Count of letters
    char str4[] = "Hello World";
    int result_str4 = calculateCountofLetters(str4);
    printf("Count of letters: %d\n", result_str4);


    // Task 5 => Count of symbols
    char str5[] = "Hello World@";
    int result_str5 = calculateCountofSymbols(str5);
    printf("Count of symbols: %d\n", result_str5);

    return 0;

}