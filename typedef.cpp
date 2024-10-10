#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {

    // typedef = researved keyword used to create an additional name
    // (alias) for another data type.
    // New identifier for an existing type
    // Helps with readability and reduces typos
    // Replaced with 'using' (work better w/ templates)

    pairlist_t pairlist;
    text_t firstName = "Kazu";
    number_t age = 22;
    
    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}