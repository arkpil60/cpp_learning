#include <iostream>
#include <algorithm>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long global_min = 2e18; 
    long long global_max = -2e18; 

    long long left, right;

    while (std::cin >> left >> right) {
        global_min = std::min(global_min, left);
        global_max = std::max(global_max, right);
    }

    std::cout << global_min << " " << global_max << "\n";

    return 0;
}
