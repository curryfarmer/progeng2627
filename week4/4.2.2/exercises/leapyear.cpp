#include <iostream>

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    if((year%4==0)&&(year%100!=0)&&(year%400==0)){
        ly = true; 
    }else{
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1,bool ly, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 

    int monthlength; 
    int nextday;

    if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12){
        monthlength = 31;
    }else if(m1==4||m1==6||m1==9||m1==10){
        monthlength = 30;
    } else if(m1==2 && ly){
        monthlength = 29;
    }else{
            monthlength = 28;
    }
    

    nextday = d1 + 1; 

    if(nextday > monthlength){
        nextday = 1; 
        d2 = 1; 
        m2 = m1 + 1; 
    }else{
        d2 = nextday; 
    }

    if(m2>12){
        m2 = 1; 
        d2 = 1; 
        y2 = y1 + 1; 
    }

}

int main(){
    int d1, m1, y1, d2, m2 ,y2; 
    d1 = 31;
    m1 = 12; 
    y1 = 2000;
    next_date(d1,m1,y1,leap_year(y1), d2,m2,y2);
    std::cout << (d2 == 1) <<std::endl;
    std::cout << (m2 == 1) <<std::endl;
    std::cout << (y2 == 2001) <<std::endl;

}