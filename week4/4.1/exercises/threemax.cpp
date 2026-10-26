#include <iostream>

double threemax(double a, double b, double c); 

double threemax(double a, double b, double c){
     
    if(a>=b && a>=c){
        return a;
    }else if (b >= a && b >= c){
        return b; 
    } else{
        return c;
    }


}

int main(){

    std::cout << (threemax(1,2,3) == 3) << std::endl;
    std::cout << (threemax(0,1,1) == 1) << std::endl;
    std::cout << (threemax(1,1,1) == 1) << std::endl;

    
}