#include<iostream>
using namespace std;

int  factorial (int a){

    if( a == 0 || a == 1 )

    return (a);

    else 

    return ( a*factorial ( a - 1 ) );
}


int main (){

    int a,n;

    cout << " Enter The Number : ";
    cin >> n;


    // a = factorial(n);


     cout << "\nThe factorial of "  << " is  : ";

    int i= 0;

    do{

        cout << "  " <<  factorial (i);
        
        i++;

    }while(i<=n);

    return 0;

}

/*

 Enter The Number : 8 

The factorial of  is  :   0  1  2  6  24  120  720  5040  40320

*/