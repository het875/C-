#include<iostream>
using namespace std;

int sum (int n){

    int s=0,a; 

    cout << "the number is :  ";

    if( n==0 ){

        return 0;
    }

    n++;
    s+=sum(n);


}


int main (){

    int n;

    cout << " enter the number : ";
    cin >> n;
    
    sum(n);

    return 0;

}
