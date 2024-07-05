#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

        for(i=1; i<=n; i++)
        {
        
            for(j=n; j>=i; j--){
                cout<<" ";
            }
        
            for(k=1; k<=n; k++){

                if(i==1 || i==n || k==1|| k==n){
                cout<<"*";
                }else{
                cout<<" ";

                }
            }

        cout<<"\n";
    }

} 

/*

Enter the value :5

     *****
    *   *
   *   *
  *   *
 *****

*/