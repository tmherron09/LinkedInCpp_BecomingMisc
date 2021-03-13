#include <iostream>

using namespace std;



int main(){
	int numCountDownFrom;
	
	cout << "Please choose a number between 1-10 to count down from.\n";
	cin >> numCountDownFrom;
	if(numCountDownFrom > 10 || numCountDownFrom <= 0) 
	{
		cout << "Cancelling Blast Off. You did not read the rules...\n\n\n";
		system("pause");
		return 1;
	}
	
	cout << "Beginning Count down from " << numCountDownFrom << ".\n\n\nBlasting Off In...\n";
	
	switch(numCountDownFrom)
	{
		case 10:
			cout << "10...\n";
		case 9:
			cout << "9...\n";
		case 8:
			cout << "8...\n";
		case 7:
			cout << "7...\n";
		case 6:
			cout << "6...\n";
		case 5:
			cout << "5...\n";
		case 4:
			cout << "4...\n";
		case 3:
			cout << "3...\n";
		case 2:
			cout << "2...\n";
		case 1:
			cout << "1...\n";
		default:
			cout << "BLAST OFF!!!\n\n";
			break;
	}
	
	cout << "Thanks for blasting off with me!\n\n";
	system("pause");
	
	return 0;
	
}
