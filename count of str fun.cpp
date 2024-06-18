#include <iostream>
#include <string>
using namespace std;

int countElements(const string& str) {
    return str.length();
}

int main() {
    string str = "Hello, World!";
    cout << "Number of elements in string: " << countElements(str) << endl;
    return 0;
}

