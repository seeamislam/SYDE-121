/* Student Name: Seeam Islam
Student number: 20772998
Date: September 26 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab03
Exercise: 01
File Name: lab03_01.cpp
Project: Control Flow Constructs, Basic Problem Solving

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others. */

/*To test the program, we attempted to use a series of test values. If we enter the number 1, which is a prime number, it does not return any value. 
Likewise, if we enter a very large number, the compiler requires alot of time to process it. However, when we test it with values such as 77 and 250, the program
can properly process it.  */

#include <iostream>

using namespace std;

int main() {

    int num; // declare variables
    int ten_thousands;
    int thousands;
    int hundreds;
    int tens;
    int ones;

    cout << "Enter a positive value" << endl; // records input from user
    cin >> num; // assigns user input to variable
    
if ( !cin || (num < 0) ) // checks if the entered value is anything besides a number (because num is an integer type) or if it is negative
{
    cout << "Enter another value!" << endl;
}
else 
{
    for (int i = 2; i <= num; i++) // scales through numbers
    {
        bool prime_num = true;
        
        for (int x = 2; x <= i - 1; x++) 
        {
            if (i % x == 0) // determines if it is prime
            {
                prime_num = false;
            }
        }

        if (prime_num == true) // execute this if the number is prime
        {
            if (i < 100000 && i > 10000) // checks if number is less than 100000 and more than 10000
            {
                ten_thousands = (i / 10000); // identifies each individual digit (starting from the left)
                thousands = (i % 10000) / 1000;
                hundreds = ((i % 10000) % 1000) / 100;
                tens = (((i % 10000) % 1000) % 100) / 10;
                ones = ((((i % 10000) % 1000) % 100) % 10); 

                if ((ten_thousands + thousands + hundreds + tens + ones) % 2 != 0) // determines if the sum is odd using the remainder
                {
                    cout << "The number " << i << ", is a prime number and also the sum of its digits is odd." << endl;
                } 
                else 
                {
                    cout << "The number " << i << " is a prime number." << endl;
                }
            } 
            
            else if (i > 1000 && i < 10000) // this is the same, but it checks if its a palindrome and prime.
            {
                thousands = (i / 1000); // again, aquires the value of each individual
                hundreds = (i % 1000) / 100;
                tens = ((i % 1000) % 100) / 10;
                ones = ((i % 1000) % 100) % 10;

                if ((thousands + hundreds + tens + ones) % 2 != 0 && thousands == ones && hundreds == tens) // we have to check if the hundreds equal the tens and the thousands equal the ones
                { // this checks if its sum is off, and if its palindrome
                    cout << "The number " << i << " is a prime number, palindromic number, and the sum of its digits are odd" << endl;
                } 
                else if (thousands == ones && hundreds == tens) 
                {
                    cout << "The number "  << i << " is a prime number and it is a palindromic number." << endl;
                } 
                else if ((thousands + hundreds + tens + ones) % 2 != 0) 
                {
                    cout << "The number " << i << " is a prime number and the sum of digits is odd." << endl;
                } 
                else 
                {
                    cout << "The number " << i << " is only a prime number." << endl;
                }
            } 
            
            else if (i < 1000 && i > 100) // checking the range of 100 - 1000
            {
                hundreds = i / 100;
                tens = (i % 100) / 10;
                ones = (i % 100) % 10;

                if ((hundreds + tens + ones) % 2 != 0 && hundreds == ones)
                {
                    cout << "The number " << i << " is a prime number, the sum of digits is odd, and it is a palindromic number." << endl;
                } 
                else if (hundreds == ones) 
                {
                    cout << "The number " << i << " is a prime number and it is a palindromic number." << endl;
                } 
                else if ((hundreds + tens + ones) % 2 != 0)
                {
                    cout << "The number " << i << " is a prime number and the sum of digits is odd." << endl;
                } 
                else 
                {
                    cout << "The number " << i << " is only a prime number." << endl;
                }
            } 
            else if (i < 100 && i > 10) // checking the range of 10 to 100
            {
                tens = i / 10;
                ones = i % 10;

                if ((tens + ones) % 2 != 0 && tens == ones) 
                {
                    cout << "The number " << i << " is a prime number, the sum of its digits is odd, and it is also a palindromic number." << endl;
                } 
                else if (tens == ones) 
                {
                    cout << "The number " << i << " is a prime number and also a palindromic number." << endl;
                } 
                else if ((tens + ones) % 2 != 0) 
                {
                    cout << "The number " << i << " is a prime number and also the sum of its digits is odd." << endl;
                } 
                else 
                {
                    cout << "The number " << i << " is only a prime number." << endl;
                }
            } 
            
            else if (i < 10 && i >= 2) 
            {
                cout << "The number " << i << " is only a prime number." << endl;
            }

        }
        }
}

    return 0;
}