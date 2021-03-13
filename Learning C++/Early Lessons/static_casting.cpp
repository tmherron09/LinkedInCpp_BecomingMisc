#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int numEggs = 3;
	cout << (numEggs * 1.5) << endl;
	cout << numEggs * 1.8 << endl;
	cout << static_cast<int>(numEggs * 1.5) << endl;
	cout << static_cast<int>(numEggs + 1.9) << endl;
	cout << floor(numEggs + 1.0001) << endl;
	cout << ceil(numEggs + 1.0001) << endl;
	
	cout << "---------------" << endl;
	
	int remainder = 6 % 2;
	cout << "The remainder is " << remainder << endl;
	remainder = 12 % 5;
	cout << "The remainder is " << remainder << endl;
	
	
}
