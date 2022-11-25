#include <iostream>

class OtherClass {
    public:
        void hello(const SomeClass& someClass);
};

class AnotherClass {
    public:
        void hello(const SomeClass& someClass);
};

// a class can have friend functions or friend classes
class SomeClass {
    private:
        friend void OtherClass::hello(const SomeClass& someClass);
        friend class AnotherClass;

        int someNumber;
};

void OtherClass::hello(const SomeClass& someClass) {
    std::cout << someClass.someNumber;
}

void AnotherClass::hello(const SomeClass& someClass) {
    std::cout << someClass.someNumber;
}