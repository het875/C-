#include<iostream>
using namespace std;

int main()  
{  
    int n,j,k,i;  
    
    cout<<"Enter the number of rows in your pattern: ";  
    cin >>n;
     
    for(i=1; i<=n; i++)  {  

        for(j=n; j>=i; j--){  

            cout<<" ";

        }
        for(k=1; k<=i; k++){  

            cout<<"* ";

        }    

        cout<<"\n";    
    }   
    return 0;  
}  

/*

Enter the number of rows in your pattern: 10
          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
    * * * * * * *
   * * * * * * * * 
  * * * * * * * * *
 * * * * * * * * * *


*/