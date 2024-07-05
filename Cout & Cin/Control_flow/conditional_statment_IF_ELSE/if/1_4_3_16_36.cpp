#include<iostream>
using namespace std;

int main (){
    
    int a,i;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i=1; i<=a; i++ ){

        if(i % 2 == 0){
            i=i*i;
            cout<<i<<"\n";
        }else{
            cout<<i<<"\n";
        }
    }
} 

/*



*/