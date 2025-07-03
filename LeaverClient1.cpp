#include <iostream>
#include "Leaver.h"

int main()
{
    Leaver::Leaver input;
    std::string name;
    std::cout << "Enter name"<<std::endl;
    std::cin >> name;
    std::cout << "Goodbay, " << input.leave(name) << "!" << std::endl;

}

