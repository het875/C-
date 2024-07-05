#include<iostream>
using namespace std;

int main (){
    
    int a,b,c,ans;
    
    cout<<"\nenter the value of A:";
    cin >>a;
    cout<<"\nenter the value of B: ";
    cin >>b;      
    cout<<"\nenter the value of C: ";
    cin >>c;  

   ans=(a<b && a<c)?a:(b<a && b<c)?b:c;

    cout<<ans<<" Is smallest";

/*

    a<b && a<c ? cout << "A is smallest": b<c? cout <<"B is smallest" : cout<< "C is smallest";

*/

}