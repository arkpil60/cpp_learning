#include <iostream>
#include <map>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n{};
    std::cin >> n;

    std::map<int, int> counter;
    for (int i = 0; i < n; i++) {
        int temp{};
        std::cin >> temp;
        counter[temp]++;
    };

    int max_votes = 0;

    for (auto const& element : counter) {
        if (element.second > max_votes) {
            max_votes = element.second;
        }
    }

    std::cout << max_votes << "\n";

    return 0;
}