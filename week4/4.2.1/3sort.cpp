#include <iostream>

void sort_three_numbers(double& s1, double& s2, double& s3){

    double tmp;
    if(s1>s2){
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }
    if(s2>s3){
        tmp = s2;
        s2 = s3;
        s3 = tmp;
    }
    if(s1>s2){
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }
}

int main(){
    double a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    std::cout << "Before: " << a << " " << b << " " << c << std::endl;

    sort_three_numbers(a, b, c);

    std::cout << "After:  " << a << " " << b << " " << c << std::endl;
}

