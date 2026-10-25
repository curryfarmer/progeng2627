#include <iostream>

int main(){
    int n; 
    int x;
    std::cout << "enter value of x" << std::endl ;
    std::cin >> x ;
    std::cout << "enter value of n" << std::endl ;
    std::cin >>  n ;
    for(int i = 1; i < n; i++){
        x = x*x; 
    }
    std::cout << "value of x^n: " << x <<std::endl;
}