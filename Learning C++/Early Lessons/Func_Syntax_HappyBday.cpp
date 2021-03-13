#include <iostream>

using namespace std;


void PrintHappyBDay();
void PrintHappyBDay(string);
string name;
int main() 
{
	
	PrintHappyBDay();
	system("pause");
	cout << "What's your name?\n";
	cin >> name;
	PrintHappyBDay(name);
	system("pause");
	return 0;
}


void PrintHappyBDay()
{
	cout << "Happy Birthday to you\n";
	cout << "Happy Birthday to you\n";
	cout << "Happy Birthday Dear User!\n";
	cout << "Happy Birthday, to you!\n";
	
}

void PrintHappyBDay(string name)
{
	cout << "Happy Birthday to you\n";
	cout << "Happy Birthday to you\n";
	cout << "Happy Birthday Dear " << name <<"!\n";
	cout << "Happy Birthday, to you!\n";
}
