#include "student.h"

Student::Student() {
    creditHours = 0;
}

void Student::init(std::string line) {
    // Will implement space-separated parsing next week
}

void Student::printStudent() {
    // Will implement next week
}

std::string Student::getLastFirst() {
    return lastName + ", " + firstName;
}
