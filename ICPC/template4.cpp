#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string f{}, s{};
    std::cin >> f >> s;

    std::sort(f.begin(), f.end());
    std::sort(s.begin(), s.end());

    if (f == s) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    };

    return 0;
}