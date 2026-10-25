#include <iostream>

int main (){
    int n, height = 0, width = 0; 
    std::cout << "input a value of n" << std::endl ;
    std::cin >> n ; 
    while(height < n){
        while(width < n){
            std::cout << "*"; 
            width = width + 1;

        }
        std::cout<<std::endl;
        width = 0; 
        height = height + 1;
    }

}