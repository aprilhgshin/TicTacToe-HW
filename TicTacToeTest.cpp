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
	int oneManyRow;
	int oneManyCol;
	int row;
	int col;
	int player;
	int winner = 0;
	int total;

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

			do
			{
				player = 1;
				cout << "Player One: Please enter the following to indicate where you would like to make a mark" << endl
					<< "Row: " << endl;
				cin >> row;
				row = game.inputValidation(row);
				cout << "Column: " << endl;
				cin >> col;
				col = game.inputValidation(col);

				game.emptyArraySpace(row, col, player);
				winner = game.win();
				game.displayArray();

				player = 2;
				cout << "Player Two: Please enter the following to indicate where you would like to make a mark" << endl
					 << "Row: " << endl;
				cin >> row;
				row = game.inputValidation(row);
				cout << "Column: " << endl;					
				cin >> col;
				col = game.inputValidation(col);

				game.emptyArraySpace(row, col, player);
				winner = game.win();
				game.displayArray();

				total = game.numOccupiedSpaces();

			} while (winner == 0 && total != 9);

			if (winner == 1)
				cout << "Congratulations, Player One. You are the winner." << endl;
			else if (winner == 2)
				cout << "Congratulations, Player Two. You are the winner." << endl;

			if (total == 9)
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