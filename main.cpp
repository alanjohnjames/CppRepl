#include <iostream>
#include "person.hpp"

int main() {
    person p{52, "Alan"};

    std::cout << "Person: " << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age:  " << p.age << std::endl;
}