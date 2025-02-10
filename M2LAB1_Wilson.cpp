// CSC 134
// M2LAB1
// Wilson Toni
// 2/10/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Crate Program" << endl;

    // variables
    int length, width, height;
    int volume;
    // constants never change
    const double COST_PER = 0.23;
    const double CHARGE_PER = 0.50;
    // money variables
    double cost, charge, profit;

    // ask which crate is needed
    cout << "Enter the dimensions of the crate (in cubic feet)." << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // do the math
    volume = length * width * height;
    cost = COST_PER * volume;
    charge = CHARGE_PER * volume;
    profit = charge - cost;

    // print results
    // format results
    cout << setprecision(2) << fixed << showpoint;
    cout << "A crate " << length << " by " << width << " by " << height << endl;
    cout << "Is volume:  " << volume << endl;
    cout << "It costs:  $" << cost << " to make." << endl;
    cout << "Sells for: $" << charge << endl;
    cout << "Profit is: $" << profit << endl;

    // done!
    return 0; // no errors
}
