#include<iostream>
using namespace std;

int main (){

    int i,n,oddsum=0,evensum=0;

    cout<<"Enter the start of the range: ";
    cin>>n;

    int a[n];

    cout<<endl;

    for(i=0; i<n; i++){
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<endl;

    for(i=0; i<n; i++){
        cout<<"The Enter value is :"<<a[i]<<"\n";
    }
    cout<<endl;

    for(i=0; i<n; i++){

        if(i%2==0){

            evensum+=a[i];

        }else{

            oddsum+=a[i];

        }
    }

    cout<<"The Sum of even number :"<<evensum;
    cout<<"\n\nThe sum of odd number :"<<oddsum;

}

/*

Enter the start of the range: 7

Enter the value 1 : 55
Enter the value 2 : 22
Enter the value 3 : 33
Enter the value 4 : 12
Enter the value 5 : 65
Enter the value 6 : 95
Enter the value 7 : 84

The Enter value is :55
The Enter value is :22
The Enter value is :33
The Enter value is :12
The Enter value is :65
The Enter value is :95
The Enter value is :84

The Sum of even number :237

The sum of odd number :129

*/