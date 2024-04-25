#include <iostream>   // Input/output stream library
#include <fstream>    // File stream library
#include <string>     // String library
#include <algorithm>  // Algorithm library for string manipulation functions

using namespace std; 

// Function to count vowels in a given string
int countVowels(const string& str) {
    // Initialize a counter for vowels
    int count = 0; 
    
    // Check if the character is a vowel (case insensitive) and increment the counter if true
    for(char c : str) {  
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
            count++;
    }
    return count;
}

// Function to count words in a given string
int countWords(const string& str) {
    // Initialize a counter for words
    int count = 0;
    // Initialize a flag to indicate whether we are inside a word
    bool inWord = false;
    // Iterate through each character in the string
    for(char c : str) {
        // Check if the character is alphabetic
        if(isalpha(c)) {
            // If not already inside a word, increment the word count and set the inWord flag to true
            if(!inWord) {
                count++;
                inWord = true;
            }
        } else {
            // If the character is not alphabetic, set the inWord flag to false
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a given string
string reverseString(const string& str) {
    // Create a copy of the input string
    string reversed = str;
    // Use the algorithm library to reverse the copy
    reverse(reversed.begin(), reversed.end());
    // Return the reversed string
    return reversed;
}

// Function to capitalize the second letter of each word in a given string
string capitalizeSecondLetter(const string& str) {
    // Create a copy of the input string
    string result = str;
    // Initialize a flag to track when to capitalize
    bool capitalize = false;
    // Iterate through each character in the string
    for(char& c : result) {
        // Check if the character is alphabetic
        if(isalpha(c)) {
            // If it's time to capitalize
            if(capitalize) {
                // Capitalize the character
                c = toupper(c);
                // Reset the flag
                capitalize = false;
            } else {
                // Set the flag for the next character
                capitalize = true;
            }
        } else {
            // Reset the flag if the character is not alphabetic
            capitalize = false;
        }
    }
    // Return the modified string with the second letters capitalized
    return result;
}

// Main function
int main() {
    // Open the file named "bed-com-47-22.txt" for reading
    ifstream file("bed-com-47-22.txt");
    // Check if the file is successfully opened
    if(file.is_open()) {
        // Declare a variable to store the content of the file
        string fileData;
        // Read the content of the file into the variable
        getline(file, fileData);

        // Call the function to count vowels
        int vowels = countVowels(fileData);
        // Output the result to the console
        cout << "Number of vowels: " << vowels << endl;

        // Call the function to count words
        int words = countWords(fileData);
        // Output the result to the console
        cout << "Number of words: " << words << endl;

        // Call the function to reverse the string
        string reversed = reverseString(fileData);
        // Output the result to the console
        cout << "Reversed statement: " << reversed << endl;

        // Call the function to capitalize second letters
        string capitalized = capitalizeSecondLetter(fileData);
        // Output the result to the console
        cout << "Capitalized statement: " << capitalized << endl;

        // Close the file after processing
        file.close();
    } else {
        // Output an error message if the file cannot be opened
        cout << "Unable to open file." << endl;
    }
    // Return 0 to indicate successful execution of the program
    return 0;
}
