#include<iostream>
using namespace std;

class base1{

    protected :

    int a;

    public :

    void getdataA (){

        cout << "Enter the value of A : ";
        cin >> a;

    }

};

class base2 : public base1 {

    protected :

    int b;

    public :

    void getdataB(){

        cout << "Enter the value of B : ";
        cin >> b;

    }

};

class derived : public base2 {

    public :

    void display(){

        cout << "The poduct of A end B is : " << a*b << endl;

        a = a + b ;
        b = a - b ;
        a = a - b ;

        cout << "The value of A end B after swap  " << a <<" end "<< b << endl;

    }

};

int main (){

    derived d;
    d.getdataA();
    d.getdataB();
    d.display();

}


/*

    OUTPUT 


Enter the value of A : 5
Enter the value of B : 10

The poduct of A end B is : 50

The value of A end B after swap  10 end 5

*/
