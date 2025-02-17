// CSC 134
// M3T1 and M3T2
// Toni Wilson
// 02/17/2025
// ask user for the width and legth of two rectangles
// which is bigger

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

    // which is larger?
    if (area1 > area2)
    {
        cout << "The first one is larger." << endl;
    }
    else if (area2 > area1)
    {
        cout << "The second one is larger." << endl;
    }
    else
    {
        cout << "Neither is larger. They're both the same size." << endl;
    }

    return 0;
}