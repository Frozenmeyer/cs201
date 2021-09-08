// Homework0 
// Leif King
// 8/30/2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    std::cout << "Type A number, I'll add one to it and square it" << std::endl;
    int number;
    std::cin >> number;
    number += 1;
    std::cout << "You typed: " << number*number << std::endl;
}