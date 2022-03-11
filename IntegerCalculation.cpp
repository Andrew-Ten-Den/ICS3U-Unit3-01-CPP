// Copyright 2022 MTHS
// Author: Andrew Ten-Den
// This program calculates the sum of two integers

#include <iostream>

int main() {
    // this function calculates the sum of two integers
    int integer1;
    int integer2;
    int total;

    // input
    std::cout << "Enter first integer ";
    std::cin >> integer1;
    std::cout << "Enter second integer: ";
    std::cin >> integer2;

    // process
    total = integer1+integer2;

    // output
    std::cout << "" << std::endl;
    std::cout << integer1 << " + " << integer2 << " = " << total << std::endl;

    std::cout << "\nDone." << std::endl;
}
