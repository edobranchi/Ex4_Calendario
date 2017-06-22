//
// Created by Edoardo on 22/06/2017.
//

#include <stdexcept>
#include <iostream>
#include "Date.h"

int Date::getday() {
    return day;
}

void Date::setday(int day) {
bool changed= false;
    if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ) && (day <= 31 && day >= 1)) {
        this->day = day;
        changed = true;
    };
    if((month==4||month ==6 ||month==9||month==11) && (day<=30 && day>=1)){
        this->day=day;
        changed = true;

    }
    if(month==2 && day<=28 && day>=0){
        this->day=day;
        changed=true;
    }
    if (month==2 && bis==true && day <=29 && day>=0){
        this->day=day;
        changed=true;
    }
    if(changed!= true){
        throw std::out_of_range("Giorno Non Valido");
    }
}

int Date::getmonth() {
    return month;
}

void Date::setmonth(int month) {
if((month<=12)&&(month>=1)){
    this->month=month;
}else throw std::out_of_range("Mese non valido");
}

int Date::getyear() {
    return year;
}

void Date::setyear(int year) {
if((year%4==0 && year%100!=0)|| year%400==0){
    bis= true;
}
    this->year=year;
}
