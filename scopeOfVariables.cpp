// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date:  Oct. 3rd, 2023
// This program shows how local and global variables work.

#include <iostream>

// Declaring a global variable
int variableX = 25;

void localVariable() {
    // This shows what happens with local variables
    int variableX = 10;
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableY + variableX;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // This shows what happens with global variables
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Global variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // This functions shows how local and global variables work
    localVariable();
    globalVariable();

    std::cout << "\nDone.\n"
              << std::endl;
    return 0;
}
