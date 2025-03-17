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
    for (int i=0; i < 10; i++)
    {
        cout << pixel << " ";
    }
    cout << endl;
}