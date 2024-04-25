#include <iostream>  // Include the input/output stream library
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;  // Use the standard namespace

int main() {  // Main function
     // Seed the random number generator with the current time
    srand(time(0));  
   
     // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12; 

    // Output message based on conditions
    // Check if daysUntilExpiration is less than or equal to 0
    if (daysUntilExpiration <= 0) { 
        // Output message for expired subscription 
        cout << "Your subscription has expired." <<endl; 
// Check if daysUntilExpiration is less than or equal to 1
    } else if (daysUntilExpiration <= 1) { 
        // Output message for subscription expiring within a day 
        cout << "Your subscription expires within a day!" << endl;  
        cout << "Renew now and save 20%!" << endl;
        // Check if daysUntilExpiration is less than or equal to 5
} else if (daysUntilExpiration <= 5) { 
     // Output message for subscription expiring within 5 days
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;  
        cout << "Renew now and save 10%!" << endl;
         // Check if daysUntilExpiration is less than or equal to 10
    } else if (daysUntilExpiration <= 10) { 
        // Output message for subscription expiring within 10 days
        cout << "Your subscription will expire soon. Renew now!" << endl;  
        // If none of the above conditions are met
    } else { 
        // Output message for active subscription 
        cout << "You have an active subscription." << endl;  
    }
// Return 0 to indicate successful execution of the program

    return 0;  
}