#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "Swape Value of A: " <<a << "\nSwape Value of B: " <<b;

}