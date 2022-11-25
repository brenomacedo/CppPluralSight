// in headers
class SomeClass {
    public:
        int someValue;
        bool operator < (int i) const;
    
    private:
        int otherValue;
        friend bool operator < (int i, const SomeClass& someClass);
};

bool SomeClass::operator < (int i) const {
    return this->someValue < i;
}

bool operator < (int i, const SomeClass& someClass) {
    return i < someClass.otherValue; 
}
