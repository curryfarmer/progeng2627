#include <iostream>
#include <cmath> 

int smallest_factor(int n){

    int cf= 2;
    bool found_factor = false;

    if(n%cf==0 && n !=2){
        //special branch for cf = 2, so we can ignore all even cases
        found_factor = true;
        return cf; 

    }else{
            cf = cf + 1;
            while((found_factor == false)&&(cf < n)){
                if( (n % cf) == 0){ // n can be divided by cf...

                    found_factor = true;
                    return cf; 
                    //...it means we have found a factor!
                }
                cf = cf + 2;
            // also possible to cut in half by ignoring even cases 
            }
    
    // This loop effectively has early breakout 
    return 0; // returns zero when n is prime 
    }



}

int main(){
    int a,b;
    std:: cin >> a; 
    std::cin >> b; 
    for(int i = a; i<=b; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl; 
        }

    }
}