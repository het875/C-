#include<iostream>
using namespace std;

int main (){

    int a[4][2] = {{10,11},{20,21},{30,31},{40,41}};
    int i,j;

    cout<<"2d Array Simple example \n";

    for(i=0; i<3; i++){

        for(j=0; j<2; j++)
            {
                cout<<"\t"<<a[i][j];
            }
    cout<<"\n";
    }
}