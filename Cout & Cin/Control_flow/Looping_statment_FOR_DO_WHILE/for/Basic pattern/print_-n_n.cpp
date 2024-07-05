#include<iostream>
using namespace std;

int main (){
    
    int a,i,sum=0;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i= -a; i<=a; i++ ){
        cout<<i<<"\n";

        sum=sum+i;
    }

} 

/*

Enter the value :10
-10
-9
-8
-7
-6
-5
-4
-3
-2
-1
0
1
2
3
4
5
6
7
8
9
10

*/