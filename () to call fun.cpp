#include <iostream>

class Functor {
public:
    void operator()(int x, int y) {
        std::cout << "Sum: " << x + y << std::endl;
    }
};

int main() {
    Functor functor;
    functor(5, 10);
    return 0;
}
