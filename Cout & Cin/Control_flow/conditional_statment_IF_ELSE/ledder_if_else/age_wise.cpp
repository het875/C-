#include<iostream>
using namespace std;

int main (){
    
    int a;

   
    cout<<"\nEnter Your Age :";
    cin >>a;

    if(a<=14){
        cout<<a<<" This is children Age ";
    }else if(a<=24){
        cout<<a<<" This is Erly Working Age ";
    }else if(a<=54){
        cout<<a<<" This is prime working Age ";
    }else if(a<=64){
        cout<<a<<" This is muture Age ";
    }else{
        cout<<a<<" This age is Elderly";    
    }


}