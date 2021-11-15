#ifndef HIGHCREDITACCOUNT_H
#define HIGHCREDITACCOUNT_H
#include "SavingAccount.h"

class HighCreditAccount : public SavingAccount
{
	char m_rating;
public:
	HighCreditAccount(int id, int balance, char* name, float rate, char rating);
	virtual ~HighCreditAccount();
	virtual void deposit(int) override;
};

#endif