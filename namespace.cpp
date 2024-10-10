#include <iostream>

// Namespace = prrovides a solution for preventing name conflicts in large projects. Each entity need a unique name. A name space allowes for identically named entities as long as the namespaces are different.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;

    std::cout << x;

    return  0;
}