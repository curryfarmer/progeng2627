#include <iostream> 
#include <string> 

//This is an exercise on for loops 

int main(){
    int input; 
    std::cout<< "enter the desired right triangle height" << std::endl ;

    std::cin>>input;

    for(int i = 1; i <= input; i++){
        std::cout<< std::string(i,'*') <<std::endl;
    }


}