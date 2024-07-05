#include<iostream>
using namespace std;

int main (){
    
    int i,n,a=1,b=1,c;
    
    cout<<"\nEnter the value :";
    cin >>n;

    cout<<a<<" "<<b<<" ";

    for(i=3; i<=n; i++){

        c=a+b;

        cout<<c<<" ";  

        a=b;
        b=c;
    }

} 

/*

Enter the value :10
1 1 2 3 5 8 13 21 34 55




#include <iostream>
using namespace std;
int main()
{
    int i, n, f=1, s=1, next;

    cout <<"Enter the term you want to print: ";
    cin >> n;

    cout <<f <<" " <<s <<" ";

    for (i = 1; i <= n-2; i++)
    {
        next = f + s;
        cout <<next <<" ";
        f = s;
        s = next;
    }
    
}




Enter the term you want to print: 5
1 1 2 3 5 8 13 



*/