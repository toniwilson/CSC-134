// CSC 134
// M3T3
// Toni Wilson
// 02/17/2025
// start with dice rolls
// what dice are you using today?
// wilson - 1d10

#include <iostream>
// for random
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    const int SIDES = 10;
    // int seed = 4;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll;
    // roll a few time
    roll = ( (rand() % SIDES)+1 );
    cout << roll << endl;

    roll = (rand() % SIDES);
    cout << roll << endl;

    roll = (rand() % SIDES);
    cout << roll << endl;
}