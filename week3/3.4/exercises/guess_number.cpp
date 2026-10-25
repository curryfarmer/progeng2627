#include <iostream>
#include <string> 
int main(){

    int n, leftpointer, rightpointer, mid; 
    std::string response; 
    bool isNumber = false;

    std::cout << "Enter the lower bound of your range" << std::endl; 
    std::cin >> leftpointer;

    std::cout << "Enter the upper bound of your range" << std::endl; 
    std::cin >> rightpointer; 


    while(not isNumber){
        mid = (rightpointer - leftpointer)/2 + leftpointer;
        std::cout << "Is the number more, less or equal to " << mid  << "? respond with more less =" <<std::endl;
        std::cin >> response; 
        if(response == "="){
            isNumber = true;
        }else if(response == "less"){
            rightpointer = mid;
        }else if(response=="more"){
            leftpointer = mid;
        }
    }

    std::cout<< mid << " is your number" << std::endl;


}