#include<iostream>
using namespace std;

int main()
{
	float account_balance, withdrawal,deposit, updated_balance;
	char transaction;
	cout << "What is your current balance? " << endl;
	cin >> account_balance;
	cout << "What kind of transction would you like to perform? enter w for withdrawal and d for deposit " << endl;
	cin >> transaction;
		if (transaction == 'w')
	{
		cout << "How much amount do you want to withdraw? " << endl;
		cin >> withdrawal;
		updated_balance = (account_balance - withdrawal);
		if (withdrawal > account_balance)
		{
			cout << "insuffiecient funds" << endl;
		}
	}
	else if (transaction == 'd')
	{
		cout << "How much amount do you want to deposit? " << endl;
		cin >> deposit;
		updated_balance = (account_balance + deposit);
	}
	else
	{
		cout << "invalid transaction! " << endl;
		return 0;
	}
	cout << "your balance after the transaction is: " << updated_balance << endl;
	return 0;
}