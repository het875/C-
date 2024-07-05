#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    a = a*b;
    b = a/b;
    a = a/b;

    cout << "Swape Value of A: " <<a << "\nSwape Value of B: " <<b;

}