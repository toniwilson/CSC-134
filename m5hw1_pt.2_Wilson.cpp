// CSC 134
// M5HW1 QUESTION TWO
// Toni Wilson
// 4/13/2025

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for dimensions
    double width, length, height, volume;
    
    // Get width with input validation
    cout << "Enter the width of the block: ";
    cin >> width;
    
    // Validate width (must be positive)
    while (width <= 0) {
        cout << "Error: Width must be greater than zero." << endl;
        cout << "Enter the width of the block: ";
        cin >> width;
    }
    
    // Get length with input validation
    cout << "Enter the length of the block: ";
    cin >> length;
    
    // Validate length (must be positive)
    while (length <= 0) {
        cout << "Error: Length must be greater than zero." << endl;
        cout << "Enter the length of the block: ";
        cin >> length;
    }
    
    // Get height with input validation
    cout << "Enter the height of the block: ";
    cin >> height;
    
    // Validate height (must be positive)
    while (height <= 0) {
        cout << "Error: Height must be greater than zero." << endl;
        cout << "Enter the height of the block: ";
        cin >> height;
    }
    
    // Calculate the volume
    volume = width * length * height;
    
    // Display the result
    cout << "\nVolume calculation for the block:" << endl;
    cout << "Width: " << width << endl;
    cout << "Length: " << length << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume << endl;
    
    return 0;
}