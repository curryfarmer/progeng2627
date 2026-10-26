#include <iostream> 
#include <cmath> 

// lets try doing it as a function 

//Function Declaration
double sumexp(double x, double n);

//Function Definition 
double sumexp(double x, double n)
{
    double sum = 0;

    for (int i=1; i<=n; i++){
        sum += std::pow(x,i);
    }

    return sum;
}

int main(){

    double x, n ; 

    std::cout << "Please enter the base(x)" << std::endl ;
    std::cin >> x ;

    std::cout << "Please enter the maximum summation term (n)" << std::endl ;
    std::cin >> n ;

    std::cout<< sumexp(x,n) << std::endl;


}