#include <iostream>  // Include the input/output stream library
#include <string>    // Include the string library

using namespace std;  
 // Main function
int main() { 
    // Declare and initialize the array of strings
    string arra[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    // Calculate the number of elements in the array "arra"
    int arraSize = sizeof(arra) / sizeof(arra[0]); 
    // Iterate over each element in the array
    for(int loop = 0; loop < arraSize; ++loop)
    {
        // Check if the first character of the current element is 'B'
        if (arra[loop][0] == 'B')
        {
            // Print the current element if it starts with 'B'
            cout << arra[loop] << endl;
        }
    }
    // Return 0 to indicate successful execution of the program
    return 0;  
}
