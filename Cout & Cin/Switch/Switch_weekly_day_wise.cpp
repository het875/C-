#include<iostream>
using namespace std;

int main (){

    int a;

    cout << " 1 Sunday. \n 2 Monday. \n 3 Tuesday. \n 4 Wednesday. \n 5 Thursday. \n 6 Friday. \n 7 Saturday.\n";
    
    cout << "\n Enter the vaule : ";
    cin >> a;


    switch(a){

        case  1:    
            cout << " This is Sunday ";
            break;
    
        case  2:    
            cout << " This is Monday ";
            break;

        case  3:    
            cout << " This is Tuesday ";
            break;

        case  4:    
            cout << " This is Wednesday ";
            break;

        case  5:    
            cout << " This is Thursday ";
            break;

        case  6:    
            cout << " This is Friday ";
            break;

        case  7:    
            cout << " This is Saturday ";
            break;

        default :
            cout << " This is Wrong value ";

    }


}