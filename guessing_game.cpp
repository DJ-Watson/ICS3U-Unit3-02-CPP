// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: September 2019
// this program is a guessing game where the user has to guess a number
// that the system has in memory


#include <iostream>


int main() {
    // variables
    const int NUMBER = 7;
    int numinput;
    // input
    std::cout << "guess the number I am thinking of : ";
    std::cin >> numinput;
    std::cout << "" << std::endl;
    // process
    if (numinput == NUMBER) {
        // output
        std::cout << "Correct!";
    }
}
