#include<iostream>
using namespace std;

int main (){
    
    int a, b, c;
    
    cout<<"\nenter the value of A: ";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      
    cout<<"\nenter the value of C: ";
    cin >>c;  

    (a<b && a<c)? cout<<"A Is smallest: "<<a : b<c? cout<<"B Is smallest: "<<b : cout<<"C Is smallest: "<<c;

    //(a<b && a<c)?cout<<"A Is smallest: "<<a : (b<a && b<c)?cout<<"B Is smallest: "<<b : cout<<"C Is smallest: "<<c;

}