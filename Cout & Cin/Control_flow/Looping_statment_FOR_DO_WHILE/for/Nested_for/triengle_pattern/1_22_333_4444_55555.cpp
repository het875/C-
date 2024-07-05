#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=65;


    for(i=1; i<=5; i++){
        
        for(j=1; j<=i; j++){
            
            cout<<i<<"\t";
            

        }
        cout<<"\n";
    }

} 

/*

1
2       2
3       3       3
4       4       4       4
5       5       5       5       5

*/