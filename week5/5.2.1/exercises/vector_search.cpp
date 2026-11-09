#include <iostream> 
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i = 0; i<vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;


}

int main(){
    std::cout << (search_vector(4, {1, 4, 7, 9}) == 1) << '\n';   // middle
    std::cout << (search_vector(1, {1, 4, 7, 9}) == 0) << '\n';   // first
    std::cout << (search_vector(9, {1, 4, 7, 9}) == 3) << '\n';   // last
    std::cout << (search_vector(5, {1, 4, 7, 9}) == -1) << '\n';  // not found
    std::cout << (search_vector(3, {3, 8, 3}) == 0) << '\n';      // duplicates: first match
    std::cout << (search_vector(2, {}) == -1) << '\n';            // empty vector
}