//h
#include <string>
#include <vector>
using namespace std;

class TicTacToe
{
        public: // Access
                // #6
                bool game_over() {return check_board_full();}
                void start_game(string first_player);
                void mark_board(int position);
                string get_player() const{return player;}
                void display_board() const;

                // #7
                string get_winner()const{return winner;}

	private: // type Access
                // #6
                void set_next_player();
                bool check_board_full();
                void clear_board();
                string player;
                vector<string> brd = {"-", "-", "-", "-", "-", "-", "-", "-", "-"}; // maybe vector<string> brd{9, " "}
	                                                                        // vector of string brd --- brd = board
                // #7
                bool check_column_win();
                bool check_row_win();
                bool check_diagonal_win();
                void set_winner();
                string winner;
                
                // #8
                
};