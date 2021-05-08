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
        cout << "\n"; // --------------- for formating
        cout << "Enter a position from 1 to 9," << " Player " << get_player() << ": ";
        cin >> position;
        
        // if position is wrong
        while ( position < 1 && position > 9 )
        {
            cin.clear();
            cout << "try again, a number between 1 and 9: ";
            cin >> position;
        }

        // changes value starting ( - ) to value to new value ( X or O)
        brd[position - 1] = player; 

        // Display updated board
        cout << "\n"; // --------------- for formating
        display_board();
        set_next_player();
    
    }

    // Game ends
    if ( game_over() )
    {
        cout << "Game Over" << "\n";
        clear_board();
    
        if (check_column_win())
        {
            cout << get_winner() << "Is the winner! \n";
        }
        else if (check_row_win())
        {
            cout << get_winner() << "Is the winner! \n";
        }
        else if (check_diagonal_win())
        {
            cout << get_winner() << "Is the winner! \n";
        }
        else
        {
            cout << "No one Won \n";
        }
    
    
    
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
    if( player == "X")
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
        (brd[0] == "X" && brd[0] == "O" ) && (brd[1] == "X" && brd[1] == "O" ) && (brd[2] == "X" && brd[2] == "O" ) &&
        /* from 3 to 5 */
        (brd[3] == "X" && brd[3] == "O" ) && (brd[4] == "X" && brd[4] == "O" ) && (brd[5] == "X" && brd[5] == "O" ) &&
        /* from 6 to 8 */
        (brd[6] == "X" && brd[6] == "O" ) && (brd[7] == "X" && brd[7] == "O" ) && (brd[8] == "X" && brd[8] == "O" ) )
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


// #7 ------------------------------------------------------------------------------------------------------------ #7
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }

}

bool TicTacToe::check_column_win()
{
    if(    
    // X
        
        //check collums | 0 3 6 |
        (brd[0] == "X" && brd[0] != "O" ) && (brd[3] == "X" && brd[3] != "O" ) && (brd[6] == "X" && brd[6] != "O" ) &&
        //check collums | 1 4 7 |
        (brd[1] == "X" && brd[1] != "O" ) && (brd[4] == "X" && brd[4] != "O" ) && (brd[7] == "X" && brd[7] != "O" ) &&
        //check collums | 2 5 8 |
        (brd[2] == "X" && brd[2] != "O" ) && (brd[5] == "X" && brd[5] != "O" ) && (brd[8] == "X" && brd[8] != "O" ) )
    {
        return true;
    }
    // O
    else if(
        //check collums | 0 3 6 |
        (brd[0] != "X" && brd[0] == "O" ) && (brd[3] != "X" && brd[3] == "O" ) && (brd[6] != "X" && brd[6] == "O" ) &&
        //check collums | 1 4 7 |
        (brd[1] != "X" && brd[1] == "O" ) && (brd[4] != "X" && brd[4] == "O" ) && (brd[7] != "X" && brd[7] == "O" ) &&
        //check collums | 2 5 8 |
        (brd[2] != "X" && brd[2] == "O" ) && (brd[5] != "X" && brd[5] == "O" ) && (brd[8] != "X" && brd[8] == "O" ) )
    {
        return true;
    }

}

bool TicTacToe::check_row_win()
{
    if(    
        // ROW X -- 0 1 2 --
        (brd[0] == "X" && brd[0] != "O" ) && (brd[1] == "X" && brd[1] != "O" ) && (brd[2] == "X" && brd[2] != "O" ) &&
        // ROW X -- 3 4 5 --
        (brd[3] == "X" && brd[3] != "O" ) && (brd[4] == "X" && brd[4] != "O" ) && (brd[5] == "X" && brd[5] != "O" ) &&
        // ROW X -- 6 7 8 --
        (brd[6] == "X" && brd[6] != "O" ) && (brd[7] == "X" && brd[7] != "O" ) && (brd[8] == "X" && brd[8] != "O" ) )
    {
        return true;
    }
    else if(
        // ROW O -- 0 1 2 --
        (brd[0] != "X" && brd[0] == "O" ) && (brd[1] != "X" && brd[1] == "O" ) && (brd[2] != "X" && brd[2] == "O" ) &&
        // ROW X -- 3 4 5 --
        (brd[3] != "X" && brd[3] == "O" ) && (brd[4] != "X" && brd[4] == "O" ) && (brd[5] != "X" && brd[5] == "O" ) &&
        // ROW X -- 6 7 8 --
        (brd[6] != "X" && brd[6] == "O" ) && (brd[7] != "X" && brd[7] == "O" ) && (brd[8] != "X" && brd[8] == "O" ) )
    {
        return true;
    }
    else // tie - no win
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if(    
        // XX ------------------------------------------------------------------------------------------------------------
        //check DIAGONAL - 0 4 8 -
        (brd[0] == "X" && brd[0] != "O" ) && (brd[4] == "X" && brd[4] == "O" ) && (brd[8] == "X" && brd[8] == "O" ) &&
        //check DIAGONAL - 2 4 6 -
        (brd[2] == "X" && brd[2] != "O" ) && (brd[4] == "X" && brd[4] == "O" ) && (brd[6] == "X" && brd[6] == "O" ) )
    {
        return true;
    }
    else if(
        // OO -------------------------------------------------------------------------------------------------------------
        //check DIAGONAL - 0 4 8 -
        (brd[0] != "X" && brd[0] == "O" ) && (brd[4] != "X" && brd[4] == "O" ) && (brd[8] != "X" && brd[8] == "O" ) &&
        //check DIAGONAL - 2 4 6 -
        (brd[2] != "X" && brd[2] == "O" ) && (brd[4] != "X" && brd[4] == "O" ) && (brd[6] != "X" && brd[6] == "O" ) )
    {
        return true;
    }
    else
    {
        return false;
    }

}

//string TicTacToe::get_winner()const{return winner;}