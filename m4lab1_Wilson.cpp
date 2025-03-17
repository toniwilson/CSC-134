// CSC 134
// M4Lab1
// Toni Wilson
// 03/17/2025
// printing emojis

#include <iostream>
using namespace std;

int main () 
{
    string pixel = "💙"; 
    const int WIDTH = 7;
    const int HEIGHT = 7;
    // cout << pixel << endl;

    // three ways to run a loop
    // 1. while loop
    int count = 0;
    while (count < 10) {
        cout << pixel;
        count++;
    }
    cout << endl;

    // 2. do while loop
    count = 0;
    do {
        cout << pixel << " ";
        count++;
    } 
    
    while (count < 5);

    // 3. for loop
    // this is the one time using i as a variable is ok
    // i stands for index
    cout << endl;
    cout << pixel << " printed horizontally (row)" << endl;
    for (int i=0; i < WIDTH; i++)
    {
        cout << pixel << " ";
    }
    cout << endl;

    cout << pixel << " printed vertically (column)" << endl;
    for (int i=0; i < HEIGHT; i++)
    {
        cout << pixel << endl;
    }
    cout << endl << "Printing a box " << WIDTH << " by " << HEIGHT << endl;
    // THIS IS A NESTED LOOP
    // for each row
    for (int h = 0; h < HEIGHT; h++) {
        // print the current row
        for (int w = 0; w < WIDTH; w++) {
            cout << pixel << " ";
        }
        // go to the next line
        cout << endl;
    }
}