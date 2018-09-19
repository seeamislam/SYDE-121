/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 19 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab02
Exercise: 02
File Name: lab02_02.cpp
Project: lab02

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others.


Output for question A) 2018: 8.60, 2025: 9.89, 2050: 16.31, 2100: 44.33

To test the code, I inputted values with different numbers of place values. Some examples included 3, 100, 1000, 2000, etc. If the year was below 2000, then
 the population would begin to decrease. This is the range of values then. A limitation in the code was that nothing below 1 would work. This is because, if the population is less than one, then there is no population. A


*/

#include <iostream>
#include <math.h> // import math library

using namespace std;

int main() {

    double E = 2.71828182845904523536028747135266249775724709369995; // save e to a variable

	double year2018 = 6.0 * pow(e, (0.02*(2000-2000))); // compute the answer for each of the four respective years
	double year2025 = 6.0 * pow(e, (0.02*(2025-2000)));
	double year2050 = 6.0 * pow(e, (0.02*(2050-2000)));
	double year2100 = 6.0 * pow(e, (0.02*(2100-2000)));

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); // set precision to 2 decimals

	cout << "2018: " << year2018 << ", 2025: " << year2025 << ", 2050: " << year2050 << ", 2100: " << year2100 << endl;

return 0;


}

