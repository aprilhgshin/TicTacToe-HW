// April Shin
// CSIS 137
// Homework #1
#pragma once
#define TICTACTOE_H

class TicTacToe
{
private:
	int threeDArray[3][3];

public:
	TicTacToe();
	void setThreeDArray(int,int,int);
	int win();
	void displayArray();
	void emptyArraySpace(int,int,int);
	int inputValidation(int);
	int numOccupiedSpaces();
	void changeBackToZero();
	void displayGame();
	void loopDestiny();
	int terminateLoop();
};
