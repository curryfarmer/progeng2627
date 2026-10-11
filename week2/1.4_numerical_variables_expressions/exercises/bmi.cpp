#include <iostream> 
#include <cmath>

int main(){
    double height, weight;
    std::cout << "height in m?" <<std::endl;
    std::cin >> height;
    std::cout << "weight in kg? " <<std::endl;
    std::cin >> weight;
    std::cout << "total BMI:" << weight/(height*height) <<std::endl;
    std::cout << "total BMI (2DP):" << std::round(weight/(height*height)*100)/100 <<std::endl;
}