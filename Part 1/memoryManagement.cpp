#include <string>
#include <memory>

class Resource {
    private:
        std::string name;
    public:
        std::string getName() {
            return this->name;
        }
        Resource(std::string name) {
            this->name = name;
        }
};

class Person {
    private:
        std::string firstname;
        std::string lastname;
        int arbitraryNumber;
        std::shared_ptr<Resource> pResource;
    public:
        void addResource(std::string name) {
            this->pResource.reset();
            this->pResource = std::make_shared<Resource>(name);
        }
        Person(std::string firstname, std::string lastName);
};

#include <iostream>

class Animal {
  public:
    void eat() {
      std::cout << "I am eating generic food" << std::endl;
    }
};

class Cat : public Animal {
  public:
    virtual void eat() {
      std::cout << "I am eating rat" << std::endl;    
    }
};

int main() {
    std::shared_ptr<Person> person = std::make_shared<Person>("", "");

    Cat cat;
    ((Animal*) &cat)->eat();
    Animal& animal = cat;
    animal.eat();
    
    return 0;
}