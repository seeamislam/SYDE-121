#include <iostream>// used to include library routines
                   // STL are included with <..> brackets
using namespace std; // "using" is used to extend known keywords
                // namespace allows access to specific sets of keywords

//create main function

int main() { // return type is integer is int
    int number_of_languages; // alterative name: numberofLanguages
                            // int of integer will allocate 4 bytes or 32 bits
                            // signed (positive or negative) integer values
                            // int varible_name allocates space for that variable
    cout << "Hello, class! \n" // \n will be used to provide a line break
                               // alternative to "\n" is to used end!
         << "Welcome to C++! \n"; //""are used to enclose string values

         //ask user for the number of programming languages they used previously
         //output the number they enter

    cout << "How many programming languages have you used before? ";
    cin >> number_of_languages; // accept input from the console and store it into the int variable
    cout << "The value you entered is " << number_of_languages << endl;

    return 0; // bc you have to return some sort of integer




}
