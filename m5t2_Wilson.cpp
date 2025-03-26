// CSC 134
// M5T2
// Toni Wilson
// 03/26/2025

#include <iostream>
using namespace std;

// Declare functions here, so main() knows they exist
int square (int num);
void printAnswerLine(int num1, int num2);

// Call main
int main() {
    cout << "Table of Squares" << endl;
    cout << "----------------" << endl;

}

// Define functions
int square (int num) {
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    int sq = num * num;
    cout << num << "\t" << sq << endl;
    num = num + 1;

    return sq;
}