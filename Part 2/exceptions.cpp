#include <iostream>
#include <string>
#include <vector>

class ErroDeLogica : public std::logic_error {

};

class ErroDeExecucao : public std::runtime_error {

};

int main() {
      std::vector<int> vetor;
      vetor.push_back(8);

      try {
        vetor.at(99);
      } catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
      } catch (std::exception e) {
        std::cout << e.what() << std::endl;
      }
}