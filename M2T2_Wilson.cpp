// CSC 134
// M2T2
// Wilson Toni
// 2/09/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare variables
    double mealPrice = 5.99;
    double taxPercent = 0.08;
    double taxAmount;
    double total;

    // calculations
    taxAmount = mealPrice * taxPercent;
    total = mealPrice + taxAmount;

    cout << setprecision(2) << fixed << showpoint;

    // output
    cout << "Restaurant Receipt" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Total:      $" << total << endl;

    return 0;
}