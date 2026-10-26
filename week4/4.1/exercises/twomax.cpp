#include <iostream>

double twomax(double a, double b); 

double twomax(double a, double b){
     
    if(a>b){
        return a;
    }else{
        return b;
    }


}

int main(){

    std::cout << (twomax(1,2) == 2) << std::endl;
    std::cout << (twomax(1,1) == 1) << std::endl;

    
}