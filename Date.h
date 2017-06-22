//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX4_CALENDARIO_DATE_H
#define EX4_CALENDARIO_DATE_H


class Date {
public:
    Date () : day(1),month(1),year(1970){}

    int getday();
    void setday(int day);

    int getmonth();
    void setmonth(int month);

    int getyear();
    void setyear(int year);

private:
    int day;
    int month;
    int year;
    bool bis=false;


};


#endif //EX4_CALENDARIO_DATE_H
