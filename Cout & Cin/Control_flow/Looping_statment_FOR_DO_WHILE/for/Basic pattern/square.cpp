#include<iostream>
using namespace std;

int main (){
    
    int a,i,b;

   
    cout<<"\nEnter the value :";
    cin >>a;

    cout<<"\nEnter the table value :";
    cin >>b;

    for(i=1; i<=a; i++ ){

        cout<<b<<"\n";
        b=b*2;

    }
    
  

} 

/*

Enter the value :10

Enter the table value :2
2
4
8
16
32
64
128
256
512
1024


*/