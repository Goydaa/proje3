#include "Client.h"

Client::Client(std::string fName, std::string lName, std::string pass, std::string addr)
    : firstName(fName), lastName(lName), passport(pass), address(addr) {
}

std::string Client::getFullName() const {
    return firstName + " " + lastName;
}
