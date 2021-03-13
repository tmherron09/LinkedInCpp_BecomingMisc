#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	ofstream outputFileA;
	outputFileA.open("newSuppliers.txt", ios::app);
	
	outputFileA << "Charlies " << 20 << endl;
	
	
	
	outputFileA.close();
	
}
