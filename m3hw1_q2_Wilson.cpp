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
    // Question 4
    cout << "Question 4" << endl;
    // Question 4 code goes here

    // ssed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // generate two random single digit numbers
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    // solve the addition problem
    cout << "What is " << num1 << " plus " << num2 << "? ";

    int user_answer;
    cin >> user_answer;

    // calculate the correct answer
    int correct_answer = num1 + num2;

    // if user gets it right or not
    if (user_answer == correct_answer)
    {
        cout << "Correct!" << endl;
    }
    else 
    {
        cout << "Incorrect. The correct answer is " << correct_answer << "." << endl;
    }

    return 0;
}