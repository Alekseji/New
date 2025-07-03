

#include <iostream>
#include "Greeter.h"
int main()
{
    Greeter::Greeter input;
    std::string name;
    std::cout << "Enter name"<<std::endl;
    std::cin >> name;
    std::cout << "Hello, " <<input.greet(name)<<"!" << std::endl;

}

