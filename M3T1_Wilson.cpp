// CSC 134
// M3T1
// Toni Wilson
// 02/17/2025
// ask user for the width and legth of two rectangles

#include <iostream>
using namespace std;

int main()
{
    // variables
    double len1, wid1, len2, wid2;
    double area1, area2;

    // ask user for legnth and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the secon rectangle? ";
    cin >> wid2;

    // find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // print the area
    cout << "Area 1: " << area1 << endl;
    cout << "Area 2: " << area2 << endl;

    return 0;
}