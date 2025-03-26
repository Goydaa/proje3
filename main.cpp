#include <iostream>
#include "Bank.h"
#include "Client.h"
#include "Account.h"
#include "CentralBank.h"
#include "Transaction.h"

int main() {
    CentralBank centralBank;

    Bank bank1("AlphaBank");
    centralBank.registerBank(&bank1);

    Client client1("Ivan", "Petrov");
    bank1.addClient(&client1);

    Account account1(1, 1000.0);
    Account account2(2, 500.0);
    bank1.addAccount(&account1);
    bank1.addAccount(&account2);

    std::cout << "������ �� ��������:\n";
    std::cout << "���� 1: " << account1.getBalance() << "\n";
    std::cout << "���� 2: " << account2.getBalance() << "\n";

    Transaction::transfer(&account1, &account2, 200.0);

    std::cout << "������ ����� ��������:\n";
    std::cout << "���� 1: " << account1.getBalance() << "\n";
    std::cout << "���� 2: " << account2.getBalance() << "\n";

    return 0;
}
