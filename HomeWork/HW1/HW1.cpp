// HW 1
// Leif King
// 9/13/2021
//
// Create a diamond using # where the diamond is 2n-1 wide and tall

#include <iostream>

int main(){
    std::cout << "Welcome to diamond maker, please type a number to select a size! ";
    int n = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    std::cin >> n;
    int p = n;
    std::cout << " " << std::endl;
    while (n > 0){
        while (i < n - 1){
            ++i;
            std::cout << " ";
        }
        i = 1;
        ++j;
        while (i < j){
            std::cout << "#";
            ++i;
            while (k == 1){
              ++j;
              k = 0;
            }
        }
        std::cout << "#" << std::endl;
        --n;
        i = 0;
        k = 1;
    }
    n=0;
    --p;
    while (p > 0){
        ++i;
        while (n < i){
            std::cout << " ";
            ++n;
        }
        n = 0;
        k = 2*p -2;
        while (k > 0){
            std::cout << "#";
            --k;
        }
        std::cout << "#" << std::endl;
        --p;
    }
}