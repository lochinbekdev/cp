#include <stdio.h>


void calculateArray(int array[10])
{
    int sum=0;
    for(int i=0;i<10;i++)
    {   
        sum+=array[i];
    }

    printf("Sum: %d",sum);
}
int main() {
    int myNumbers[10]={1,2,3,4,5,6,7,8,9,10};
    calculateArray(myNumbers);
    return 0;
}
