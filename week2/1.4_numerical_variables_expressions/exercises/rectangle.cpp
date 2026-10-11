#include <iostream> 

int main(){
    double length, breadth;
    std::cout << "length?" <<std::endl;
    std::cin >> length;
    std::cout << "breath?" <<std::endl;
    std::cin >> breadth;
    std::cout << "perimeter: " << 2*(length+breadth) << " area: " << (length*breadth) <<std::endl;



}