#include<iostream>
using namespace std;

int main (){

    int i,j,k,v;
    int a[100][100];//={{1,2,3},{4,5,6},{7,8,9}};
    int b[100][100];//={{11,12,13},{14,15,16},{17,18,19}};
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
            cout<<" "<<a[i][j]<<" ";
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            cout<<" "<<b[i][j]<<" ";
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<"  "<<c[i][j];
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            d[i][j]=a[i][j]-b[i][j];
            cout<<"  "<<d[i][j];
        }
        cout<<"\t";

        for(j=0; j<v; j++){
            e[i][j]=a[i][j]*b[i][j];
            cout<<"  "<<e[i][j];
        }
        cout<<endl;
    }    
        
}

/*

Enter the value : 3

 Enter the value : 3

Enter the elements 1 [1] : 5
Enter the elements 1 [2] : 6
Enter the elements 1 [3] : 4
Enter the elements 1 [1] : 8
Enter the elements 1 [2] : 9
Enter the elements 1 [3] : 2

Enter the elements 2 [1] : 3
Enter the elements 2 [2] : 4
Enter the elements 2 [3] : 5
Enter the elements 2 [1] : 6
Enter the elements 2 [2] : 7
Enter the elements 2 [3] : 8

Enter the elements 3 [1] : 9
Enter the elements 3 [2] : 2
Enter the elements 3 [3] : 5
Enter the elements 3 [1] : 6
Enter the elements 3 [2] : 4
Enter the elements 3 [3] : 8


 1st Elements    2nd Elements    Total of Array  Minus Of Array  Multipy of Array
 5  6  4         8  9  2          13  15  6       -3  -3  2       40  54  8
 3  4  5         6  7  8          9  11  13       -3  -3  -3      18  28  40
 9  2  5         6  4  8          15  6  13       3  -2  -3       54  8  40
 


*/