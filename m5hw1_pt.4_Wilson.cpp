// CSC 134
// M5HW1 QUESTION FIVE
// Toni Wilson
// 4/13/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables to store speed and time
    int speed;
    int hours;
    int distance;
    
    // Get the vehicle's speed
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    
    // Validate speed (must be positive)
    while (speed < 0) {
        cout << "Speed cannot be negative. Please enter a positive value: ";
        cin >> speed;
    }
    
    // Get the hours traveled
    cout << "How many hours has it traveled? ";
    cin >> hours;
    
    // Validate hours (must be 1 or more)
    while (hours < 1) {
        cout << "Hours must be at least 1. Please enter a valid value: ";
        cin >> hours;
    }
    
    // Display the table header
    cout << "Hour\tDistance Traveled\n";
    cout << "--------------------------------\n";
    
    // Use a loop to calculate and display distance for each hour
    for (int hour = 1; hour <= hours; hour++) {
        distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }
    
    return 0;
}