#include<iostream>
using namespace std;

int main (){

    int i,j,n;
    char str1[100];
    char str2[100];

    cout << "Enter String 1 : ";
    cin.getline(str1, 100);

    cout << "Enter String 2 : ";
    cin.getline(str2, 100);

   // cout<<"Enter the 1 string : ";
    // cin>>char(str1);

   // cout<<"Enter the 1 string : ";
    // cin>>char(str2);


    cout<<"\nThe fist sring is :"<<str1<<"\n";
    cout<<"The secend sring is :"<<str2<<"\n";

    i=0;

    while(str1[i]!='\0'){
        i++;
    }
    cout<<"\nThe langth of string 1 : "<<i;

    j=0;
    while(str2[j]!='\0'){
        j++;
    }
    cout<<"\nThe langth of string 2 : "<<j;

    for(j=0; str2[j]!='\0'; j++ , i++){
        str1[i]=str2[j];
    }
        str1[i]='\0';

    cout<<"\n\nBoth Merge string : "<<str1;    

}


/*

Enter String 1 : het 
Enter String 2 : lathiya

The fist sring is :het
The secend sring is :lathiya

The langth of string 1 : 3
The langth of string 2 : 7

Both Merge string : hetlathiya


*/