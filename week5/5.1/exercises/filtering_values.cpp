#include <iostream> 
#include <vector> 

int main(){
    std::vector<int> v;
    int n, k, t ;
    std::cin >> n ; 
    for(int i=0; i<n; i++){
        std::cin >> k; 
        v.push_back(k);
    }
    std::cin >> t; 
    for(int i=0; i<t; i++){
        std::cout << v[i] << std::endl;
    }
}