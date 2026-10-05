#include <iostream>
#include <set>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::set<int> s;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        s.insert(temp);
    }

    if (s.size() == n) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }

    return 0;
}
