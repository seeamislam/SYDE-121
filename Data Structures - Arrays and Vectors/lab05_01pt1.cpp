/* Student Name: Seeam Islam
Student Number: 20772998
Date: October 20 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab05
Exercise: 01
File Name: lab05_01.cpp
Project: Tic Tac Toe */


#include <iostream>
#include <string>

using namespace std;


/*The following comments are for my personal planning before creating the programs. 

NOTE: Each function used in this program should have a unique purpose. Think about the different features/checkpoints we need in this program:
- Print board
- Update the board
- Verify that the place is valid
- Check if there is a winner 
- A simulation function which includes all functions above in a sequential order 
*/

// For test values, I inserted values that were beyond the reach of the array. Fortunately, my program functioned properly and asked the user to input values again. 
// declarations
int counter = 1; 
void print_board(string board[4][4]); // used to print the entire board
void user_input(int& row, int& col, const string& player); // acquires user's input 
bool check_win(string board[4][4], const string& player); // verifies if a player has won
bool make_move(string board[4][4], const int& row, const int& col, const string& player);
void start_simulation(const string& starter); // function to run the entire game

string board[4][4] = { //generates a new board
                           {"1", "2", "3", "4"},
                           {"5", "6", "7", "8"},
                           {"9", "10", "11", "12"},
                           {"13", "14", "15", "16"},
                         };


void print_board(string board[4][4]) // used to print the entire board
{ 
    for (int r = 0; r <= 3; r++)
    {
    cout << "\t\t\t\t" << endl;

        for (int c = 0; c <= 3; c++)
        {
            cout << board[r][c] << "\t\t";
        }
        
    }
}

void user_input(int& row, int& col, const string& player) // acquires user's input 
{
    int place;
    cout << "\n\n Player " << player << ", please select a square: \n";
    cin >> place;
    row = ((place - 1) / 4); // saves the row of the user's input
    col = ((place - 1) % 4); // saves the column of the user's input
}

bool check_win(string board[4][4], const string& player) // verifies if a player has won
{

    // checks if any player has vertical lines
    for (int col = 0; col < 4; col++) 
    {
        if (board[0][col] == player && board[1][col] == player && board[2][col] == player && board[3][col] == player) 
        {
        return true;
        }
    }

    // Check if any player has horizontal lines
    for (int row = 0; row < 4; row++) 
    {
        if (board[row][0] == player && board[row][1] == player && board[row][2] == player && board[row][3] == player) 
        {
            return true;
        }
    }

    // Checks for diagonal line from top left and down
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player && board[3][3] == player) 
    {
        return true;
    }

    // Check for diagonal line from top right and down
    if (board[0][3] == player && board[1][2] == player && board[2][1] == player && board[3][0] == player) 
    {
        return true;
    }

    return false;
}


bool make_move(string board[4][4], const int& row, const int& col, const string& player) // function that replaces the array with the user's value of X or O
{
    if (col >= 0 && col < 4 && row >= 0 && row < 4 && board[row][col] != "X" && board[row][col] != "O" ) // checks that the user did not input a space that is already filled
    {
        board[row][col] = player;
        return true;
    } 
    else 
    {
        cout << "Sorry but that is an invalid move! \n";
        return false;
    }
}






// this is the simulation function which combines everything into one seamless game


void start_simulation(string& starter) // function to run the entire game
{

    string player = starter; // assign the current player with the person who moves first

    for (int i = 1; i++; i++) 
    {
        print_board(board); // executes the function that prints the generic board

        bool valid_move;

        do 
        {
            int row;
            int col;
            user_input(row, col, player); // executes the function which recieves the user's inputted square
            valid_move = make_move(board, row, col, player); // executes the function which places the user's input on board
        } 
        
        while (!valid_move); // 
        
        if (check_win(board, player)) // executes the function that verifies if the user has won
        {
            cout << "\n\nPlayer "<< player << " has won!\n\n";
            cout << "A new game has started: ";
            return; 
        }

    counter++;

    if (counter% 2 ==0) // sets a new player
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    }

    cout << "The game is a tie\n";
    return;
}


int main() 
{
    string starter = "X"; // initializes the first player as X
    
    do 
    {
        start_simulation(starter); // runs the game function, and sends it the starter
    }
    while(true);
}