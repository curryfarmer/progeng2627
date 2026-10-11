#include <iostream>
#include <string> 

int main(){

    double temp_in, temp_out; 
    std::string unit_in, unit_out;
    
    std::cin >> temp_in >> unit_in; 

    if(unit_in != "C" && unit_in != "F"){
        std::cout << "invalid unit" << std::endl;
    }
    else if(unit_in == "C"){
        unit_out = "F";
        temp_out = (temp_in * 1.8) + 32; 
        std::cout << temp_out << " " << unit_out << std::endl; 
    }
    else{
        unit_out = "C";
        temp_out = (temp_in - 32)/1.8;
        std::cout << temp_out << " " << unit_out << std::endl; 
    }

}