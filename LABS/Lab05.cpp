// Lab 05
// Leif King
// 9/10/2021
//
// This program should take an int repeatedly and do at least 3 different things with it

#include <iostream>

int main(){
    int i = 0;
    std::cout << "Welcome to tiger estimator, Tell us how many tigers you can see!" << std::endl;
    std::cout << "Number of tigers?";
    std:: cin >> i;
    int cont = 1;
    while (cont == 1){
        switch (i){
            
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            std::cout << "You have a reasonable number of tigers" << std::endl;
            break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            std::cout << "You have way too many tigers" << std::endl;
            break;
            default:
            std::cout << "You have an... unexpected number of tigers" << std::endl;
            break;
        }
        std::cout << "Type 1 to continue";
        std::cin >> cont;
    }
}