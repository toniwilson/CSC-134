// CSC 134
// M6LAB1
// Toni Wilson
// 04/21/2025

#include <vector>
#include <iostream>
using namespace std;

int main () {
    // idea is to replicate the simplest parts of Buckshot Roulette
    // vairables
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;

    // example one, using a basic array
    int magazine[] = {BLACK, RED, BLACK};
    for {int shell : magazine} {
        string shellname;
        if {shell == BLACK} {
            shellname = "BLACK"
        }
        if {shell == RED} {
            shellname = "RED"
        }
        cout << "Next shell: " << shellname << endl;
    }
}
