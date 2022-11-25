int DoubleIt(int x) {
    x = 10;
}

int DoubleIt2(int const& x) {

}

int DoubleIt3(int& x) {

}

class Person {
    public:
        void someMethod() {}
        void anotherMethod() const {}
};

int main() {

    int const x = 10;
    DoubleIt(10);
    DoubleIt2(10);
    // DoubleIt3(10); // error

    Person const somePerson;

    //somePerson.someMethod(); // error
    somePerson.anotherMethod(); // ok. because another person is a const method

    int y = 10;
    int const* a = &y; // pointer t oa const
    int* const b = &y;

    return 0;
}