// CSC 134
// M5HW1 QUESTION FOUR
// Toni Wilson
// 4/13/2025

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int choice;
    
    // Display menu
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    // Validate menu choice
    if (choice < 1 || choice > 4) {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
        return 0;
    }
    
    // Process the user's choice using if-else statements
    if (choice == 1) {  // Circle
        double radius;
        cout << "Enter the circle's radius: ";
        cin >> radius;
        
        // Validate radius
        if (radius < 0) {
            cout << "The radius cannot be less than zero.\n";
            return 0;
        }
        
        // Calculate and display area
        double area = PI * radius * radius;
        cout << "The area is " << area << endl;
    }
    else if (choice == 2) {  // Rectangle
        double length, width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;
        
        // Validate length and width
        if (length < 0 || width < 0) {
            cout << "The length and width cannot be less than zero.\n";
            return 0;
        }
        
        // Calculate and display area
        double area = length * width;
        cout << "The area is " << area << endl;
    }
    else if (choice == 3) {  // Triangle
        double base, height;
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;
        
        // Validate base and height
        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height.\n";
            return 0;
        }
        
        // Calculate and display area
        double area = base * height * 0.5;
        cout << "The area is " << area << endl;
    }
    else if (choice == 4) {  // Quit
        cout << "Exiting program...\n";
    }
    
    return 0;
}