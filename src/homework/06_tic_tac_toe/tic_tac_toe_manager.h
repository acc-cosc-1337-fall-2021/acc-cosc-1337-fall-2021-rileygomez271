//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>
#include<vector>
#include<string>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData d);
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_total(int& o, int& x, int&t);
    friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
    ~TicTacToeManager();
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_wins{0};
    int o_wins{0};
    int ties{0};
    TicTacToeData data;

    void update_winner_count(std::string winner);
};

#endif