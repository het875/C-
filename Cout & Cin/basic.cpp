/*
    stdio.h   => iostream


    printf()  => cout 
                    <<  => insetion operator
                    ::  => scope resoluation operator

    scanf()   => cin 
                    >>  => extersion opertator                


*/


#include<iostream>
using namespace std;

int main (){
    
    int a,b,c;

    cout<<"Hello world \n";
    cout<<"\nenter the value of A:";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      

    cout<<"\nThe value of A:"<<a;
    cout<<"\nThe value of B:"<<b;


    cout<<"\n\n THe value of A+B: "<< a+b;

    cout<<"\n\n THe value of A-B: "<< a-b;

    cout<<"\n\n THe value of A*B: "<< a*b;

    cout<<"\n\n THe value of A/B: "<< a/b;

    cout<<"\n\n THe value of A%B: "<< a%b;


}