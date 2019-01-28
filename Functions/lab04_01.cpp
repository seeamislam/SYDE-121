/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 26 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab04
Exercise: 01
File Name: lab04_01.cpp
Project: Control Flow Constructs, Basic Problem Solving

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others. */


/* To test this code, more than 5 trials were run. The results were computed by hand and then compared to the program, where it was still correct */
#include <iostream>

using namespace std;

// variable declarations
int num_events;
int num_action;
int remaining_events;
int num_goal;
int num_card;
int a_score = 0;
int b_score = 0;
int a_shots = 0;
int a_fouls = 0;
int b_shots = 0;
int b_fouls = 0;
int a_blocked = 0;
int b_blocked = 0;
int a_yellow = 0;
int b_yellow = 0;
int a_red = 0;
int b_red = 0;
int num = 0;
int number_of_events;

int game_set() {

// Purpose: to generate a random number of events which it can then pass on to the next function.
// input: none
// output: the number of total events in the soccer game

srand(time(0)); 

int num = rand() % 30 + 1; // setting up the number of events

return num; 
}


int first_half(int num_events) { 

// purpose: to select the events and outcomes of the first half
// input: the number of total events 
// output: the number of remaining events

for (int i = num_events/2; i > 0; i--) 
{
    num_action = rand() % 6 + 1; // generate a random num out of 6

    if (num_action == 1) // checking if the random number is 1
    {
        cout << "Argentina has a shot on Germany" << endl;
        num_goal = rand() % 3; // another number between 0 and 3 is generated. This is to decide the result of the event. 
        a_shots++;

        if (num_goal == 0) 
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++; // increments to keep count 
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            b_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }

    }
    else if (num_action == 2)
    {
        cout << "Germany has a shot on Argentina" << endl;
        num_goal = rand() % 3;
        b_shots++;

        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 3)
    {
        cout << "Germany has commited a foul" << endl;
                num_goal = rand() % 3;
                b_fouls++;

        if (num_goal == 0)
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_shots++;
            b_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 4)
    {
        cout << "Argentina has commited a foul" << endl;
        num_goal = rand() % 3;
        a_fouls++;

        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 5)
    {
        cout << "Germany has committed a foul close to the goal. A penalty is awarded" << endl;
        num_goal = rand() % 2;
        num_card = rand() % 3;

        if (num_goal == 0)
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++;
            a_shots++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            b_blocked++;
        }
        else 
        {
            cout << "The shot was made off goal" << endl;
        }

        if (num_card == 0)
        {
            cout << "No card was given" << endl;
        }
        else if (num_card == 1)
        {
            cout << "Yellow card was given" << endl;
            b_yellow++;
        }
        else
        {
            cout << "Red card was given" << endl;
            b_red++;
        }

    }

    else // if the number generated is a 6, then this is the result 
    {
        cout << "Argentina has committed a foul close to the goal. A penalty is awarded" << endl;
        num_goal = rand() % 2;
        num_card = rand() % 3;
        
        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
            a_fouls++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else
        {
            cout << "The shot was made off goal" << endl;
        }

        if (num_card == 0)
        {
            cout << "No card was given" << endl;
        }
        else if (num_card == 1)
        {
            cout << "Yellow card was given" << endl;
            a_yellow++;
        }
        else
        {
            cout << "Red card was given" << endl;
            a_red++;
        }
    }

}

remaining_events = num_events / 2;

cout << "\nHalf-Time Stats: " << endl; // display half-time scores
cout << "Score: " << a_score << " - " << b_score << endl;
cout << "Shots: " << a_shots << " - " << b_shots << endl;
cout << "Fouls: " << a_fouls << " - " << b_fouls << endl;
cout << "Yellows: " << a_yellow << " - " << b_yellow << endl;
cout << "Reds: " << a_red << " - " << b_red << endl;
cout << "Blocked shots: " << a_blocked << " - " << b_blocked << "\n" << endl;

return remaining_events;

}



int second_half(int events) { // the sequence of steps happens again for the second half

// purpose: to generate the events of the soccer game within the second half
// input: the number of events that remain in the game
// output: 

srand(time(0));


for (int i = events; i > 0; i--) 
{
    num_action = rand() % 6 + 1; // another number out of 6 is generated

    if (num_action == 1)
    {
        cout << "Argentina has a shot on Germany" << endl;
        num_goal = rand() % 3;
        a_shots++;

        if (num_goal == 0)
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            b_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }

    }
    else if (num_action == 2)
    {
        cout << "Germany has a shot on Argentina" << endl;
        num_goal = rand() % 3;
        b_shots++;

        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 3)
    {
        cout << "Germany has commited a foul" << endl;
                num_goal = rand() % 3;
                b_fouls++;

        if (num_goal == 0)
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_shots++;
            b_blocked++;

        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 4)
    {
        cout << "Argentina has commited a foul" << endl;
        num_goal = rand() % 3;
        a_fouls++;

        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else if (num_goal == 2)
        {
            cout << "The shot was made off goal" << endl;
        }
        else if (num_goal == 3)
        {
            cout << "The shot was blocked by someone who was not the last defender" << endl;
        }
    }
    else if (num_action == 5)
    {
        cout << "Germany has committed a foul close to the goal. A penalty is awarded" << endl;
        num_goal = rand() % 2;
        num_card = rand() % 3;

        if (num_goal == 0)
        {
            cout << "Argentina scored a goal!" << endl;
            a_score++;
            a_shots++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            b_blocked++;

        }
        else
        {
            cout << "The shot was made off goal" << endl;
        }

        if (num_card == 0)
        {
            cout << "No card was given" << endl;
        }
        else if (num_card == 1)
        {
            cout << "Yellow card was given" << endl;
            b_yellow++;
        }
        else
        {
            cout << "Red card was given" << endl;
            b_red++;
        }

    }

    else
    {
        cout << "Argentina has committed a foul close to the goal. A penalty is awarded" << endl;
        num_goal = rand() % 2;
        num_card = rand() % 3;
        
        if (num_goal == 0)
        {
            cout << "Germany scored a goal!" << endl;
            b_score++;
            a_fouls++;
        }
        else if (num_goal == 1)
        {
            cout << "The shot was saved" << endl;
            a_blocked++;
        }
        else
        {
            cout << "The shot was made off goal" << endl;
        }

        if (num_card == 0)
        {
            cout << "No card was given" << endl;
        }
        else if (num_card == 1)
        {
            cout << "Yellow card was given" << endl;
            a_yellow++;
        }
        else
        {
            cout << "Red card was given" << endl;
            a_red++;
        }

    }
}

cout << "\nFull-Time Stats: " << endl;

cout << "Score: " << a_score << " - " << b_score << endl;
cout << "Shots: " << a_shots << " - " << b_shots << endl;
cout << "Fouls: " << a_fouls << " - " << b_fouls << endl;
cout << "Yellows: " << a_yellow << " - " << b_yellow << endl;
cout << "Reds: " << a_red << " - " << b_red << endl;
cout << "Blocked shots: " << a_blocked << " - " << b_blocked << "\n" << endl;
 

return 0;
}


void soccer_sim_start() {
number_of_events = game_set();
remaining_events = first_half(number_of_events);
second_half(remaining_events);

}

int main() { // the main function which calls the individual functions
soccer_sim_start();

    return 0;
}