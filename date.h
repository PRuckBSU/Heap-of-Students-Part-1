#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;

    std::string getMonthName();

public:
    Date();
    void init(std::string dateString);
    void printDate();
};

#endif
