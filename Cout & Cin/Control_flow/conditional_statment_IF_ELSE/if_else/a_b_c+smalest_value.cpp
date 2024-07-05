#include<iostream>
using namespace std;

int main (){
    
    int a,b,c;

   
    cout<<"\nenter the value of A:";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      
    cout<<"\nenter the value of c: ";
    cin >>c;      

    if(a<b && a<c){
        cout<<a<<"  A Is smallest";
    }else{
        if(b<a && b<c){
            cout<<b<<" B Is smallest";
        }else{
            cout<<c<<" C Is smallest";
        }

    }


}