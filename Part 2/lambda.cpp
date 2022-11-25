#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vetor;
    vetor.push_back(1);
    vetor.push_back(2);
    vetor.push_back(3);
    vetor.push_back(4);

    auto odd = [] (int i) -> int {
        return i & 1;
    };

    auto print = [] (int i) -> int {
        std::cout << i << std::endl;
    };

    std::for_each(vetor.begin(), vetor.end(), print);
    std::for_each(vetor.begin(), vetor.end(), [] { std::cout << 1; });
}