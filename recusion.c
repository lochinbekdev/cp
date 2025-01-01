#include <stdio.h>

int sum(int k); //Functiob declaration

int main() {
    int k = 10;
    int result = sum(k);
    printf("Sum: %d",result);
}


// Function definition
int sum(int k)
{
    if(k > 0)
    {
        return k + sum(k - 1);
    }else{
    return 0;
    }
}