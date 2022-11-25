#include <iostream>
#include <algorithm>
#include <vector>

class Person {
    public:
        std::string name = "bla bla bl";
};

void print(int i) {
    std::cout << i << std::endl;
}

int odd(int i) {
    return (i & 1);
}

int main() {
    std::vector<int> vetor;
    vetor.push_back(1);
    vetor.push_back(2);
    vetor.push_back(3);
    vetor.push_back(4);
    vetor.push_back(5);
    vetor.push_back(6);
    vetor.push_back(7);

    std::for_each(vetor.begin(), vetor.end(), print);

    std::find_if(vetor.begin(), vetor.end(), odd);

    std::sort(vetor.begin(), vetor.end());

    return 0;
}