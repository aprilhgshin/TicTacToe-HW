// April Shin
// CSIS 137
// Homework #1

#include "TicTacToe.h"
#include <iostream>
using namespace std;

int main()
{
	TicTacToe game;
	TicTacToe();
	char selection;

	do
	{
		cout << "TIC TAC TOE MENU: " << endl
			<< "1) Play game" << endl
			<< "q) Quit" << endl
			<< "Please make a selection: " << endl;
		cin >> selection;

		if (selection == '1')
		{
			game.displayArray();
			game.displayGame();

			if (game.win() == 1)
				cout << "Congratulations, Player One. You are the winner." << endl;
			else if (game.win() == 2)
				cout << "Congratulations, Player Two. You are the winner." << endl;
			else if (game.win() == 3)
				cout << "DRAW: no winners." << endl;

			game.changeBackToZero();
		}

		else if (selection != '1' && selection != 'q' && selection != 'Q')
		{
			cout << "Invalid selection." << endl;
		}
		
	} while (selection != 'q' && selection != 'Q');

	cout << " You have chosen to quit the program." << endl;

	system("PAUSE");
	return 0;
}