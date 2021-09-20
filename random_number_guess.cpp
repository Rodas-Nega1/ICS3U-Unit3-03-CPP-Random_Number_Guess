// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks the user to pick a number between 0-9

#include <iostream>
#include <random>


int main() {
    int die;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    // [0, 9]
    die = idist(rgen);

    int number;
    // this function checks if the user picked the computer generated number

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> number;
    std::cout << std::endl;

    // process & output
    if (number != die) {
        std::cout << "You guessed incorrectly.";
    } else {
        std::cout << "You guessed right!";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
