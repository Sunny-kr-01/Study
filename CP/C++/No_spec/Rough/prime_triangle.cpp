#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int rows;
    int count = 2;  // Starting from the first prime number

    // Ask user for number of rows in the triangle
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    cout << "Prime number triangle: " << endl;

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            // Find the next prime number
            while (!isPrime(count)) {
                count++;
            }
            cout << count << " ";
            count++;  // Move to the next number
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
