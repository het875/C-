#include<iostream>
using namespace std;

int main (){

    int i,j;
    char a[100];

    cout<<"Enter the String : ";
    cin.getline(a,100);

    cout<<"\nThe string is : "<<a;

    i=0;
    while(a[i]!='\0'){
        i++;
    }
    cout<<"\n\nThe charcter in this string : "<<i;
}

/*

Enter the String : het lathiya 

The string is : het lathiya

The charcter in this string : 11

*/