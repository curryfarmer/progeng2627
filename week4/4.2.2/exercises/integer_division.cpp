#include <iostream> 
#include <cmath> 

int division(int a, int b, int& quotient, int&remainder){
    remainder = a%b; 
    quotient = (a-remainder)/b;

    return 0; 

}

int main(){
    int a = 100; 
    int b = 15 ;
    int quotient, remainder; 

    division(a,b,quotient,remainder);

    std::cout << (quotient == 6) << std::endl; 
    std::cout << (remainder == 10) << std::endl;
}