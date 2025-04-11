// CSC 134
// M5LAB2
// Toni Wilson
// 04/02/2025
// Rectangle Area Calculator

#include <iostream>
#include <limits>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.
    
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
           
    // Get the rectangle's length.
    length = getLength();
    
    // Get the rectangle's width.
    width = getWidth();
    
    // Get the rectangle's area.
    area = getArea(length, width);
    
    // Display the rectangle's data.
    displayData(length, width, area);
            
    return 0;
}

//***************************************************
// Function implementations                         *
//***************************************************

double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    
    // Input validation
    while (cin.fail() || length <= 0) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a positive number for length: ";
        cin >> length;
    }
    
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    
    // Input validation
    while (cin.fail() || width <= 0) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a positive number for width: ";
        cin >> width;
    }
    
    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "\n========= Rectangle Data =========\n";
    cout << "Length: " << length << " units\n";
    cout << "Width: " << width << " units\n";
    cout << "Area: " << area << " square units\n";
    cout << "=================================\n";
}