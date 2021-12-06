#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::unique_ptr;
using std::make_unique;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test unique_ptr<TicTacToe> game = make_unique<TicTacToe3>() over with a full board")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test diagonal win 1")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//o
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//x
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//o
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//x
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(7);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(2);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(5);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(8);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
	game->mark_board(3);//X         
	REQUIRE(game->game_over() == false);
	game->mark_board(1);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(6);//X          
	REQUIRE(game->game_over() == false);
	game->mark_board(4);//O          
	REQUIRE(game->game_over() == false);
	game->mark_board(9);//X 
	//X wins 
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test tic tac toe manager get winner count")
{
	TicTacToeManager manager;

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);//X         
	game->mark_board(1);//O          
	game->mark_board(6);//X          
	game->mark_board(4);//O          
	game->mark_board(9);//X 
	REQUIRE(game->game_over() == true);	
	manager.save_game(game);

	game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(2);//X         
	game->mark_board(1);//O          
	game->mark_board(5);//X          
	game->mark_board(4);//O          
	game->mark_board(8);//X 
	REQUIRE(game->game_over() == true);
	manager.save_game(game);

	game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(9);
	game->mark_board(8);
	game->game_over();
	manager.save_game(game);

	int o, x, t;
	manager.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}

TEST_CASE("Test win by first column 4", "[X wins first column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,5,9 and 13
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}



TEST_CASE("Test win by second column 4", "[X wins second column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   second column win are user positions 2,6,10 and 14
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third column 4", "[X wins third column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 3,7,11, and 15
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by fourth column 4", "[X wins fourth column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 4,8,12, and 16
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by first row 4", "[X wins first row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,2,3, and 4
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second row 4", "[X wins second row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 5,6,7, and 8
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(5);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third row 4", "[X wins third row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 9,10,11, and 12
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(9);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by fourth row 4", "[X wins fourth row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 13,14,15, and 16
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(13);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win diagonally from top left 4", "[O wins diagonally from top left 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,6,11, and 16
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("O");
	REQUIRE(board->get_player() == "O");
	board->mark_board(1);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//O 
	//O wins 
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "O");
}

TEST_CASE("Test win diagonally from bottom left 4", "[X wins diagonally from bottom left 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 4,7,10, and 13
	   */
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X 

	//X wins 
	REQUIRE(board->game_over() == true);

	REQUIRE(board->get_winner() == "X");
}