#include <iostream>  // Input/output stream library
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;  // Use the standard namespace

int main() {  // Main function
// Seed the random number generator with the current time
    srand(time(0)); 
    // Generate a random number between 0 and 11 
    int daysUntilExpiration = rand() % 12;  

    // Output message based on conditions using switch statement
    switch(daysUntilExpiration) {
        case 0:
        // Output message if daysUntilExpiration is 0
            cout << "Your subscription has expired." << endl;  
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;  
            // Output message if daysUntilExpiration is 1
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
         // Output message if daysUntilExpiration is between 2 and 5
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl; 
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        // Output message if daysUntilExpiration is between 6 and 10
            cout << "Your subscription will expire soon. Renew now!" << endl;  
            break;
        default:
        // Output message for any other value of daysUntilExpiration
            cout << "You have an active subscription." << endl;  
    }
 // Return 0 to indicate successful execution of the program
    return 0; 
}
