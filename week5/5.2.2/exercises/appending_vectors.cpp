#include <iostream> 
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    std::vector<int> tmp; 
    for(int i = 0; i < vin1.size(); i++){
        tmp.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++){
        tmp.push_back(vin2[i]);
    }
    vout = tmp;
}

int main(){
    std::vector<int> a = {1, 2, 3}, b = {4, 5}, out;

    append_vectors(a, b, out);
    std::cout << (out == std::vector<int>{1, 2, 3, 4, 5}) << '\n';

    out = {9, 9, 9};
    append_vectors(a, b, out);
    std::cout << (out == std::vector<int>{1, 2, 3, 4, 5}) << '\n';

    append_vectors({}, b, out);
    std::cout << (out == std::vector<int>{4, 5}) << '\n';

    append_vectors(a, {}, out);
    std::cout << (out == std::vector<int>{1, 2, 3}) << '\n';

    append_vectors({}, {}, out);
    std::cout << out.empty() << '\n';

    std::vector<int> x = {1, 2};
    append_vectors(x, b, x);
    std::cout << (x == std::vector<int>{1, 2, 4, 5}) << '\n';

    std::vector<int> y = {4, 5};
    append_vectors(a, y, y);
    std::cout << (y == std::vector<int>{1, 2, 3, 4, 5}) << '\n';

    std::vector<int> z = {7, 8};
    append_vectors(z, z, z);
    std::cout << (z == std::vector<int>{7, 8, 7, 8}) << '\n';
}