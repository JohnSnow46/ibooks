#pragma once
#include <iostream>

class Client {
private:
    int id;
    std::string name;
    std::string address;
public:
    Client(int id, std::string name, std::string address);
    int getId();
    std::string getName();
    std::string getAddress();
};