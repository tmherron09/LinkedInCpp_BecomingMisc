#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int dice = 0;
	
	//seed the Random func
	srand(time(0));
	
	int timesToRoll;
	
	cout << "How many times would you like to roll the dice?  ";
	cin >> timesToRoll;
	
	for(int i = 0; i < timesToRoll; i++) {
		cout << "Role Number #" << i + 1 << endl;
		dice = (rand() % 6) + 1;
		cout << "You rolled a " << dice << endl;
	}
	return 0;
}
