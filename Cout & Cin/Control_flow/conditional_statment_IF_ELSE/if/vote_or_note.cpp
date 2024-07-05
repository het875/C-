#include<iostream>
using namespace std;

int main (){
    
    int a;

   
    cout<<"\nEnter your age :";
    cin >>a;    

    if(a<18){
    cout<<a<<" Can't Vote";
    }
    if(a>=18){
    cout<<a<<" Can Vote";
    }


}