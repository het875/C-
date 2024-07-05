#include<iostream>
using namespace std;

// A function to print the Fibonacci series up to a given number n
void fibonacci(int n) {

    // Declare and initialize the first two terms of the series
    int a = 0, b = 1;

    // Print the first term
    cout << a << " ";

    // Loop until the next term is less than or equal to n

    while (a + b <= n) {

        // Calculate the next term by adding the previous two terms
        int c = a + b;

        // Print the next term
        cout << c << " ";

        // Update the previous two terms
        a = b;
        b = c;
    }

    // Print a new line
    cout << "\n";
}


// A main function to test the fibonacci function
int main() {

    // Call the fibonacci function with n = 10
    fibonacci(10);

    // Output: 0 1 1 2 3 5 8
    return 0;
}
