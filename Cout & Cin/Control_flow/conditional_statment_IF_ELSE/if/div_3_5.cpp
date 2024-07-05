#include<iostream>
using namespace std;

int main (){
    
    int a;
    
    cout<<"\nEnter the value To check number divisible by 3 & 5:";
    cin >>a;

    if(a%3 == 0){
        cout<<"\n";
        cout<<a<<" Its Divisiable by 3";
    }

        if(a%5 == 0){
        cout<<"\n";
        cout<<a<<" Its Divisiable by 5";
    }

        if(a%3 == 0 && a%5 == 0){
        cout<<"\n";
        cout<<a<<" Its Divisiable by 3 and 5 ";
    }

}