#include <iostream> // Including the input/output stream library for standard I/O operations
#include <cmath>    // Including the cmath library for mathematical functions

using namespace std; 
// Function to calculate the area of a triangle
float triangleArea(float base, float height) {
    // Returning the area of the triangle using the formula: 0.5 * base * height
    return 0.5 * base * height; 
}
// Function to calculate the area of a rectangle
float rectangleArea(float length, float width) {
     // Returning the area of the rectangle using the formula: length * width
    return length * width;
}

// Function to calculate the area of a square
float squareArea(float side) {
    // Returning the area of the square using the formula: side * side
    return side * side; 
}

// Function to display menu and get user's choice
int getMenuChoice() {
    // Declaring a variable to store the user's choice
    int choice; 
     // Prompting the user to select a shape
    cout << "Select a shape to calculate the area:\n";
    // Displaying option 1: Triangle
    cout << "1. Triangle\n";
    // Displaying option 2: Rectangle 
    cout << "2. Rectangle\n"; 
    // Displaying option 3: Square
    cout << "3. Square\n"; 
    // Displaying option 4: Quit
    cout << "4. Quit\n"; 
    // Prompting the user to enter their choice
    cout << "Enter your choice: "; 
    // Reading the user's choice
    cin >> choice; 
    // Returning the user's choice
    return choice; 
}

int main() {
    // Declaring a variable to store the user's choice
    int choice;
    // Declaring variables to store dimensions of shapes 
    float base, height, length, width, side; 

    do {
        // Calling the function to display menu and get user's choice
        choice = getMenuChoice(); 
// Switching based on the user's choice
        switch (choice) { 
            case 1:
            // Prompting the user to enter dimensions of the triangle
                cout << "Enter base of the triangle: "; 
                cin >> base;
                // Reading base and height of the triangle
                cout << "Enter the height of the triangle: ";
                cin >> height; 
                // Displaying the area of the triangle
                cout << "Area of the triangle: " << triangleArea(base, height) << endl; 
                break;
            case 2:
            // Prompting the user to enter dimensions of the rectangle
                cout << "Enter length of the rectangle: "; 
                 // Reading length and width of the rectangle
                cin >> length;
                cout <<" Enter the width of rectangle: ";
                
                cin >> width;
                // Displaying the area of the rectangle
                cout << "Area of the rectangle: " << rectangleArea(length, width) << endl; 
                break;
            case 3:
            // Prompting the user to enter side length of the square
                cout << "Enter the side length of the square: "; 
                // Reading the side length of the square
                cin >> side; 
                // Displaying the area of the square
                cout << "Area of the square: " << squareArea(side) << endl; 
                break;
            case 4:
            // Displaying message indicating program exit
                cout << "Exiting program...\n"; 
                break;
            default:
            // Displaying message indicating program exit
                cout << "Invalid choice. Please enter a valid option.\n"; 
        }
        // Repeating the loop until the user chooses to quit
    } while (choice != 4); 
// Returning 0 to indicate successful execution of the program
    return 0; 
}
