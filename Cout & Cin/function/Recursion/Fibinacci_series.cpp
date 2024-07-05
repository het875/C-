// fibonacci series using Recurson

#include<iostream>
using namespace std;


int fibo (int a){
        
        if( ( a == 0 ) || ( a == 1 ) ){

            return (a);

        }else{

                return(fibo(a-1)+fibo(a-2));

        }
    
}


int main (){

    int a, i=0;

    cout << "Enter the number of series : ";
    cin >> a;

    cout << "\n Fibonaci series : ";


        for(i=0; i<a; i++){

            cout << " " << fibo(i);

        }

    return 0;
}


/*

Enter the number of series : 15

 Fibonaci series :  0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

*/