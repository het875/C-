#include<iostream>
using namespace std;

int main()  
{  
    int n;  
     cout<<"Enter the number of rows in your pattern: ";  
     cin >>n;

    for(int i = n; i >= 1; i--)  {  

        for(int j = 1; j <= i; j++)  {  

            if(j == 1 || j == i || i == n)  
                cout<<"*";  
            else  
                cout<<" ";    
        }  
                cout<<"\n";    
    }   
    return 0;  
}  

/*

Enter the number of rows in your pattern: 10

**********
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*

*/