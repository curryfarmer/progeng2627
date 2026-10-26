#include <iostream>

bool leap_year(int year){
    bool ly;
     if( (year % 4) == 0){ 
        // if multiple of 4
        ly = true;

        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            ly = false;
            // ...

        }
        if ((year%400) == 0){
            ly = true;
        }
    }
    else{
        // if not multiple of 4
        ly=false;
    }

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){

    int input_year;
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;

    
}