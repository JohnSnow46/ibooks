#include "Client.h"

Client::Client(int id, std::string name, std::string address) {
    this->id = id;
    this->name = name;
    this->address = address;
}

int Client::getId() {
    return id;
}

std::string Client::getName() {
    return name;
}

std::string Client::getAddress() {
    return address;
}