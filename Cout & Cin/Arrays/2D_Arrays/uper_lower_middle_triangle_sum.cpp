#include<iostream>
using namespace std;

int main (){

    int i,n,j,up=0,down=0,middle=0,k;
    int a[100][100];

    cout<<"Enter the size Array : ";
    cin>>n;

    cout<<endl;

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){

            cout<<"Enter the elements : ";
            cin>>a[i][j];

        }
    }

    cout<<endl;

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){

            cout<<"\t"<<a[i][j];

        }
        cout<<endl;
        cout<<endl;
    }

   // cout<<endl<<"upper triangle & Down triangle & middle  triangle ";
   // cout<<endl;

    for(i=0; i<n; i++){

        for(j=0; j<n; j++){

            if(i<j){

               // cout<<"   "<<a[i][j];
                up+=+a[i][j]; //up= up + a[i][j]
            
            }else if(i>j){

               // cout<<"\t"<<a[i][j];
                down+=a[i][j]; //down= down + a[i][j]
            
            }else if(i==j){
            
                //cout<<"\t"<<a[i][j];
                middle+=a[i][j]; //middle= middle + a[i][j]
            
            }
        }


    }
    
        cout<<"\n uper tringle total is : "<<up;
        cout<<"\n lower tringle total is : "<<down;
        cout<<"\n middle  Total is : "<<middle;

}

/*

Enter the size Array : 3

Enter the elements : 1
Enter the elements : 2
Enter the elements : 3
Enter the elements : 4
Enter the elements : 5
Enter the elements : 6
Enter the elements : 7
Enter the elements : 8
Enter the elements : 9

        1       2       3

        4       5       6

        7       8       9

 uper tringle total is : 11  // 11=3+2+6
 lower tringle total is : 19 // 19=4+7+8
 middle  Total is : 15       // 15=1+5+9 

*/