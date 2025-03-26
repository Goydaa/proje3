#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
public:
    static bool transfer(Account* from, Account* to, double amount);
};

#endif
