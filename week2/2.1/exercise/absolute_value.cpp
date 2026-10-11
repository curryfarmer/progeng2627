#include <iostream>

int main(){
    double n, original;
    // n for the input, absv will be
    // the absolute value we compute

    // TODO: ask for a number in input
    // TODO: read the input number in n
    std::cout << "give me a number" << std::endl ;
    std::cin >> n ;
    original = n;


    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        n = -n;
    }

    std::cout << "|" << original << "| = " << n << std::endl;

}