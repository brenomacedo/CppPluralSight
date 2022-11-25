#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> a{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> ex{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    std::vector<int> b(a.size());
    std::copy(std::begin(a), std::end(a), std::begin(b));
    
    std::vector<int> c = a;

    std::vector<int> d(5);
    std::copy_n(std::begin(a), 5, std::begin(d));

    std::vector<int> e(a.size());
    std::copy_if(std::begin(a), std::end(a), std::begin(e), [](int &val) { return val % 2; });

    std::vector<int> f(a.size());
    std::copy_backward(std::begin(a), std::end(a), std::end(f));
    
    std::vector<int>::iterator newEnd = std::remove(std::begin(a), std::end(a), 3);
    int s = a.size(); // valor permanece o mesmo a´pos a remoção
    int logicalsize = newEnd - std::begin(a);
    a.erase(newEnd, std::end(a));

    std::vector<int>::iterator newEnd2 = std::remove_if(std::begin(a), std::end(a), [](int& val) { return val % 2; });
    a.erase(newEnd2, std::end(a));

    std::vector<int> g(6);
    std::fill(std::begin(g), std::end(g), 5);
    std::fill_n(std::begin(g), 3, 5);
    std::iota(std::begin(g), std::end(g), 1);

    int index = 10;
    std::generate(std::begin(g), std::end(g), [&index]() {
        return --index;
    });

    std::generate_n(std::begin(g), 3, [&index]() {
        return ++index;
    });

    std::vector<int> h = ex;
    std::replace(std::begin(h), std::end(h), 3, 4);
    std::replace_if(std::begin(h), std::end(h), [](int& b) {
        return b > 5;
    }, 6);

    std::transform(std::begin(h), std::end(h), std::begin(h), [](int i) { return i*2; });

    std::vector<int> i = ex;
    std::vector<int>::iterator newEnd = std::unique(std::begin(i), std::end(i));
    i.erase(newEnd, std::end(i));

    std::string sentence = "Hello world!";
    std::reverse(std::begin(sentence), std::end(sentence));

    std::iter_swap(std::begin(i), std::end(i) - 1);
}