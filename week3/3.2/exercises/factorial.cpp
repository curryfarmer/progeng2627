#include <iostream>

int main(){
    int n = 1; 
    int x;
    std::cout << "enter value of x" << std::endl ;
    std::cin >> x ;
    for(int i = 1; i < x+1; i++){
        n = n * i ;
    }
    std::cout << "value of x factorial: " << n <<std::endl;
}