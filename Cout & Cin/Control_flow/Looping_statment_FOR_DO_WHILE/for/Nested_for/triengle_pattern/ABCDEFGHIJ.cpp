#include<iostream>
using namespace std;

int main (){
    
    char i,j,a=65;


    for(i=1; i<=5; i++){
        
        for(j=1; j<=i; j++){
            
            cout<<a<<"\t";
            a++;

        }
        cout<<"\n";
    }

} 

/*

A
B       C
D       E       F
G       H       I       J
K       L       M       N       O

*/