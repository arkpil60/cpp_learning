#include <iostream>

int greetings();
int info();
int stars();
int smth();


int main() {

    greetings();
    std::cout << std::endl;
    info();
    std::cout << std::endl;
    stars();
    std::cout << std::endl;
    smth();

    return 0;
}

int greetings() {

    std::cout << "Hello, World!" << std::endl;

    return 0;
}

int info() {

    std::cout << "My name is Stepan and my nickname is Arkpil. Nice to meet you!" << std::endl;
    std::cout << "My stack is Python & Go, but I learn C++ now." << std::endl;
    std::cout << "My goal is understanding C++ better when now." << std::endl;

    return 0;
}

int stars() {

    std::cout << "***************" << std::endl;
    std::cout << "* Hello, C++! *" << std::endl;
    std::cout << "***************" << std::endl;

    return 0;
}

int smth() {

    std::cout << "One" << std::endl << "Two" << std::endl << "Three" << std::endl;

    return 0;
}