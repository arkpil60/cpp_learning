#include <iostream>

int main() {

    int start_num{5};

    for (int i{start_num}; i >= 0; i--) {
        std::cout << i << " ";
    }
    std::cout << "Поехали!\n\n";

    int user_num{};
    do {
        std::cout << "Введите число больше 100: ";
        std::cin >> user_num;
    } while (user_num <= 100);

    std::cout << "Спасибо!\n";
    return 0;
}
