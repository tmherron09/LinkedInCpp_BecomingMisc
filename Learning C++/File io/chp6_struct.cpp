#include <iostream>

using namespace std;

struct students
{
	string name;
	float gpa;
	
};

class BankAccount
{
	private:
		float balance;
		
	public:
		BankAccount();
		void Deposit(float);
		void WithDrawl();
		float getBalance();
};
BankAccount::BankAccount()
{
	balance = 0.0;	
}
float BankAccount::getBalance()
{
	return balance;
}
void BankAccount::Deposit(float amount)
{
	balance += amount;
}


int main() {

//	students Teacher;
//	Teacher.name = "Mr. Tim";
//	Teacher.gpa = 4.0;
//	
//	students firstPeriod[10];
//	firstPeriod[0].name = "Johnny";
//	firstPeriod[0].gpa = 3.1;
//	
//	cout << firstPeriod[0].name << endl;
	
	BankAccount checking;
	BankAccount savings;
	
	cout << "Checking Balance: " << checking.getBalance() << endl;;
	cout << "Savings Balance: " << savings.getBalance() << endl;;
	
	checking.Deposit(500.00);
	savings.Deposit(1000.25);
	
	cout << "Checking Balance: " << checking.getBalance() << endl;;
	cout << "Savings Balance: " << savings.getBalance() << endl;;
	
}
