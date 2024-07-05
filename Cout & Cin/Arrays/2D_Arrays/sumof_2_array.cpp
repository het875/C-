#include<iostream>
using namespace std;


int main () {

    int r,j,k,i;

    int a[100][100];//={{1,2,3},{4,5,6},{7,8,9}};
    int b[100][100];//={{1,2,3},{4,5,6},{7,8,9}};
    int c[100][100];

    cout<<"Enter the number of Rows : ";
    cin>>r;
    
    cout<<"Enter the number of Colluam : ";
    cin>>k;

    cout<<endl;
    //cout<<"1st Matrices \n";

    for(i=0; i<r; i++){

        for(j=0; j<k; j++){

        cout<<"Enter the elements "<<i+1<<" ["<<j+1<<"] : " ;
        cin>>a[i][j];
        }
    }

    cout<<endl;

    for(i=0; i<r; i++){    
        for(j=0; j<k; j++){
        cout<<"Enter the elements "<<i+1<<" ["<<j+1<<"] : " ;
        cin>>b[j][i];
        }
        
    }
    
    cout<<endl;

    cout<<"1st Matrices \t 2nd Matrices \t Total Array\n";

    for(i=0; i<r; i++){
        for(j=0; j<k; j++){
            cout<<" "<<a[i][j]<<" ";
        }

        cout<<"\t";

        for(j=0; j<k; j++){
            cout<<" "<<b[i][j]<<" ";
        }

        cout<<"\t";
        
        for(j=0; j<k; j++){

            c[i][j]=a[i][j]+b[i][j];
            cout<<" "<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*

Enter the number of Rows : 3
Enter the number of Colluam : 3

Enter the elements 1 [1] : 1
Enter the elements 1 [2] : 2
Enter the elements 1 [3] : 3
Enter the elements 2 [1] : 4
Enter the elements 2 [2] : 5
Enter the elements 2 [3] : 6
Enter the elements 3 [1] : 7
Enter the elements 3 [2] : 8
Enter the elements 3 [3] : 9

Enter the elements 1 [1] : 10
Enter the elements 1 [2] : 11
Enter the elements 1 [3] : 12
Enter the elements 2 [1] : 13
Enter the elements 2 [2] : 14
Enter the elements 2 [3] : 15
Enter the elements 3 [1] : 16
Enter the elements 3 [2] : 17
Enter the elements 3 [3] : 18

1st Matrices     2nd Matrices    Total Array
 1  2  3         10  13  16      11  15  19
 4  5  6         11  14  17      15  19  23
 7  8  9         12  15  18      19  23  27


*/