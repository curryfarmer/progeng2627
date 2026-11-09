#include <iostream> 
#include <vector> 

int main(){
    std::vector<int> v;
    std::vector<int> indice;
    int n, k, t, s=0;
    std::cin >> n ; 
    for(int i=0; i<n; i++){
        std::cin >> k; 
        v.push_back(k);
    }
    std::cin >> t; 
    for(int i=0; i<n; i++){
        if(v[i] == t){
            s++; 
            indice.push_back(i);
        }
    }
    std::cout << s << "occurences of " << t << std::endl; 
    for(int i=0; i<s; i++){
        std::cout << indice[i] << std::endl;
    }
}