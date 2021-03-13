#include <iostream>
#include <iomanip>

using namespace std;



void PrintThis(string, float& );
void ByValue(int);
void ByReference(int&);
void MainScope();

int main()
{
	/* Incorrect Scoping Example
	string message = "From Main Scope";
	MainScope();
	*/
	
	int num = 5;
	ByValue(num);
	cout << "Number: " << num << endl;
	ByReference(num);
	cout << "Number: " << num << endl;
	
	system("pause");	
	return 0;
}

void PrintThis(string companyName, float& total)
{
	cout << "Thank you " << companyName << ".\n";
	cout << "Your total is ";
	cout << setprecision(2) << total << endl;;
	
	
	
}


void ByValue(int value)
{
	value = value + 5;
}

void ByReference(int& value)
{
	value = value + 5;
}

void MainScope()
{
	cout << message << endl;
	
}

