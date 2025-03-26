#include "Account.h"

Account::Account(int accountId, double initialBalance) : id(accountId), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > balance) return false;
    balance -= amount;
    return true;
}

int Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}
