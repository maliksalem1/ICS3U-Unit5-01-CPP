// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Nov 2022
// This program uses functions to convert
//  celsius to fahrenheit

#include <iostream>

void CelsiusToFahrenheit() {
    float Tc;
    float Tf;
    std::string TcString;

    // Input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> TcString;

    // Process and Output
    try {
        Tc = std::stof(TcString);
        Tf = (1.8) * Tc + 32;
        std::cout << Tc << "°C is equal to " << Tf << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }
}
int main() {
    // this function calls other functions

    CelsiusToFahrenheit();

    std::cout << "\nDone." << std::endl;
}
