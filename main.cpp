#include <iostream>
#include <cstdlib>
#include "Date.h"

int main() {
    int day_=1;
    int month_=1;
    int year_=1970;

    Date d;

    std::cout<<"Inserisci un anno:"<<std::endl;
    std::cin>>year_;
    try{
        d.setyear(year_);
    }catch (std::out_of_range &ex){
        std::cout<<"Eccezione : "<<ex.what();
        std::abort();
    }

    std::cout<<"Inserisci un mese:"<<std::endl;
    std::cin>>month_;
    try {
        d.setmonth(month_);
    }catch(std::out_of_range &ex){
        std::cout<<"Eccezione : "<<ex.what();
        std::abort();
    }

    std::cout<<"Inserisci un giorno:"<<std::endl;
    std::cin>>day_;
    try {
        d.setday(day_);
    }catch(std::out_of_range &ex){
        std::cout<<"Eccezione : "<<ex.what()<<std::endl;
        std::abort();
    }

    std::cout<<"La data inserita e' : "<<d.getday()<<" / "<<d.getmonth()<<" / "<<d.getyear();

}