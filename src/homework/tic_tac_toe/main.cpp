// main.cpp
#include<iostream>
#include<string>
#include "tic_tac_toe.h"
using std::cout;
using std::cin;
using std::string;

int main() 
{

	TicTacToe game;

	string p; // p for player

	cout<<"Who will be first player - X or O - ?  ";
	cin>>p;

	while ( p != "X" && p != "O")
	{
		cout << "Please enter capital X or O: ";
		cin>>p;
	}

	int number;
	game.start_game(p);
	game.mark_board(number);
	
	return 0;
}