#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>
#include "Account.h"
#include "Client.h"

class Bank {
private:
    std::string name;
    std::vector<Client*> clients;
    std::vector<Account*> accounts;

public:
    Bank(std::string bankName);
    void addClient(Client* client);
    void addAccount(Account* account);
    Account* findAccountById(int accountId);
    std::string getName() const;
};

#endif
