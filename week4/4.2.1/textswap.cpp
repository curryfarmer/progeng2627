#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){

    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    std::string a,b; 

    std::cout << "please enter two strings" << std::endl;
    std::cin >> a >> b;

    std::cout << "you entered:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    myswap(a,b);


    std::cout << "after swap:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

}

