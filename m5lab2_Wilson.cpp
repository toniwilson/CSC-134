// CSC 134
// M5LAB2
// Toni Wilson
// 04/02/2025

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea();


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

    // varaibles
    double length;
	double width;
    double area;
    
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    // Ask user for the length
    cout << "Enter the length: " << endl;
    return 0;
}

double getWidth() {
    // Ask user for the width
    cout << "Enter the width: " << endl;
    return;
}

double getArea() {
    return;
}