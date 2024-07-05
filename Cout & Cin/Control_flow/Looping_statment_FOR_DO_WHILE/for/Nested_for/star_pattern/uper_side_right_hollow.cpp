#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

        for(i=n; i>=1; i--){
        
        for(j=1; j<=i; j++){

            cout<<" ";
        }
        for(k=i; k<=n; k++){

           if(k==1 || k==n || n==j || i==1 || i==k){    
                cout<<"*";
            }else{
                cout<<" ";
            }

        }

        cout<<"\n";
    }

} 

/*

Enter the value :10
          *
         **
        * *
       *  *
      *   *
     *    *
    *     *
   *      *
  *       *
 **********

*/