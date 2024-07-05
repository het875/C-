#include<iostream>
using namespace std;

int main (){

    int j,i;
    
    char str1[100];
    char str2[100];

    cout<<"Enter the string 1 : ";
    cin.getline(str1, 100);

    cout<<"Enter the string 2 : ";
    cin.getline(str2, 100);

    cout<<"\nThe string 1 : "<<str1;
    cout<<"\nThe string 2 : "<<str2;

    i=0;
    while(str1[i]!='\0'){
        i++;
    }
    cout<<"\n\nThe fist sring lenghth is :"<<i<<"\n";

    j=0;
    while(str2[j]!='\0'){
        j++;
    }
    cout<<"The Secend sring lenghth is :"<<j<<"\n";

}


/*


Enter the string 1 : het lathiya
Enter the string 2 : hello world

The string 1 : het lathiya
The string 2 : hello world

The fist sring lenghth is :11
The fist sring lenghth is :11


*/