// CSC 134
// M4T1
// Toni Wilson
// 03/10/2025

#include <iostream>
using namespace std;

int main()
{
    // PART ONE, JUST SAY "HI" 5 TIMES
    int count = 1;
    while (count <= 5)
    {
        cout << "Hello number " << count << endl;
        // count = count + 1;
        count++; // same as above
    }
    cout << "Done!" << endl;

    // PART TWO, DISPLAYS A LIST OF NUMBERS AND THEIR SQUARES
    /*for (int i=1; i <=10; i++)
    {
        cout << "Happy Mar. " << i << endl;
    }
    */
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    cout << "Table of Squares" << endl;
    cout << "----------------" << endl;
    int num = MIN_NUM;
    int sq; // num squared
    while (num <= MAX_NUM)
    {
        sq = num * num;
        cout << num << "\t" << sq << endl;
        num = num + 1;
    }

    return 0;
}