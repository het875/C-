#include<iostream>
using namespace std;

int main (){
    
    int i,j,n=5,k;

   //  cout<<"\nEnter the value :";
    // cin >>n;

        for(i=1; i<=n; i++)
        {
        
            for(j=n; j>=i; j--){
                cout<<" ";
            }
        
            for(k=1; k<=5; k++){
                cout<<" *";
            }

        cout<<"\n";
    }

} 

/*

Enter the value :5

      * * * * *
     * * * * *
    * * * * *
   * * * * *
  * * * * *


*/