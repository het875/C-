//sum of n to natural number  
#include<iostream>
using namespace std;

int sum(int n);

int main (){

    int n;

    cout << "Enter the number : ";
    cin >> n;


    cout << "The sum is :  "<< sum(n);
    cout << "\nThe series is :  ";


    for(int i=1; i<=n; i++){
    
        cout << "  " << sum(i);
    
    }

    return 0;
}


int sum(int n){

    int sumnum1,sumn;

    if(n == 1){

    return 1;

    }

    sumnum1 = sum(n-1);
    sumn = sumnum1 +n ;
    
    return sumn;

}

/*

Enter the number : 10

The sum is :  55

The series is :    1  3  6  10  15  21  28  36  45  55

*/