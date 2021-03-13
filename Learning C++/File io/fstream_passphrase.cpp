#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	ifstream inStream;
	inStream.open("passphrase.txt");
	
	string passphrase;
	int userGuess = 0;
	
	
	if(!inStream.fail())
	{
		while(inStream >> passphrase)
		{
			cout << "Passphase: " << passphrase << endl;
			cout << "What is your answer?\n";
			
			cin >> userGuess;
			if(userGuess == passphrase.length())
			{
				cout << "Correct!\n";
			}
			else
			{
				cout << "Sorry try again.\n\n";
			}
		}
		
	}
	
	
	system("pause");
	
}
