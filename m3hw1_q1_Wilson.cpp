// CSC 134
// M3HW1 - bronze
// Toni Wilson
// 03/09/2025

#include <iostream>
// for random
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    // Question 1
    cout << "Question 1" << endl;
    // Question 1 code goes here

    // define variables
    string userInput;

    // greeting
    cout << "Hello, I'm a C++ program!" << endl;

    // do you like me?
    cout << "Do you like me? Please type yes or no? " << endl;
    cin >> userInput;

    if (userInput == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (userInput == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure, that's okay." << endl;
    }

    return 0;
    
}