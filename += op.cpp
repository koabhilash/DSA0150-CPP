#include <iostream>

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    Number& operator+=(const Number& other) {
        value += other.value;
        return *this;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    Number n1(10);
    Number n2(20);
    n1 += n2;
    std::cout << "Result after +=: " << n1.getValue() << std::endl;
    return 0;
}

