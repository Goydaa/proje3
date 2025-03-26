#include "CentralBank.h"

void CentralBank::registerBank(Bank* bank) {
    banks.push_back(bank);
}

Bank* CentralBank::findBankByName(std::string bankName) {
    for (auto* bank : banks) {
        if (bank->getName() == bankName) return bank;
    }
    return nullptr;
}
