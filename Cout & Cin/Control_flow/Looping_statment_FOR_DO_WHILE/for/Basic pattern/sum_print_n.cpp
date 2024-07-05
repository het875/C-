#include<iostream>
using namespace std;

int main (){
    
    int a,i,sum=0;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i =1; i<=a; i++ ){
        cout<<i<<"\n";

        sum=sum+i;
    }

    cout<<"\nSum is :"<<sum<<"\n";

} 

/*

Enter the value :10
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

Sum is :55

*/