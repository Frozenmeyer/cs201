// Lab 04 
// Leif King
// 9/10/2021
//
// Create a program that prints numbers 1-100 except replace every number divisible by 3 with "Fizz"

#include <iostream>

int main(){
    int length = 100; //because it starts at 0, this will be length 100 essentially
    int i = 1;
    while (i <= length){
        if ((i%3) == 0){
            std::cout << "Fizz" << std::endl;
        }
        else{
            std::cout << i << std::endl;
        }
        ++i;
    }
}