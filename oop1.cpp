#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    //a class to assign a and n to age and name
    Person(std::string n, int a) : name(n), age(a) {}

    // get name
    std::string GetName() {
        return name;
    }

    // get age
    int GetAge() {
        return age;
    }
};

int main() {

    Person p("Ali", 25);

    // recieve ali , 25 as the name and age
    std::string n = p.GetName();
    int a = p.GetAge();

    // show results
    std::cout << "Name: " << n << std::endl;
    std::cout << "Age: " << a << std::endl;

    return 0;
}
