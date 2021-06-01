// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program rounds decimals

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

float numberRounding(float &number, int decimals) {
    // this function rounds decimals
    float numberFloat;
    int numberInt;
    float result;

    numberFloat = (number * pow(10, decimals)) + 0.5;
    numberInt = numberFloat;
    result = numberInt / pow(10, decimals);

    number = result;
}


int main() {
    // This is the main function
    int height;
    int radius;
    float result;
    try {
        float number;
        int decimalsNotToRound;
        std::cout << "Enter a decimal that you want to round: ";
        std::cin >> number;

        std::cout << "Enter how many decimal places you want: ";
        std::cin >> decimalsNotToRound;

        numberRounding(number, decimalsNotToRound);

        std::cout << std::endl;
        std::cout << number << std::endl;
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
