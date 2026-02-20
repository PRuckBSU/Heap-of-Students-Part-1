#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address();
    void init(std::string st, std::string c, std::string s, std::string z);
    void printAddress();
};

#endif
