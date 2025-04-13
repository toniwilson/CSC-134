// CSC 134
// M5HW1 QUESTION THREE
// Toni Wilson
// 4/13/2025

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Get input for first month
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    // Get input for second month
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    // Get input for third month
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    // Calculate average rainfall
    double average = (rain1 + rain2 + rain3) / 3.0;

    // Output the result rounded to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
         << " is " << average << " inches." << endl;

    return 0;
}
