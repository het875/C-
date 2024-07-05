#include<iostream>
using namespace std;

int main (){
    
    int a;
    
    cout<<"\nEnter the value To check number divisible by 3 & 5:";
    cin >>a;

   (a% 5 == 0 || a% 3 == 0)?cout<<a<<" Its Divisiable":cout<<a<<" It's Not  Divisiable";;


}