#include <iostream>

int main() {

    int start_num{5};

    for (int i{start_num}; i >= 0; i--) {
        std::cout << i << " ";
    }
    std::cout << "Go!\n\n";

    int user_num{};
    do {
        std::cout << "Enter a number greater than 100: ";
        std::cin >> user_num;
    } while (user_num <= 100);

    std::cout << "Thanks!\n";
    return 0;
}
