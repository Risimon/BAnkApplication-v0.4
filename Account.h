#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using std::cout;
using std::endl;

const int NAME_LEN = 40;
const int MAX_ACC_NUM = 100;

class Account {
protected:
    int m_accId;
    int m_balance;
    char* m_cusName;
public:
    Account(int id, int balance, char* name);
    Account(const Account& cp);
    Account();
    virtual ~Account();
    int getAccId() const;
    virtual void deposit(int money);
    int withdraw(int money);
    void showAccInfo() const;
    int getBalance()const;
};
#endif