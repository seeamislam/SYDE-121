/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 26 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab03
Exercise: 03
File Name: lab03_03.cpp
Project: Control Flow Constructs, Basic Problem Solving

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others. */

#include <iostream>
#include <string> // import string library

using namespace std;

int main() {

// storing horoscope descriptions
// All credits for the descriptions are to their rightful owner(s). Source : http://www.astrology-zodiac-signs.com/
string Aquarius = "Aquarius. One of your strengths is that you are original.The element associated is Air, which is the element that connects all other elements even though it might seem less relevant, invisible as it is. You are compatible with Leo. ";
string Pisces = "Pisces. One of your strengths is that you are wise. The element associated is Water, which is the element of constant movement, but slow and steady, swirling inside each of us and holding on to its mystery. You are compatible with Virgo and Taurus. ";
string Aries = "Aries. One of your strengths is that you courageous. You are compatible with Libra and Leo. The element associated is Fire which is the only element that shines";
string Taurus = "Taurus. You are compatible with Scorpio. One of your strengths is that you are reliable. The element associated is Earth, which is the sole purpose of all elements, since it represents a basis for each of them, for our existence, and something we all want to accomplish – materialization of our desires.";
string Gemini = "Gemini. One of your strengths is that you are gentle. You are compatible with Aquarius. The element associated is Air, which is the element that connects all other elements";
string Cancer = "Cancer. You are compatible with Taurus. The element associated is Water, which is the element of constant movement, but slow and steady, swirling inside each of us and holding on to its mystery.";
string Leo = "Leo. One of your strengths is that you are creative. You are compatible with Aquarius and Gemini. The element associated is Fire which is the only element that shines. One of your strengths is that you are tenacious.";
string Virgo = "Virgo.  You are compatible with Cancer. One of your strengths is that you are loyal. The element associated is Earth, which is the sole purpose of all elements, since it represents a basis for each of them, for our existence, and something we all want to accomplish – materialization of our desires.";
string Libra = "Libra.One of your strengths is that you are cooperative. You are compatible with Aries and Sagittarius. The element associated is Air, which is the element that connects all other elements. You are compatible with Taurus and Cancer.";
string Scorpio = "Scorpio. One of your strengths is that you are resourceful. The element associated is Water, which is the element of constant movement, but slow and steady, swirling inside each of us and holding on to its mystery.";
string Sagittarius = "Sagittarius. You are compatible with Gemini and Aries. The element associated is Fire which is the only element that shines. One of your strengths is that you are generous. ";
string Capricorn = "Capricorn. One of your strengths is that you are responsible. You are compatible with Taurus and Cancer. The element associated is Earth, which is the sole purpose of all elements, since it represents a basis for each of them, for our existence, and something we all want to accomplish – materialization of our desires.";

int day;
int month;

cout << "What month is your birthday, in the form 1, 2, ... , 12 ? " << endl;
cin >> month;

cout << "What day is your birthday, in the form 1, 2, ... , 31 ? " << endl;
cin >> day;

if (day > 31 || day < 1 || month < 1 || month > 12) { // verifies that the entered response is valid
    cout << "Please re-enter correct values" << endl;
}

else if ((month == 1 && day >= 20 && day <= 31) || (month == 2 && day <= 18)) 
{ 
    cout << "You are a " << Aquarius << endl; // Jan 20 to Feb 18
}

else if ((month == 2 && day >= 19 && day <= 28) || (month == 3 && day <= 20)) 
{ 
    cout << "You are a "  << Pisces << endl; // Feb 19 to Mar 20
}

else if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19)) 
{ 
    cout << "You are a "  << Aries << endl; // Mar 21 to Apr 19
}

else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day <= 20)) 
{ 
    cout << "You are a "  << Taurus << endl; // Apr 20 to May 20
}

else if ((month == 5 && day >= 21 && day <= 31) || (month == 6 && day <= 20)) 
{ 
    cout << "You are a "  << Gemini << endl; // May 21 to June 20
}

else if ((month == 6 && day >= 21 && day <= 30) || (month == 7 && day <= 22)) 
{ 
    cout << "You are a "  << Cancer << endl; // June 21 to Jul 22
}

else if ((month == 7 && day >= 23 && day <= 31) || (month == 8 && day <= 22)) 
{ 
    cout << "You are a "  << Leo << endl; // Jul 23 to Aug 22
}

else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day <= 22)) 
{ 
    cout << "You are a "  << Virgo << endl; // Aug 23 to Sept 22
}

else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day <= 22)) 
{
    cout << "You are a "  << Libra << endl; // Sept 23 to Oct 22
}

else if ((month == 10 && day >= 23 && day <= 31) || (month == 11 && day <= 21)) 
{ 
    cout << "You are a "  << Scorpio << endl; // Oct 23 to Nov 21
}

else if ((month == 11 && day >= 22 && day <= 30) || (month == 12 && day <= 21))
{ 
    cout << "You are a "  << Sagittarius << endl; // Nov 22 to Dec 21
}

else if ((month == 12 && day >= 22 && day <= 31) || (month == 1 && day <= 19)) 
{ 
    cout << "You are a "  << Capricorn << endl; // Dec 22 to Jan 19
}

else 
{
	cout << " Incorrect entry! Try again!  " << endl; 
}
    return 0;
}
