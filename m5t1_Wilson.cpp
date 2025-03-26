// CSC 134
// M5T1
// Toni Wilson
// 03/26/2025

#include <iostream>
using namespace std;

// PURPOSE: show how basic functions work
// Declare functions here, so main() knows they exist
void show_message(); // void function without a parameter
void greet_user(string name); // void funtion with a parameter
int double_a_number(int number); // takes a parameter and returns a value

int main() {
    cout << "Hello from main()" << endl;
    show_message(); // call the functions
    string user = "Toni";
    greet_user(user); // we're passing the value "Toni", not the actual variable
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int answer = double_a_number(num);
    cout << "Double that is " << answer << endl;
    // done
    return 0;
}

// Define functions here, including full body {}.
void show_message() {
    cout << "This is a message." << endl;
}
void greet_user(string user) {
    cout << "Hello, " << user << endl;
}
int double_a_number(int number) {
    int answer = number * 2;
    return answer; // must return an int
}