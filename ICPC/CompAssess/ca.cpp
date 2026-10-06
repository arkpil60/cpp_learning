#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

void task1_map();
void task2_string();
void task3_search();

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    task2_string(); 

    task3_search(); 
    
    task1_map();    

    return 0;
}

void task1_map() {

    int temp;

    std::map<long long, long long> counter;
    while(std::cin >> temp) {
        counter[temp]++; }

    std::cout << counter[7] << "\n";

};

void task2_string() {

    std::string x{};
    std::cin >> x;

    std::sort (x.begin(), x.end());
    std::cout << x << "\n";

};

void task3_search() {

    long long x{};
    std::cin >> x;

    std::vector<long long> a(x);
    for (long long i = 0; i < x; i++) {
        std::cin >> a[i];
    };

    long long y{};
    std::cin >> y;

    std::sort (a.begin(), a.end());
    if (std::binary_search(a.begin(), a.end(), y)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    };

}
