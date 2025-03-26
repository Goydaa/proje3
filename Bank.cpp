#include "Bank.h"

Bank::Bank(std::string bankName) : name(bankName) {}

void Bank::addClient(Client* client) {
    clients.push_back(client);
}

void Bank::addAccount(Account* account) {
    accounts.push_back(account);
}

Account* Bank::findAccountById(int accountId) {
    for (auto* acc : accounts) {
        if (acc->getId() == accountId) return acc;
    }
    return nullptr;
}

std::string Bank::getName() const {
    return name;
}
