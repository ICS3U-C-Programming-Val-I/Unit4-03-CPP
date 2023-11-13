// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov 12, 2023
// This program asks the user to enter a positive number.
// Then it tells them the square of the number.

#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string numStr;
    int power = 1;

    std::cout << "Enter a number: ";
    std::cin >> numStr;

    try {
        int numInt = std::stoi(numStr);
        float numFlt = std::stof(numStr);

        if (numFlt != numInt) {
            std::cout << "Invalid input\n";
        } else if (numInt < 0) {
            std::cout << "Enter a non-negative number\n";
        } else if (numInt == 0) {
            std::cout << "0^2 = 1 \n";
        } else {
            for (int counter = 1; counter <= numInt; counter++) {
                power = pow(counter, 2);
                std::cout << counter << "^2 = " << power << '\n';
            }
        }
    } catch (std::invalid_argument) {
        std::cout << numStr << " is not a number\n";
    }
}
