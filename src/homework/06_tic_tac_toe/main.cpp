#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cin;  using std::cout; using std::string;
using std::unique_ptr; using std::make_unique;

int main() 
{
	TicTacToeData data;
	TicTacToeManager manager(data);
	string first_player;
	char choice;
	unique_ptr<TicTacToe> game;//save memory region for a game

	do
	{
		auto game_type = 0;

		cout<<"Enter game type (3 or 4): ";
		cin>>game_type;

		if(game_type == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else
		{
			game = make_unique<TicTacToe4>();
		}

		while(!(first_player == "X" || first_player == "O"))
		{
			cout<<"Enter first player: ";
			cin>>first_player;
		}

		game->start_game(first_player);

		while(game->game_over() == false)
		{
			cin>>*game;
			cout<<*game;
		}

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(o, x, t);
		cout<<" O wins: "<<o;
		cout<<" X wins: "<<x;
		cout<<" Ties  : "<<t<<"\n";

		first_player = "Z";
		cout<<"Do you want to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N');

	cout<<manager;

	return 0;
}