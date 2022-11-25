#include <string>

template <class T>
T max (T const& t1, T const& t2) {
    return t1 < t2 ? t2 : t1;
}

template <class T>
class Accum {
    private:
        T total;
    public:
        Accum(T start) : total(start) {};
        T operator += (T const& t) {
            return total = total + t;
        };
        T GetTotal() const {
            return total;
        };
};

// template specialization: atribuir uma logica especifica ao tipo especifico de uma classe

template <>
class Accum<bool> {
    private:
        int total;
    public:
        Accum(int start) : total(start) {};
        int operator += (int const& t) {
            return total = total + t;
        };
        int GetTotal() const {
            return total;
        };
};

int main() {
    int a = 3;
    max(0.2, static_cast<double>(a)); 

    Accum<int> integers(0);
    Accum<std::string> strings("");
    Accum automatic_integer(0);

    return 0;
}