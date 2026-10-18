#include <iostream>

int main(){

    int n; 
    double sum = 0;
    double count = 0;

    std::cin >> n;

    while(n != 0){
        sum = sum + n; 
        count = count + 1;
        std::cout << "The average so far is: " << sum/count << std::endl;
        std::cin >> n;
    }
}