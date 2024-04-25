#include <iostream>  // Include the input/output stream library

using namespace std; 

int main() { 
    // Declare a variable to store user input 
    int user_input;  
// Enter an infinite loop
    while (true) {  
        // Prompt the user to enter an integer
        cout << "Please enter an integer value between 5 and 10: ";  
        cin >> user_input;  // Read user input from the console
// Check if input is not an integer or outside the specified range
        if (cin.fail() || user_input < 5 || user_input > 10) {  
              // Prompt the user to re-enter a valid integer
            cout << "Please enter an integer value between 5 and 10." << endl;
            // Clear the error flag on cin
            cin.clear(); 
            // Ignore any remaining characters in the input buffer 
            cin.ignore(10000, '\n'); 
            // If input is valid 
        } else {  
            // Inform the user that their input has been accepted
            cout << "Your input value has been accepted." << endl;  
            break;  // Exit the loop
        }
    }
// Return 0 to indicate successful execution of the program
return 0; 
}
     

