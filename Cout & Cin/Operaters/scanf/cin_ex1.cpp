#include<iostream>
using namespace std;

int main (){
    
    int maths,eco,stat,sum;
    float per;

    // cout<<"Hello world \n";

    cout<<"\nEnter the marks Of Maths:";
    cin >>maths;
    cout<<"\nEnter the value Of Eco: ";
    cin >>eco;
    cout<<"\nEnter the value Of Stat: ";
    cin >>stat;
      

    cout<<"\nThe value marks of Maths:"<<maths;
    cout<<"\nThe value marks of Eco:"<<eco;
    cout<<"\nThe value marks of Stat:"<<stat;

    sum=maths+eco+stat;

    cout<<"\n\n The totl marks: "<<sum;


    per=sum*100/300;
    cout<<"\n\n per is : "<<per;


}