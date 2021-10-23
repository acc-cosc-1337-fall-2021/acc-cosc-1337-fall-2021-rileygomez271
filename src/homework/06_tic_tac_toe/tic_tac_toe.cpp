//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;


bool TicTacToe::game_over(){
   
    return check_board_full();
}

void TicTacToe::start_game (std::string first_player){
    
    player=first_player;
    clear_board();
    return;
}

void TicTacToe::mark_board(int position){

    TicTacToe::pegs[position-1]=player;
    set_next_player();
}

std::string TicTacToe::get_player()const {

    return player;
}

void TicTacToe::display_board() const{

        cout<<TicTacToe::pegs[0]<<"|"<<TicTacToe::pegs[1]<<"|"<<TicTacToe::pegs[2]<<"\n";
        cout<<TicTacToe::pegs[3]<<"|"<<TicTacToe::pegs[4]<<"|"<<TicTacToe::pegs[5]<<"\n";
        cout<<TicTacToe::pegs[6]<<"|"<<TicTacToe::pegs[7]<<"|"<<TicTacToe::pegs[8]<<"\n";
}

void TicTacToe::set_next_player(){
    if (TicTacToe::player=="X"){
        TicTacToe::player="O";
    }
    else{
        TicTacToe::player="X";
    }

}


bool TicTacToe::check_board_full(){
    
    int num=0;
    for (int i=0;i<=8;i++){
        if (TicTacToe::pegs[i]==" "){
            num ++;
        }
    }
    if (num>=1){
        return false;
    }
    else {
        cout<<"GAME OVER"<<"\n";
        clear_board();   
        return true;
    }
}

void TicTacToe::clear_board(){

    std::vector<std::string> pegs(9," ");
}