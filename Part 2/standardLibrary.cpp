#include <iostream>
#include <string>
#include <vector>
#include <map>

class Person {
    private:
        std::string firstname;
        std::string lastname;
    public:
        std::string getName() const {
            return this->firstname + " " + this->lastname;
        }
};

int main() {
    std::vector<int> vec;

    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(9);
    vec.push_back(2);

    for (auto i = vec.begin(); i != vec.end(); i++) {
        std::cout << *i << "\n";
    }

    std::map<int, Person> people;
    people[5] = Person();

    std::pair<int, Person> p(4, Person());
    people.insert(p);

    for (auto pair = people.begin(); pair != people.end(); pair++) {
        std::cout << pair->first << "\n";
    }

    auto found = people.find(4);
    found->first, found->second;
    std::string foundName = people[4].getName();

}