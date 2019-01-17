#include "class_a.h"
#include <iostream>

void TestA::foo() {
    std::cout << number << "\n";
}

void TestA::bar() {
    std::cout << number - 1 << "\n";
}

void TestA::foobar() {
    std::cout << number << " " << number - 1 << "\n";
}

void TestA::fizz() {
    std::cout << ++number << "\n";
}

void TestA::useless() {
    std::cout << number++ << "\n";
}