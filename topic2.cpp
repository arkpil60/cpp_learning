#include <iostream>

int divide();
int letters();
int typesizes();

int main() {

    std::cout << "Second topic program...\n\n";

    divide();
    std::cout << std::endl;
    letters();
    std::cout << std::endl;
    typesizes();

    return 0;
}

int divide() {

    std::cout << "First task program...\n";

    int fnum{};
    int snum{};

    std::cout << "Enter your numerator: ";
    std::cin >> fnum;

    std::cout << "Enter your denominator: ";
    std::cin >> snum;

    if (snum == 0) {
        std::cerr << "Error: Denominator cannot be zero!" << std::endl;
        return 1;
    }

    double result = static_cast<double>(fnum) / static_cast<double>(snum);
    std::cout << "Your result: " << result << std::endl;

    return 0;
}

int letters() {

    std::cout << "Second task program..." << std::endl;

    char letter{};

    std::cout << "Enter your char: ";
    std::cin >> letter;

    std::cout << letter << std::endl;

    int numlet = static_cast<int>(letter);
    std::cout << numlet << std::endl;

    return 0;
}

int typesizes() {

    std::cout << "Third task program..." << std::endl;

    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(bool) << std::endl;

    return 0;
}