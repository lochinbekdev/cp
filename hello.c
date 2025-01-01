#include <stdio.h>

int addition(int division, int diviser)
{
    return division / diviser;
}

struct car {
    char name[10];
    int year;
    int age;
};

int main() {
    struct car BWM = {"BMW",2024,5};
    int division = 10;
    int diviser = 2;
    int result = addition(division, diviser);
    printf("Name: %s\nYear: %d\nAge: %d\n", BWM.name, BWM.year, BWM.age);

    return 0;
}
