#include "tic_tac_toe.h"

using std::cin;  using std::cout; using std::string;

int main() 
{
	string first_player;
	char choice;
	TicTacToe game;

	do
	{
		cout<<"First player, select X or O: ";
		cin>>first_player;
		game.start_game(first_player);
		int position;

		while(game.game_over() == false)
		{
			cout<<"Enter a position from 1-9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<<"Do you want to quit? If yes, press n: ";
		cin>>choice;
	}
	while(choice == 'N');

	return 0;
}