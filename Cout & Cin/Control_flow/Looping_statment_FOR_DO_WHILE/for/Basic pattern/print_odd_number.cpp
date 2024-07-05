#include<iostream>
using namespace std;

int main (){
    
    int a,i;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i=1; i<=a; i++ ){
        if(i%2!=0){
        cout<<i<<"\n";
        }
    }

} 

/*

Enter the value :10
1
3
5
7
9


*/