#include <iostream>
#include <cctype>

using namespace std;

int main() {
	
	string hello = "hello";
	cout << "Enter a string: ";
	cin >> hello;
	
	
	if(islower(hello[0]))
	{
		hello[0] = toupper(hello[0]);
	}
	
	cout << hello << endl;
	
	system("pause");
	
	return 0;
	
}
