// CSC 134
// M5T1
// Toni Wilson
// 03/26/2025

#include <iostream>
using namespace std;

// PURPOSE: show how basic functions work
// Declare functions here, so main() knows they exist
void show_message();

int main()
{
    cout << "Hello from main()" << endl;
    show_message(); // call the functions
    // done
    return 0;
}

// Define functions here, including full body {}.
void show_message() 
{
    cout << "This is a message" << endl;
}