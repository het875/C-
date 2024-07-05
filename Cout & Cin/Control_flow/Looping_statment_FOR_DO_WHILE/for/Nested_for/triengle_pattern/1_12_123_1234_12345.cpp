#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=65;


    for(i=1; i<=5; i++){
        
        for(j=1; j<=i; j++){
            
            cout<<j<<"\t";
            

        }
        cout<<"\n";
    }

} 

/*

1
1       2
1       2       3
1       2       3       4
1       2       3       4       5


*/