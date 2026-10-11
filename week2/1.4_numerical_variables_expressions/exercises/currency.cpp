#include <iostream> 
#include <cmath>

int main(){
    double gbp, exch_rate;
    std::cout << "amount of gbp to convert?" <<std::endl;
    std::cin >> gbp;
    std::cout << "prevailing gbp:euro rate?" <<std::endl;
    std::cin >> exch_rate;
    std::cout << "total number of euros:" << gbp*exch_rate <<std::endl;
    std::cout << "total number of euros (rounded to cents):" << std::round(gbp*exch_rate*100)/100 <<std::endl;
}