#include<iostream>
using namespace std;

int main (){

    int i,j,k,v;
    int a[100][100];//={{0,2,3},{4,0,0},{7,0,9}};
    int b[100][100];//={{11,0,13},{0,15,0},{0,18,0}};
    int c[100][100];
    int d[100][100];
    int e[100][100];

    cout<<" Enter the value : ";
    cin>>k;

    cout<<endl;

    cout<<" Enter the value : ";
    cin>>v;

    cout<<endl;

    for(i=0; i<k; i++){

        for(j=0; j<v; j++){
            cout<<"Enter the elements "<<i+1<<" ["<<j+1<<"] : ";
            cin>>a[i][j];
        }

        for(j=0; j<v; j++){
            cout<<"Enter the elements "<<i+1<<" ["<<j+1<<"] : ";
            cin>>b[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<" 1st Elements \t 2nd Elements \t Total of Array\t Minus Of Array\t Multipy of Array";

    cout<<endl;

    for(i=0; i<k; i++){

        for(j=0; j<v; j++){

            if(a[i][j]!=0){
            cout<<" "<<a[i][j]<<" ";
            }else{
                cout<<" "<<"_"<<"  ";
            }
        }
        cout<<"\t";

        for(j=0; j<v; j++){
           if(b[i][j]!=0){
            cout<<" "<<b[i][j]<<" ";
            }else{
                cout<<" "<<"_"<<"  ";
            }
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            c[i][j]=a[i][j]+b[i][j];
            if(c[i][j]!=0){
            cout<<" "<<c[i][j]<<" ";
            }else{
                cout<<" "<<"_"<<"  ";
            }
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            d[i][j]=a[i][j]-b[i][j];
    
            if(d[i][j]!=0){
            cout<<" "<<d[i][j]<<" ";
            }else{
                cout<<" "<<"_"<<"  ";
            }
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            e[i][j]=a[i][j]*b[i][j];
            
            if(e[i][j]!=0){
            cout<<" "<<e[i][j]<<" ";
            }else{
                cout<<" "<<"_"<<"  ";
            }
        }
        cout<<endl;
    }    
        
}
/*

Enter the value : 3

 Enter the value : 3

Enter the elements 1 [1] : 2
Enter the elements 1 [2] : 5
Enter the elements 1 [3] : 6
Enter the elements 1 [1] : 7
Enter the elements 1 [2] : 8
Enter the elements 1 [3] : 0

Enter the elements 2 [1] : 5
Enter the elements 2 [2] : 0 
Enter the elements 2 [3] : 5
Enter the elements 2 [1] : 0
Enter the elements 2 [2] : 6
Enter the elements 2 [3] : 4

Enter the elements 3 [1] : 9
Enter the elements 3 [2] : 0
Enter the elements 3 [3] : 5
Enter the elements 3 [1] : 6
Enter the elements 3 [2] : 0
Enter the elements 3 [3] : 2


 1st Elements    2nd Elements    Total of Array  Minus Of Array  Multipy of Array
 2  5  6         7  8  _         9  13  6        -5  -3  6       14  40  _
 5  _   5        _   6  4        5  6  9         5  -6  1        _   _   20
 9  _   5        6  _   2        15  _   7       3  _   3        54  _   10

*/