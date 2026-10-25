#include <iostream>

int main (){
    int  n; 
    std::cout << "type our value of n" << std::endl; 
    std:: cin >> n; 

    while(n != 1){
        if( n%2 != 0 ){
            n = 3*n + 1;
        }
        else{
            n = n/2;
        }
        std::cout << n << std::endl;
    }
}