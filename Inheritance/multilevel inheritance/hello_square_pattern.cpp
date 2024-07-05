// hollow square pattern 
#include<iostream>
using namespace std;

class base1{

    protected :

    int r;

    public :

    void getdatarows(){

        cout << "Enter the Rows : ";
        cin >> r;

    }

};

class base2 : public base1{

        protected :

    int c;

    public :

    void getdatacolumn(){

        cout << "Enter the Column : ";
        cin >> c;

    }

};

class base3 : public base2{

    public :

    void showdata(){

    for (int i = 1;  i <= r; i++ ){

        for (int j = 1; j <= c ; j++ ){

            if ( i == 1 || i == r || j == 1 || j == c){

                cout << " * ";

            }else{ 

                cout << "   ";
            }    

        }

        cout << endl;

    }

    }


};

/*
class combaine : public base1 , public base2 
{

     public :

    void display(){

    for (int i = 1;  i <= r; i++ ){

        for (int j = 1; j <= c ; j++ ){

            if ( i == 1 || i == r || j == 1 || j == c){

                cout << "  ";

            }else{ 

                cout << " * ";
            }    

        }

        cout << endl;

    }

    }

};

*/

int main (){


    base3 d;
    d.getdatarows();
    d.getdatacolumn();
    d.showdata();


}



/*
  OUTPUT 

Enter the Rows : 10
Enter the Column : 5


 *  *  *  *  *
 *           *
 *           *
 *           *
 *           *
 *           *
 *           *
 *           *
 *           *
 *  *  *  *  *

*/