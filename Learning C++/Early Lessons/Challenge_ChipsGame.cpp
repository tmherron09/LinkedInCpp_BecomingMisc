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
	maxThisTurn = chipsInPile * MAX_TURN;
	cout << "You may only take " << maxThisTurn << endl;
	randomTake = (rand() % maxThisTurn) + 1;
	cout << "A Random Take of " << randomTake << " chips.\n";
	
	
	return 0;
}
