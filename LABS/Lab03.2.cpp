// Lab 03.2
// Leif King
// 9/3/2021
//
// Description: 1 Write a C++ program that prints the numbers 1 to 20, using a while-loop.
//              2 Write a C++ program that prints a 60 × 10 box made of some single character, using nested while-loops. For example, here is an 8 × 3 box made of asterisks.
//********
//********
//********

#include <iostream>

int main(){
    int j = 0;
    int n = 0;
    while (n <= 9){
        while (j <= 58){
            std::cout << "*";
            ++j;
        }
        std::cout << "*" << std::endl;
        j = 0;
        ++n;
    }
}