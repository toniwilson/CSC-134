// CSC 134
// M2HW1
// Wilson Toni
// Question 3: Pizza Party

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    int numPizzas, slicesPerPizza, numVisitors;

    // pizzas ordered
    cout << "How many pizzas did you order? ";
    cin >> numPizzas;

    // slices per pizza
    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;

    // number of visitors
    cout << "How many visitors are coming? ";
    cin >> numVisitors;

    // total slices
    int totalSlices = numPizzas * slicesPerPizza;
    int slicesNeeded = numVisitors * 3; // 3 slices per visitor
    int slicesLeftOver = totalSlices - slicesNeeded;

    // display results
    cout << "\nPizza Party Summary\n";
    cout << ".....................\n";
    cout << "Total slices per pizza: " << totalSlices << endl;
    cout << "Slices needed for visitors: " << slicesNeeded << endl;
    cout << "Slices left over: " << slicesLeftOver << endl;

    return 0;
}