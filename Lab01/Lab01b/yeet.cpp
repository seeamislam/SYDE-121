#include <iostream>

using namespace std;

int main() {
        int uw_id, age, date_of_birth; // allocates space for three pieces of data
                                       // format DDMMYYYY

            // accept as input UWID, age, and date of birth
            // print all three in a cohesively formatted sentence

            cout << "Welcome, user!" << endl;

            cout << "What is your UWID " << endl;
            cin >> uw_id;;

            cout << "What is youe age?" <<endl;
            cin >> age;

            cout << "What is your date of birth?" << endl;
            cin >> date_of_birth;

            cout << uw_id << ", your age is " << age << " and your date of birth is " << date_of_birth << endl;

            return 0; // terimante the program
}
