// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program uses for loop

#include <iostream>

int main() {
    // this function uses for loop
    int number_as_integer;
    std::string number;
    float numberAsfloat;

    // input
    std::cout << "Enter an integer >= 0: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process and output
    try {
        number_as_integer = std::stoi(number);
        if (number_as_integer < 0) {
            std::cout << number << " is a negative integer" << std::endl;
        } else {
            for (int counter = 0; counter <= number_as_integer; counter++) {
                int total = counter * 2;
                std::cout << counter << "² = " << total << std::endl;
            }
        }
    }
    catch (std::invalid_argument) {
        std::cout << number << " is not an integer, try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
