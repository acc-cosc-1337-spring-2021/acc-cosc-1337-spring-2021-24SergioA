#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
using namespace std;




TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Game Board")
{
	TicTacToe game;

	game.start_game("X");

}

TEST_CASE("Test Player Input")
{
	TicTacToe game;

	string p = "W";
	game.start_game(p);
	game.mark_board('3');    //game.start_game("p")

}

TEST_CASE("Test Switch Player Input")
{
	TicTacToe game;

	string p = "X"; // maybe put  ' || "x" '    b/c of the small x's
	game.start_game("p");
	game.mark_board('3');
	game.mark_board('2');
}

TEST_CASE("Test for Full Board")
{
	TicTacToe game;

	string p = "X"; // maybe put  ' || "x" '    b/c of the small x's
	game.start_game("p");
	game.mark_board('1');
	game.mark_board('2');
	game.mark_board('3');
	game.mark_board('4');
	game.mark_board('5');
	game.mark_board('6');
	game.mark_board('7');
	game.mark_board('8');

}

TEST_CASE("Test Clear Board")
{
	TicTacToe game;

	string p = "X"; // maybe put  ' || "x" '    b/c of the small x's
	game.start_game("p");

	game.mark_board('1');
	game.mark_board('2');
	game.mark_board('3');
	game.mark_board('4');
	game.mark_board('5');
	game.mark_board('6');
	game.mark_board('7');
	game.mark_board('8');

	game.start_game("p");

}

