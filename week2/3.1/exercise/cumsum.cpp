#include <iostream>

int main(){

    int n; 
    int sum = 0;

    std::cin >> n;

    while(n != 0){
        sum = sum + n; 
        std::cout << "The sum so far is: " << sum << std::endl;
        std::cin >> n;
    }
}