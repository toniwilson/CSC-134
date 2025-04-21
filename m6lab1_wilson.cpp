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
    int magazine[] = {RED, RED, RED, BLACK};
    for (int shell : magazine) {
        string shellname;
        if (shell == BLACK) {
            shellname = "BLACK";
        }
        if (shell == RED) {
            shellname = "RED";
        }
        cout << "Next shell: " << shellname << endl;
    }

    // example two, using a vector
    // .size() tells you how many items are in the vector
    // .push_back() adds an item to the back (end) of the vector
    // .pop_back() removes an item from the back (end) of the vector

    vector<int> mag;
    // LOAD MAG
    mag.push_back(BLACK);
    mag.push_back(RED);
    mag.push_back(BLACK);
    int num_shells = mag.size();

    // LOOK AT SHELL BEFORE YOU EJECT IT
    int current_shell = mag.at(num_shells - 1);
    cout << "Next shell: " << current_shell << endl;

    // EJECT A SHELL
    mag.pop_back(); // this removes the shell
    num_shells--;

    // REPEAT
    current_shell = mag.at(num_shells - 1);
    cout << "Next Shell: " << current_shell << endl;
    mag.pop_back(); // removes last shell
    cout << "Mag contains " << mag.size() << " shells." << endl;
    cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;

    return 0;
}
