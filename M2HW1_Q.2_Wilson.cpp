// CSC 134
// M2HW1
// Wilson Toni
// Question 2: M2LAB1 Update

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Crate Program" << endl;

    // variables
    int length, width, height;
    int volume;

    // constants
    const double COST_PER = 0.30;
    const double CHARGE_PER = 0.52;

    // money variables
    double cost, charge, profit;

    // which crate
    cout << "Enter the dimensions of the crate (in cubic feet)." << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // math
    volume = length * width * height;
    cost = COST_PER * volume;
    charge = CHARGE_PER * volume;
    profit = charge - cost;

    // print and format results
    cout << setprecision(2) << fixed << showpoint;
    cout << "A crate " << length << " by " << width << " by " << height << endl;
    cout << "Is volume: " << volume << endl;
    cout << "It costs:  $" << cost << " to make." << endl;
    cout << "Sells for: $" << charge << endl;
    cout << "Profit is: $" << profit << endl;

    return 0;
}