/* Student Name: Seeam Islam
Student Number: 20772998
Date: October 25 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab05
Exercise: 01
File Name: lab05_02.cpp
Project: Stats */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

/* function requirements: 
- have a main function which uses the minor functions
- This should take in the user input and assign values to the array
- Take in an array as a parameter and a length
- This array should */

void stats_output(double new_array[], int size) // setting up the array which prints the data
{
    size--; // turning it into the number of indexes
    double size_d = (double)size; // changing it to a double

    double mean = 0;
    double sd =  0;
    double high_num = 0;
    double low_num = new_array[0];
    double sum = 0; // these are running total so they must be declared as 0;
    float test = 0;

    for (int i = 0 ; i < size ; i++) // searches through the array
    {
        sum = sum + new_array[i]; // uses a running total to calculate the sum
        mean = (sum / size_d); // divide sum by size 

        if (new_array[i] > high_num) // continuously compares the current index to the highest value saved to the variable
        {
        high_num = new_array[i];
        }

        if (new_array[i] < low_num) 
        {    
        low_num = new_array[i]; 
        }

        float test = 0; // find standard deviation
        test = test + (new_array[i] - mean) * (new_array[i] - mean);

    } // end of for loop

    cout << "The minimum is : " << low_num << endl;
    cout << "The maximum is: " << high_num << endl;
    cout << "The mean is: " << mean << endl;

    test /= (double)size; //converting size to double
    sd = sqrt(test);
    cout << "The Standard Deviation is: " << sd << endl;

}

int simulation()
{
    // declarations
    double my_array[20] = {};

    string index_of_changed = "";
    string new_value = "";
    int num = 0;
    bool change_num = true;

    while (num < 21)
    {
        cout << "Enter a value. Press D to stop\n";
        cin >> new_value;

        if (new_value == "done" || new_value == "d") // checks if the user inputted d
        { 
        break;
        }

        else 
        {
        my_array[num] = stod(new_value); // stores the double version of the input to the array
        }
        num++;
    }

    stats_output(my_array, num);

    do
    {
    cout << "\nEnter the index of the number you would like to change\n" << endl ;
    cin >> index_of_changed;
    cout << "\nEnter the new value you would like to swap with. " << endl; // hit quit twice to confirm you want to quit
    cin >> new_value;

    if (index_of_changed == "q" || index_of_changed == "quit" || new_value == "quit" || new_value == "q") 
    {
        change_num = false; // if the user wants to quit, it sets the bool to false which stops the while loop
    }

    else
    {
    int new_index_string = stod(index_of_changed); // changes the index inputted from string to integer
    my_array[new_index_string] = stod(new_value); // sets the new value to the selected index in the array
    }

    } 
    while(change_num == true);

    stats_output(my_array, num); // output the print function

    return 0;

}

int main() 
{
    simulation(); 
    return 0;
}
    