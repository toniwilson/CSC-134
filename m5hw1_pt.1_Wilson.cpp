// CSC 134
// M5HW1 QUESTION THREE
// Toni Wilson
// 4/13/2025

#include <iostream>
using namespace std;

int main()
{
    // Declare variable for user input
    int number;
    
    // Get input from user
    cout << "Enter a number (1 - 10): ";
    cin >> number;
    
    // Input validation
    while (number < 1 || number > 10) {
        cout << "Invalid input! Number must be between 1 and 10." << endl;
        cout << "Enter a number (1 - 10): ";
        cin >> number;
    }
    
    // Convert to Roman numeral using if-else statements
    string romanNumeral;
    
    if (number == 1)
        romanNumeral = "I";
    else if (number == 2)
        romanNumeral = "II";
    else if (number == 3)
        romanNumeral = "III";
    else if (number == 4)
        romanNumeral = "IV";
    else if (number == 5)
        romanNumeral = "V";
    else if (number == 6)
        romanNumeral = "VI";
    else if (number == 7)
        romanNumeral = "VII";
    else if (number == 8)
        romanNumeral = "VIII";
    else if (number == 9)
        romanNumeral = "IX";
    else if (number == 10)
        romanNumeral = "X";
    
    // Display the result
    cout << "The Roman numeral version of " << number << " is " << romanNumeral << "." << endl;
    
    return 0;
}