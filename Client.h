#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string firstName;
    std::string lastName;
    std::string passport;
    std::string address;

public:
    Client(std::string fName, std::string lName, std::string pass = "", std::string addr = "");
    std::string getFullName() const;
};

#endif
