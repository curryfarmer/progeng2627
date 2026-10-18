#include <iostream>

int main(){

    double a; 
    int b;
    double remainder;
    double quotient = 0;

    std::cin >> a >> b;
    // a divided by b 
    remainder = a ; 

    while(remainder >= b){
        std::cout << remainder << " is greater than " << b <<" " << "so we continue dividing"<< std::endl;
        remainder = remainder - b;
        quotient = quotient + 1 ;
    }
    std::cout<< "quotient " << quotient <<" "<< "remainder " << remainder << std::endl;
}