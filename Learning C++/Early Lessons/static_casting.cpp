#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
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
	
	int toThePower = pow(2,5);
	cout << "2 to the power of 5 (2^5): " << toThePower << endl;
	toThePower = pow(5,5);
	cout << "5 to the power of 5 (5^5): " << toThePower << endl;
	toThePower = pow(5,2);
	cout << "5 squared (5^2): " << toThePower << endl;
	
	cout << "---------------" << endl;
	
	float getSquare = sqrt(4);
	cout << "Square root of 4: " << getSquare << endl;
	getSquare = sqrt(5);
	cout << "Square root of 5: " << getSquare << endl;
	int howFar = abs(-200);
	cout << "The Absolute value of -200: " << howFar << endl;
	howFar  = abs(200);
	cout << "The Absolute value of 200: " << howFar << endl;
	
	float howFloatFar = fabs(-25.055);
	cout << "The Absolute value of float -25.055: " << howFloatFar << endl;
	howFloatFar = fabs(25.055);
	cout << "The Absolute value of float 25.055: " << howFloatFar << endl;
	howFloatFar = fabs(-25);
	cout << "The Absolute value of float 25: " << howFloatFar << endl; 
	
	
	
	cout << "---------------" << endl;
	
	
	srand(time(0));
	int dice = rand();
	float zeroOne = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
	cout << "A number between zero and one?? " << zeroOne << endl;	
	zeroOne = zeroOne = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);;
	cout << "A number between zero and one?? " << zeroOne << endl;	
	zeroOne = zeroOne = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);;
	cout << "A number between zero and one?? " << zeroOne << endl;	
	zeroOne = zeroOne = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);;
	cout << "A number between zero and one?? " << zeroOne << endl;	

	cout << "The random max is " << RAND_MAX << endl;	
	cout << "You rolled a " << dice << endl;
	float fDice = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
	cout << "You rolled a " << fDice << endl;
	int mDice = static_cast<int>(fDice * 6);
	
	for(int i = 0; i < 25; i++) {
		// mDice = static_cast<int>((static_cast<float>(rand()) / static_cast<float>(RAND_MAX)) * 6) + 1;
		// cout << "You rolled a " << mDice << endl;
		cout << "You Rolled a " << RollDice() << endl;
	
	}
	
	
	return 0;
	
}
	
int RollDice() {
	int dice = static_cast<int>((static_cast<float>(rand()) / static_cast<float>(RAND_MAX)) * 6) + 1;
	return dice;
}
