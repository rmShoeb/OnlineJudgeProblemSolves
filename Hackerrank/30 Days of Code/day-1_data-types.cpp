#include <iostream>
#include <iomanip> // i have no idea why this header was included here by hackerrank
#include <limits>  // i have no idea why this header was included here by hackerrank

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    
    // Read and save an integer, double, and String to your variables.
    cin >> i2 >> d2;
    getline(cin, s2); // to bypass the "\n"
    getline(cin, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << (i+i2) << endl;
    
    // Print the sum of the double variables on a new line.
    // cout << double(d+d2) << endl; // got wrong answer with this, because cout was getting rid off the unnecessary zeros after decimal point
    printf("%0.1f\n", d+d2); // printf to the rescue
    
    // Concatenate and print the String variables on a new line
    cout << (s+s2);
    // cout << s2 << endl;
    // The 's' variable above should be printed first.

    return 0;
