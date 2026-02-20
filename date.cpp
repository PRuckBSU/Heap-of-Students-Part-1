#include <iostream>
#include "date.h"

Date::Date() {
    month = 0;
    day = 0;
    year = 0;
}

void Date::init(std::string dateString) {
    int firstSlash = dateString.find('/');
    int secondSlash = dateString.find('/', firstSlash + 1);

    month = std::stoi(dateString.substr(0, firstSlash));
    day = std::stoi(dateString.substr(firstSlash + 1, secondSlash - firstSlash - 1));
    year = std::stoi(dateString.substr(secondSlash + 1));
}

std::string Date::getMonthName() {
    switch (month) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Invalid";
    }
}

void Date::printDate() {
    std::cout << getMonthName()
              << " "
              << day
              << ", "
              << year
              << std::endl;
}
