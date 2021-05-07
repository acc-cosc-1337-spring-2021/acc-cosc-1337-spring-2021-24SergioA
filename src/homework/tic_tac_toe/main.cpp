// main.cpp
#include<iostream>
#include<string>
#include "tic_tac_toe.h"
using std::cout;
using std::cin;

int main() 
{

	TicTacToe game;

	std::string p; // p for player

	cout<<"Who will be first player - X or O - ?  " << "\n";
	cin>>p;

	while ( p != "X" && p != "O")
	{
		cout << "Please enter either an X or O: ";
		cin>>p;
	}

	int number;
	game.start_game(p);
	game.start_game(number);

	return 0;
}