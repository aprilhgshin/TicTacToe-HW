// April Shin
// CSIS 137
// Homework #1

#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe()
{
	for (int col = 0; col < 3; ++col)
	{
		for (int row = 0; row < 3; ++row)
		{
			threeDArray[row][col] = 0;
		}
	}
}

void TicTacToe::changeBackToZero()
{
	for (int col = 0; col < 3; ++col)
	{
		for (int row = 0; row < 3; ++row)
		{
			threeDArray[row][col] = 0;
		}
	}
}

void TicTacToe::setThreeDArray(int row, int col, int player)
{
	if (player == 1)
		threeDArray[row][col] = 1;
	else if (player == 2)
		threeDArray[row][col] = 2;
}


void TicTacToe::displayArray()
{
	cout << "Column  0  1  2" << endl;
	for (int counter = 0; counter < 3; ++counter)
	{
		cout << "Row " << counter << ": ";
		for (int counter1 = 0; counter1 < 3; ++counter1)
		{
			cout << "|" << threeDArray[counter][counter1] << "|";
		}
		cout << endl;
	}
}


int TicTacToe::inputValidation(int num)
{
	while (num < 0 || num > 2)
	{
		cout << "Invalid input. Please enter an integer between 0 and 2: " << endl;
		cin >> num;
	}
	return num;
}


void TicTacToe::emptyArraySpace(int row, int col, int player)
{
	if (player == 1)
	{
		while (threeDArray[row][col] != 0)
		{
			cout << "Player One: That location is occupied. Please make a mark in a new location." << endl
				<< "Row: " << endl;
			cin >> row;
			row = inputValidation(row);
			cout << "Column: " << endl;
			cin >> col;
			col = inputValidation(col);
		}

		setThreeDArray(row, col, player);
	}

	else if (player == 2)
	{
		while (threeDArray[row][col] != 0)
		{
			cout << "Player Two: That location is occupied. Please make a mark in a new location." << endl
				<< "Row: " << endl;
			cin >> row;
			row = inputValidation(row);
			cout << "Column: " << endl;
			cin >> col;
			col = inputValidation(col);
		}

		setThreeDArray(row, col, player);
	}
}

int TicTacToe::numOccupiedSpaces()
{
	int total = 0;
	for (int row = 0; row < 3; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			if (threeDArray[row][col] != 0)
				++total;
		}
	}
	return total;
}

int TicTacToe::win()
{
	if (threeDArray[0][0] == threeDArray[0][1] && threeDArray[0][0] == threeDArray[0][2])
	{
		if (threeDArray[0][0] == 1)
			return winner = 1;
		else if (threeDArray[0][0] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[1][0] == threeDArray[1][1] && threeDArray[1][0] == threeDArray[1][2])
	{
		if (threeDArray[1][0] == 1)
			return winner = 1;
		else if (threeDArray[1][0] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[2][0] == threeDArray[2][1] && threeDArray[2][0] == threeDArray[2][2])
	{
		if (threeDArray[2][0] == 1)
			return winner = 1;
		else if (threeDArray[2][0] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[0][0] == threeDArray[1][0] && threeDArray[0][0] == threeDArray[2][0])
	{
		if (threeDArray[0][0] == 1)
			return winner = 1;
		else if (threeDArray[0][0] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[0][1] == threeDArray[1][1] && threeDArray[0][1] == threeDArray[2][1])
	{
		if (threeDArray[0][1] == 1)
			return winner = 1;
		else if (threeDArray[0][1] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[0][2] == threeDArray[1][2] && threeDArray[0][2] == threeDArray[2][2])
	{
		if (threeDArray[0][2] == 1)
			return winner = 1;
		else if (threeDArray[0][2] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[0][0] == threeDArray[1][1] && threeDArray[0][0] == threeDArray[2][2])
	{
		if (threeDArray[0][0] == 1)
			return winner = 1;
		else if (threeDArray[0][0] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else if (threeDArray[0][2] == threeDArray[1][1] && threeDArray[0][2] == threeDArray[2][0])
	{
		if (threeDArray[0][2] == 1)
			return winner = 1;
		else if (threeDArray[0][2] == 2)
			return winner = 2;
		else
			return winner = 0;
	}

	else
		return winner = 0;

}




