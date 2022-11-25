#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <deque>
#include <array>

int main() {
    std::vector<int> v1(10);
    std::fill(std::begin(v1), std::end(v1), 1);
    std::fill_n(std::begin(v1), 6, 2);

    std::vector<int> v2;
    std::fill_n(std::back_inserter(v2), 6, 2);
    std::generate_n(std::back_inserter(v2), 10, [n = 0]() mutable { return n++; });

    std::deque<int> q3;
    fill_n(std::front_inserter(q3), 6, 2);
    std::generate_n(std::front_inserter(q3), 10, [n = 0]() mutable { return n++; });

    std::vector<int> v3;
    std::transform(std::begin(v2), std::end(v2), std::back_inserter(v3), [](int& i) {
        return i + 1;
    });

    std::vector<int> v4;
    std::copy(std::begin(v3), std::end(v3), std::back_inserter(v4));

    std::vector<int> v5;
    std::unique_copy(std::begin(v4), std::end(v4), std::back_inserter(v5));

    return 0;
}