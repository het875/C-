#include<iostream>
using namespace std;

int main(){

    int i,n,sum=0;

    cout<<"Enter the Size of Array :";
    cin>>n;

    cout<<endl;

    int a[n];

    for(i=0; i<n; i++){
        cout<<"Enter the value of arry "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<endl;

    for(i=0; i<n; i++){
        cout<<"the value of arry "<<i+1<<": "<<a[i]<<endl;

    }

    for(i=0; i<n; i++){
        sum+=a[i];
         //cout<<"the value of arry "<<i+1<<": "<<a[i]<<endl;
        cout<<"\nThe sum of array "<<i<<"+"<<i+1<<" is" <<": "<<sum;
    }
        cout<<endl;
        cout<<"\n TOtal Array Sum is :"<<sum;

    return 0;
}

/*

Enter the Size of Array :5

Enter the value of arry 1: 15
Enter the value of arry 2: 20
Enter the value of arry 3: 16
Enter the value of arry 4: 20
Enter the value of arry 5: 16

the value of arry 1: 15
the value of arry 2: 20
the value of arry 3: 16
the value of arry 4: 20
the value of arry 5: 16

The sum of array 0+1 is: 15
The sum of array 1+2 is: 35
The sum of array 2+3 is: 51
The sum of array 3+4 is: 71
The sum of array 4+5 is: 87

 TOtal Array Sum is :87


*/