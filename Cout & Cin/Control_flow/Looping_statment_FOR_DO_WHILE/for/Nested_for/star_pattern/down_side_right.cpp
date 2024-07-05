#include<iostream>
using namespace std;

int main (){
    
    int i,j,n;

     cout<<"\nEnter the value :";
     cin >>n;

     for(i=1; i<=n; i++){
        
        for(j=i; j<=n; j++){

            cout<<"*"<<" ";
            

        }
        cout<<"\n";
    }

} 

/*

Enter the value :10

* * * * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*


*/