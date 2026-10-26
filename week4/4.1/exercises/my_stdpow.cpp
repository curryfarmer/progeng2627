#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result

    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    if(exp > 0){
        for(int i = 1; i<= exp; i++){
        result = result * base ;
        }
    }else{
        exp = exp * -1;
        for(int i = 1; i<= exp; i++){
        result = result / base ;
        }
    }

    return result;
    // at the end we return the value we computed

    // we *do not print* anything in the function
}

//Function Declaration
double sumexp(double x, double n);

//Function Definition 
double sumexp(double x, double n)
{
    double sum = 0;

    for (int i=1; i<=n; i++){
        sum += mypow(x,i);
    }

    return sum;
}

int main(){
    // // we test examples with integer (and non-negative) exponent

    // std::cout << "2^3: " << mypow(2, 3) << std::endl;
    // std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    // std::cout << "1^0: " << mypow(1, 0) << std::endl;
    // std::cout << "4^-1: " << mypow(4,-1) <<std::endl;
    double x, n ; 
    
    std::cout << (sumexp(2,3) == 14) << std::endl;
    std::cout << (sumexp(3,3) == 18) << std::endl; // false case to flag 0
    std::cout << (sumexp(1,1) == 1) << std::endl;
    
}