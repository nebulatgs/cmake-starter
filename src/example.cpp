#include <iostream>
using std::cout, std::endl;

#include <example.hpp>

Example::Example(int age) : age(age) {}

void Example::introduce() {
    cout << "Hello, I'm " << age << " years old." << endl;
}