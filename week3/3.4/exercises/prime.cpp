// first version, not the most efficient one
#include <iostream>

int main(){
    int n, cf= 2;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    if(n%cf==0 && n !=2){
        //special branch for cf = 2, so we can ignore all even cases
        found_factor = true;

    }else{
            cf = cf + 1;
            while((found_factor == false)&&(cf < n)){
                if( (n % cf) == 0){ // n can be divided by cf...

                    found_factor = true;
                    //...it means we have found a factor!
                }
            cf = cf + 2;
            // also possible to cut in half by ignoring even cases 
        }
    
    // This loop effectively has early breakout 
    }


    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}