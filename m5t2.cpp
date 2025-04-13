// CSC 134
// M5T2
// Toni Wilson
// 03/26/2025

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int num, int squared);

int main()
{
    // Print header with clear column labels
    cout << "+------------------------+\n";
    cout << "| Number      Square     |\n";
    cout << "|------------------------|\n";
    
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Calculate the square using the square function
        int squared = square(i);
        
        // Print the line using the printAnswerLine function
        printAnswerLine(i, squared);
    }
    
    cout << "+------------------------+\n";
    
    return 0;
}

int square(int num)
{
    return num * num;
}

void printAnswerLine(int num, int squared)
{
    cout << "| " << setw(6) << num << " | " << setw(13) << squared << " |" << endl;
}