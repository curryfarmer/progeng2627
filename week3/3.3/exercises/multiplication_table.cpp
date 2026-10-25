#include <iostream>

int main (){
    int n, k = 1; 
    std::cout << "input a value of n" << std::endl ;
    std::cin >> n ; 

    std::cout << n << std::endl; 

    while(k <= n){
        for(int i = 1; i <= n; i++){
            std::cout << i*k << "\t" ;
        }
        std::cout<<std::endl;
        k = k + 1;
    }


}