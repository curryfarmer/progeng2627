#include <iostream> 
#include <vector> 

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){ 
    std::vector<double> tmp; 

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            tmp.push_back(vin[i]);
        }
    }

    vout = tmp; 
}
int main(){
    std::vector<double> out;

    filter_v({1.5, 3.0, 0.2, 5.0}, 3.0, out);
    std::cout << (out == std::vector<double>{1.5, 0.2}) << '\n';

    filter_v({1.0, 2.0}, 10.0, out);
    std::cout << (out == std::vector<double>{1.0, 2.0}) << '\n';

    filter_v({5.0, 6.0}, 1.0, out);
    std::cout << out.empty() << '\n';

    filter_v({}, 1.0, out);
    std::cout << out.empty() << '\n';

    out = {9.0, 9.0};
    filter_v({1.0, 5.0}, 3.0, out);
    std::cout << (out == std::vector<double>{1.0}) << '\n';

    filter_v({-2.5, 0.0, -1.0}, 0.0, out);
    std::cout << (out == std::vector<double>{-2.5, -1.0}) << '\n';

    std::vector<double> x = {1.0, 4.0, 2.0, 5.0};
    filter_v(x, 3.0, x);
    std::cout << (x == std::vector<double>{1.0, 2.0}) << '\n';
}