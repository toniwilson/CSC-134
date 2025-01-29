// CSC 134
// Toni Wilson
// M2T1 - The Apple Orchard
// 01-29-2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Apple sales program
    // Variables are like mailboxes
    string farm_name = "Toni's";// name it whatever
    int num_apples = 10;
    double cost_each = 0.25;
    // new varibales for M2T1
    string user_name; // Who is buying apples?
    int apples_to_buy; // How many do they want

    // Greet the customers
    cout << "Hello! What's your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    cout << "Welcome to " << farm_name <<  " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    cout << setprecision(2) << fixed;

    // Find total price
    double total_cost = num_apples * cost_each;
    cout << "The price for all of them is : $ " << total_cost << endl;

    // Deal
    cout << "How many apples would you like?";
    cin >> apples_to_buy;

    total_cost = apples_to_buy * cost_each;
    cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_cost << endl;
    cout << "Have a nice day!" << endl;

    cout << endl;
    return 0; // no errors
}