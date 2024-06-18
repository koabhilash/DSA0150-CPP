#include <iostream>

class Array {
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[s];
    }
    ~Array() {
        delete[] arr;
    }
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Index out of bounds" << std::endl;
            exit(0);
        }
    }
};

int main() {
    Array a(5);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}

