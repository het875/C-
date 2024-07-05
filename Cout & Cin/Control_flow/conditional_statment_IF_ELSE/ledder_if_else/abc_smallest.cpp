#include<iostream>
using namespace std;

int main (){
    
    int a,c,b,d;

   
    cout<<"\nEnter the value of A:";
    cin >>a;
    cout<<"\nEnter the value of B: ";
    cin >>b;      
    cout<<"\nEnter the value of C: ";
    cin >>c;       
    cout<<"\nEnter the value of D: ";
    cin >>d;  

    if(a<b && a<c && a<d){
        cout<<a<<" A is Smallest ";
    }else if(b<c && b<d && b<a){
        cout<<b<<" B is Smallest ";
    }else if(c<a && c<b && c<d){
        cout<<c<<" C is Smallest ";
    }else{
        cout<<d<<" D is Smallest ";
    }

}