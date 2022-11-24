// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program lists every number from 1000 to 2000

#include <iostream>

int main() {
    // This program lists every number from 1000 to 2000

    int counter = 1000;

    // Process and Output
    for (counter = 1000; counter <= 2000; counter++) {
        ((counter % 5) == 4) ? std::cout << counter << "\n" : std::cout << counter << " ";
    }

    std::cout << "\nDone." << std::endl;
}
