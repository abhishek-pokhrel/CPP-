#include <iostream>

int main() {
    // The cost keyword specifies that a variable's value is constant
    // Basically it creates a constant 
    // Tells the compiler to prevent anything from modifying it
    // (read-only entity)
    // Naming convention for constants is that they're all caps

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    return 0;
}

