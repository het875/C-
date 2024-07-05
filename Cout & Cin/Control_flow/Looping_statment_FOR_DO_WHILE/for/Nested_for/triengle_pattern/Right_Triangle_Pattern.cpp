#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;


        for(i=n; i>=1; i--){    

            for(j=i; j<=n; j++){

                cout<<" *";

            }
            cout<<"\n";
        } 

} 

/*

Enter the value :5

 *
 * *
 * * *
 * * * *
 * * * * *

*/