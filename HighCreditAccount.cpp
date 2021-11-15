#include "HighCreditAccount.h"
HighCreditAccount::HighCreditAccount(int id, int balance, char* name, float rate, char rating) : SavingAccount(id, balance, name, rate), m_rating{ rating }{}

HighCreditAccount::~HighCreditAccount(){}

void HighCreditAccount::deposit(int money)
{
	SavingAccount::deposit(money);
	if (m_rating == 'A')
		m_balance += money * 0.01;
	else if (m_rating == 'B')
		m_balance += money * 0.02;
	else 
		m_balance += money * 0.03;
}
