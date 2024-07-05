
// A program to display the Fibonacci series up to a given number n

#include <iostream>
using namespace std;

int main() {


    int n, current = 0, previous = 1, next = 0;

    
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Fibonacci Series: " << current << ", ";
    

    while (current + previous <= n) {
        
        next = current + previous;
        
        cout << next << ", ";
        
        current = previous;

        previous = next;
    }
    
    cout << endl;

    return 0;
}
