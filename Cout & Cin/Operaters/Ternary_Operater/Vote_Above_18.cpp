#include <iostream>
using namespace std;

int main ()
{
    
   int age;

    cout<<"\nenter your Age: ";
    cin >>age;
    
    (age<18)?cout<<"You are not Eligible to Vote":cout<<"You are Eligible to Vote";

}