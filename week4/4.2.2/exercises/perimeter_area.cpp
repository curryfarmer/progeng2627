#include <iostream>

// input data type input dataname (output datatype output dataname){}

double rectangle(double length, double breadth, double& perimeter, double& area){
    perimeter = 2*(length+breadth);
    area = length*breadth; 
    return 0;

}

int main(){
    double length = 10; double breadth = 20; double perimeter; double area; 

    rectangle(length,breadth,perimeter,area);

    std::cout<< (perimeter == 60) <<std::endl;
    std::cout<< (area==200)<<std::endl;


}