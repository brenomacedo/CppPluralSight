#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <cmath>
#include <iostream>

int main() {
    std::vector<int> a{ 1, 2, 3, 4, 5 };
    std::vector<int> b{ 1, 2, 0, 4 };

    bool same = std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b));
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> firstChange = std::mismatch(std::begin(a), std::end(a), std::begin(b));

    int avalue = *firstChange.first;
    int bvalue = *firstChange.second;
    int distance = firstChange.first - std::begin(a);

    int total = std::accumulate(std::begin(a), std::end(a), 0);
    total = std::accumulate(std::begin(a), std::end(a), 0, [](int total, int i) {
        return total + std::pow(i, 2);
    });

    for (int& val : b) {
        std::cout << val << std::endl;
    }

    std::for_each(std::begin(a), std::end(a), [](int& val, int index) {
        std::cout << val << std::endl;
    });
}