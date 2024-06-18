#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string name, int age) : name(name), age(age) {}

    // Overload the == operator
    bool operator==(const Person other) const {
        return (name == other.name && age == other.age);
    }

    // Function to display the person's details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("Alice", 30);
    Person person2("Alice", 30);
    Person person3("Bob", 25);

    cout << "Comparing person1 and person2:" << endl;
    if (person1 == person2) {
        cout << "person1 is equal to person2" << endl;
    } else {
        cout << "person1 is not equal to person2" << endl;
    }

    cout << "Comparing person1 and person3:" << endl;
    if (person1 == person3) {
        cout << "person1 is equal to person3" << endl;
    } else {
        cout << "person1 is not equal to person3" << endl;
    }

    return 0;
}

