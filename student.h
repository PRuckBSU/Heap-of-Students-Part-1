#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    Address address;
    Date birthDate;
    Date gradDate;
    int creditHours;

public:
    Student();
    void init(std::string line);   // will parse space-separated next week
    void printStudent();
    std::string getLastFirst();
};

#endif
