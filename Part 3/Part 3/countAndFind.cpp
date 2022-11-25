#include <algorithm>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vetor { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int const target = 2;
    int twoCount = std::count(std::begin(vetor), std::end(vetor), target);

    int odds = std::count_if(std::begin(vetor), std::end(vetor), [] (int i) {
        return i % 2;
    });

    bool allof, anyof, noneof;

    allof = std::all_of(std::begin(vetor), std::end(vetor), [] (int i) { return i % 2; });
    anyof = std::any_of(std::begin(vetor), std::end(vetor), [] (int i) { return i % 2; });
    noneof = std::none_of(std::begin(vetor), std::end(vetor), [] (int i) { return i % 2; });

    auto result = std::find(std::begin(vetor), std::end(vetor), 6);
    int weLookedFor = *result;

    result = std::find(result, std::end(vetor), 2);
    result = std::find_if(std::begin(vetor), std::end(vetor), [] (int i) {
        return i % 2;
    });

    int sum = std::reduce(std::begin(vetor), std::end(vetor), 0, [] (int i, int j) -> int {
        return 0;
    });

    

    // std::find_if_not
    // std::find_first_of
    // std::search
    // std::find_end
    // std::search_n
    // std::adjacent_find

}