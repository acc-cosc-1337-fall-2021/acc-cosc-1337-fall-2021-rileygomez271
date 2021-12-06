//h
#include <string>
#include <vector>
#include <iostream>
#include <math.h>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size*size, " " ){}
    TicTacToe(std::vector<std::string> p, std::string win) : pegs(p), winner(win){}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const;
    std::string get_winner()const;
    std::vector<std::string> get_pegs()const{return pegs;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    std::vector<std::string> pegs;
    virtual bool check_diagonal_win();
    virtual bool check_row_win();
    virtual bool check_column_win();

private:
    std::string player;
    
    std::string winner;

    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
};

#endif