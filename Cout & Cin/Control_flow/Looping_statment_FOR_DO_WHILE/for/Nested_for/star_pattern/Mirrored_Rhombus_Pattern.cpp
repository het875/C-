#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

        for(i=1; i<=n; i++)
        {
        
            for(j=i; j>=1; j--){
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