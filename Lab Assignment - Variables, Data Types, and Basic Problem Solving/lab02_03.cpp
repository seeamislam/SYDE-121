/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 19 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab03
Exercise: 03
File Name: lab02_03.cpp
Project: lab02

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others.

Question a) The sum of 1-100: 5050, the sum of 1-3000: 4501500, the sum of 1-10000: 50045000

To test the logic of this program, we inputted numbers with different numbers of place values. We also tested
different values such as 1-2, 1-3, 1-200, 5-5, 3-600. and In addition, we tested
negative numbers. When two negative numbers were inputted, the sum was 0.
*/

#include <iostream>

using namespace std;

int main() {

    int starting; // initializes starting and ending variables
    int ending;

    cout << "Enter a starting value: ";
    cin >> starting; // user input

    cout << "Enter an ending value: ";
    cin >> ending;

    int sum = (ending/2)*(2*starting + (ending-1)*1); // computer the sum of the numbers


cout << "Sum: " << sum  << endl; // print the sum

return 0;
}

