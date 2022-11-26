#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>

int main() {

  std::vector<int> v { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7 };
  std::sort(std::begin(v), std::end(v));
  // std::sort(std::begin(v), std::end(v), [](int a, int b) -> bool {
  //   return a < b;
  // });

  // std::stable_sort(std::begin(v), std::end(v));
  // std::stable_sort(std::begin(v), std::end(v), [](int a, int b) -> bool { return a < b; });

  // std::is_sorted(std::begin(v), std::end(v));

  std::cout << std::is_sorted(v.begin(), v.end(), [](int a, int b) { return a < b; }) << std::endl;

  std::vector<int>::iterator it = std::upper_bound(std::begin(v), std::end(v), 6);
  std::cout << *it << std::endl;

  std::vector<int>::iterator it2 = std::lower_bound(std::begin(v), std::end(v), 6);
  std::cout << *it2 << std::endl;

  std::random_device randomdevice;
  std::mt19937 generator(randomdevice());

  std::shuffle(std::begin(v), std::end(v), generator);

  std::partial_sort(std::begin(v), std::find(std::begin(v), std::end(v), 4), std::end(v), [](int a, int b) {
    return a < b;
  });

  std::vector<int> v2(3);
  std::partial_sort_copy(std::begin(v), std::end(v), std::begin(v2), std::end(v2));

  std::nth_element(std::begin(v), std::begin(v) + 4, std::end(v));

  std::vector<int>::iterator isSortedUntil = std::is_sorted_until(std::begin(v), std::end(v));

  std::vector<int>::iterator searchN = std::search_n(std::begin(v), std::end(v), 6, [](int x) { return x == 5; });

  std::max(std::begin(v), std::end(v));

  return 0;
}