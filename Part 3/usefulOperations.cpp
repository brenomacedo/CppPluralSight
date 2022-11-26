#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
#include <iterator>

int main() {
  std::vector<int> a;

  int idx = 15;
  std::generate_n(std::back_inserter(a), 15, [&idx]() {
    return idx--;
  });

  std::vector<int> b(6);

  std::partial_sort_copy(std::begin(a), std::end(a), std::begin(b), std::end(b));

  std::for_each(std::begin(b), std::end(b), [](int& val) {
    std::cout << val << std::endl;
  });

  std::swap(a[0], a[1]);
  std::cout << a[0] << std::endl;
  std::cout << a[1] << std::endl;

  std::rotate(std::begin(b), std::begin(b) + 1, std::end(b));

  std::for_each(std::begin(b), std::end(b), [](int& val) {
    std::cout << val << std::endl;
  });

  std::partition(std::begin(b), std::end(b), [](int& i) {
    return i % 2;
  });

  std::for_each(std::begin(b), std::end(b), [](int& val) {
    std::cout << val << std::endl;
  });

  return 0;
}