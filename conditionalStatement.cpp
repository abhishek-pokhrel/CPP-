#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    // Initialize random seed
    std::srand(std::time(0));  // Use current time as seed for random generator

    // Generate random number between 0 and 10
    int x = std::rand() % 11;  // % 11 gives range 0 to 10
    
    int y;
    std::cout << "Guess the number: "; 
    std::cin >> y;
    if(x == y){
        std::cout << "Your guess is correct!";
    } else{
        std::cout << "Your guess is incorrect! The number is: " << x;
    }
    
    return 0;
}