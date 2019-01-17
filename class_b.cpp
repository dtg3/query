#include "class_b.h"
#include <iostream>

void TestB::foo() {
    std::cout << number / 2 << "\n";
}

void TestB::foobar() {
    std::cout << number / 2 - 1 << "\n";
}

void TestB::useless() {
    std::cout << --number << "\n";
}

void TestB::extra_useless() {
    std::cout << number-- << "\n";
}
