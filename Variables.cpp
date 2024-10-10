#include <iostream>

int main(){

    // int x; declaration
    // x = 10; assignment

    // int y = 8; combined steps of declaration and assignment

    // Integer
    int x = 5;
    int y = 10;

    //Double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // Single Character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // Boolean (True or False)
    bool isStudent = true;
    bool power = false;
    bool forSale = true;

    // String (Objects that represents a sequence of text)
    std::string name = "Kazu";

    
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    std::cout << name << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You got " << grade << " in Physics\n";

    return 0;
}