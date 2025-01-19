#include <string>
#include <iostream>

struct Person
{
    std::string name;
    int age;
};


int main() {
    Person person;
    person.name = "John";
    person.age = 30;
    std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    return 0;
}