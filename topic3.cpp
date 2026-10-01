#include <iostream>

double calc(double x, double y, char s);

void validate_number(int number);

int main() {

    double num1{10.5};
    double num2{2.0};
    
    std::cout << "10.5 + 2.0 = " << calc(num1, num2, '+') << std::endl;
    std::cout << "10.5 / 0.0 = " << calc(num1, 0.0, '/') << std::endl;

    std::cout << "Testing 24: "; validate_number(24);
    std::cout << "Testing 7:  "; validate_number(7);
    std::cout << "Testing 25: "; validate_number(25);

    return 0;
}

double calc(double x, double y, char s) {
    switch (s) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/':
            if (y == 0) {
                std::cerr << "Error: Division by zero! " << std::endl;
                return 0;
            }
            return x / y;
        default:
            std::cerr << "Error: Invalid operation sign!" << std::endl;
            return 0;
    }
}

void validate_number(int number) {

    if (number > 10 && number < 100 && number % 2 == 0) {
        std::cout << "The number fits!" << std::endl;
    } else {
        std::cout << "The number does not fit!" << std::endl;
    }
}
