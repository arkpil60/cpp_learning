#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> a = {1, 3, 5, 7, 9, 11, 13}; 

    if (std::binary_search(a.begin(), a.end(), 7)) {
        std::cout << "Found!\n";
    } else {
        std::cout << "Not found\n";
    }

    return 0;
}
