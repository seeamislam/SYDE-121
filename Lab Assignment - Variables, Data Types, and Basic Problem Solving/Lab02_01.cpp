/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 19 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab02
Exercise: 01
File Name: lab02_01.cpp
Project: lab01

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others.

Question A) 6 150lbs weights, 2 50lbs weights, 1 30lbs weights, 1 15lbs weights, 3 1lb weights
To test my code, I inputted a series of test values which contained a different number of place values. First,
I calculated the answer using a calculator. Then, I compared my answer to the output of my code. I even tested situations
such as 250 and 251. To verify if my logic was correct, 251 should require one more 1lb weight.
Other tested values included: 0, 1, 2, 16, 150, 250, 251, 1049. The range of values does not include negative values however, because you can't have negative weight.
When -1 was inputted, the program stated that -1 weights was required, which is impossible. In addition, I also inputted
decimal numbers. Because the variables were set as integers, the decimal values were disregarded, making this a limitation of the program.

*/


#include <iostream>

using namespace std;

int main() {

    int weight_given; // set total weight variable
    cout << "Enter your weight" << endl;
    cin >> weight_given; // user inputs their weight and stores it to variable

    int weight150 = weight_given / 150; // find the number of 150lbs weights

    int remainder = weight_given % 150; // find the remaining weight after 150 using modulus

    int weight50 = remainder / 50; // find the number of 50s inside the remains
    remainder = remainder % 50; // find the remaining weight after 50s. We are always reassigning a new value to the remainder variable

    int weight30 = remainder / 30;
    remainder = remainder % 30;

    int weight15 = remainder / 15;
    remainder = remainder % 15;

    int weight1 = remainder / 1;

    cout << weight150 << " 150lbs weights, " << weight50 << " 50lbs weights, " << weight30 << " 30lbs weights, "
    << weight15 << " 15lbs weights, " << weight1 << " 1lb weights " << endl;
    return 0;


}

