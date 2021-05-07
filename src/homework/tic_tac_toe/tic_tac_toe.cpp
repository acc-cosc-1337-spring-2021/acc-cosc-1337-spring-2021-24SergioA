//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using std::cout;
using std::cin;
using std::string;
using std::vector;



// Start Game
void TicTacToe::start_game( string first_player )
{
    player = first_player;
    display_board();

}


// Display Board
void TicTacToe::display_board()const
{
    cout << "\n"; // --------------- for formating

    for ( auto i = 0; i < 3; i ++ )
    {
        cout <<brd[ i ] << " | ";
    }

    cout << "\n"; // --------------- for formating

    for ( auto t = 0; t < 3; t ++ )
    {
        cout <<brd[ t + 3 ] << " | ";
    }

    cout << "\n"; // --------------- for formating

    for ( auto t = 0; t < 3; t ++ )
    {
        cout <<brd[ t + 6 ] << " | ";
    }

    cout << "\n"; // --------------- for formating

}

// Placements of X's and O's
void TicTacToe::mark_board( int position )
{
    // putting X's & O's on board
    while(!(game_over()))
    {
    cout << "Enter a position from 1 to 9," << " Player: " << get_player() << "\n";
    cin >> position;

    }

    // if position is wrong
    while ( position < 1 || position > 9 )
    {
        cin.clear();
        cout << "try again, a number between 1 and 9: ";
        cin >> position;

    }

    // changes value starting ( - ) to value to new value ( X or O)
    brd[position - 1] = player; 

    cout << "\n"; // --------------- for formating

    // Display updated board
    cout << "\n"; // --------------- for formating
    display_board();
    set_next_player();
    

    // Game ends
    if ( game_over() )
    {
        cout << "Game Over" << "\n";
        clear_board();

    }
    
}

/*if ( game_over() )
{
    cout << "Game Over" << "\n";
    clear_board();

}
*/

// Next player
void TicTacToe::set_next_player()
{
    if( player == "X" )
    {
        player = "O";
    }
    else
    {
        player =  "X";
    
    }
}

bool TicTacToe::check_board_full()
{
    if(    
        /* from 0 to 1 */
        (brd[0] == "X" || brd[0] == "O" ) && (brd[1] == "X" || brd[1] == "O" ) && (brd[2] == "X" || brd[2] == "O" ) &&
        /* from 3 to 5 */
        (brd[3] == "X" || brd[3] == "O" ) && (brd[4] == "X" || brd[4] == "O" ) && (brd[5] == "X" || brd[5] == "O" ) &&
        /* from 6 to 8 */
        (brd[6] == "X" || brd[6] == "O" ) && (brd[7] == "X" || brd[7] == "O" ) && (brd[8] == "X" || brd[8] == "O" ) )
    {
        return true;
    }
    else
    {
        return false;
    }
};

void TicTacToe::clear_board()
{
    brd = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};
}


/*  example

---- [position -1 ] = player

vector <string> brd (9, " ");

*/