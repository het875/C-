#include<iostream>
using namespace std;

int main (){

    int i,j;
    char a[100];

    cout<<"Enter the string : ";
    cin.getline(a,100);

    cout<<"the string : "<<a;

    i=0;
    while(a[i]!='\0'){
        i++;
    }
        cout<<endl;

    while(i>=0){
        cout<<a[i];
        i--;
    }

    
   /*for(j=i; j>=0; j--){
        
        cout<<str[i];
    }
    */

}


/*

Enter the string : het lathiya

the string : het lathiya

ayihtal teh

*/