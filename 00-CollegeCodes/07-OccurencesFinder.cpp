#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// A function to print the frequency of each character in a string
void printFrequency(string s) {
    // An array to store the frequency of each character
    int freq[256] = {0};
    // Loop through the string and convert it to lower case
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    // Loop through the string and increment the frequency of each character
    for (int i = 0; i < s.length(); i++) {
        freq[(int)(s[i])]++;
    }
    // Loop through the array and print the non-zero frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }
}

// The main function
int main() {
    // A variable to store the input from the user
    string str;
    // Prompt the user to enter a string
    cout << "Enter a string:";
    // Read the input
    getline(cin, str);
    // Call the function to print the frequency
    printFrequency(str);
    // Return 0 to indicate success
    return 0;
}
