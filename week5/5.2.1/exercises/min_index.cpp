#include <iostream> 
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double n = -1, l; 

    if(vin.size() == 0 ){
        return -1;
    }
    n = vin[0]; 
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < n){
            l = i;
            n = vin[i];
        }
    }
    return l; 
}

int main(){
    std::cout << (min_vector_element({3.5, 1.2, 4.8, 2.0}) == 1) << '\n';
    std::cout << (min_vector_element({-5.0, -2.0, -9.0}) == 2) << '\n';
    std::cout << (min_vector_element({7.0}) == 0) << '\n';
    std::cout << (min_vector_element({0.5, 3.0, 2.0}) == 0) << '\n';
    std::cout << (min_vector_element({2.0, 1.0, 1.0}) == 1) << '\n';
}