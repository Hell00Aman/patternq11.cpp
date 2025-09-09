#include<bits/stdc++.h>  
using namespace std;  

// Function to print a binary number pattern
void print11(int n) {
    int start = 1; // Variable to decide whether to start a row with 1 or 0

    // Outer loop for number of rows (0 to n-1)
    for (int i = 0; i < n; i++) {
        
        // If row number is even, start with 1; else start with 0
        if (i % 2 == 0) 
            start = 1;
        else 
            start = 0;

        // Inner loop prints numbers for each row
        for (int j = 0; j <= i; j++) {
            cout << start;        // Print current value (0 or 1)
            start = 1 - start;    // Flip value: 1 becomes 0, 0 becomes 1
        }

        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int n;           // Variable to store user input
    cin >> n;        // Take number of rows as input from user
    print11(n);      // Call function to print the pattern
    return 0;        // Exit program successfully
}
