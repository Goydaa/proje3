#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
protected:
    int id;
    double balance;

public:
    Account(int accountId, double initialBalance);
    void deposit(double amount);
    bool withdraw(double amount);
    int getId() const;
    double getBalance() const;
};

#endif
