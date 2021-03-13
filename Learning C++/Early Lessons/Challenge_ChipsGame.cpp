/*
	The Game of Chips (Stones or Nim)?

*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;
int main() {
	
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	int maxThisTurn;
	bool isOneLeft = false;
	int randomTake;
	//string playerName[2] = {"Tim", "Magnus"};
	string playerName[2];
	//playerName[0] = "Tim";
	//playerName[1] = "Magnus";
	
	cout << "Player 1, please enter your name: \n";
	cin >> playerName[0];
	cout << "Player 2, please enter your name: \n";
	cin >> playerName[1];
	
	//int ticTacBoard[3][3];
	
	srand(time(0));
	
	cout << "The Game Begins! " << playerName[0] << " Vs. " << playerName[1] << endl;
	
	
	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
	
	
	while(!gameOver)
	{
		do 
		{
			
			if(player1Turn) 
			{
				cout << playerName[0] << "'s Turn\n";
			}
			else
			{
				cout << playerName[1] << "'s Turn\n";
			}
				maxThisTurn = chipsInPile * MAX_TURN;
				cout << "You may only take ";
				if(maxThisTurn == 0 || maxThisTurn == 1)
				{
					cout << "1 chip";
				}
				else
				{
					cout << "up to " << maxThisTurn << " chips";
				}
				
				
				cout << " this turn.\nHow many would you like?\n";
				cin >> chipsTaken;
				
		} while((chipsTaken > maxThisTurn || chipsTaken <= 0) && chipsInPile > 1);
		
		chipsInPile -= chipsTaken;
		if(chipsInPile == 0)
		{
			gameOver = true;
		}
		else
		{
			cout << "There are " << chipsInPile << " left in the pile.\n";
			player1Turn = !player1Turn;
		}
	}
	
	cout << "There are no more chips left in the pile!\n\n\n\n";
	
	if(player1Turn)
	{
		cout << "Congrats! " << playerName[1] << " is the Winner!\n\n";
	}
	else
	{
		cout << "Congrats! " << playerName[0] << " is the Winner!\n\n";
		
	}
	
	
	cout << "Thanks for Playing!\n\n";
	
	system("pause");
//	randomTake = (rand() % maxThisTurn) + 1;
//	cout << "A Random Take of " << randomTake << " chips.\n";
	
	
	return 0;
}
