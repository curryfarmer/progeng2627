#include <iostream> 

int main(){
    int n, rem; 

    std::cout << "please enter a number" <<std::endl;
    std::cin >> n; 

    rem = n%3;
    //modulus operator 
    if (rem){
          std::cout << "the number isnt a multiple of 3" << std::endl;
    }else{
          std::cout << "the number is a multiple of 3" << std::endl;
    }

}