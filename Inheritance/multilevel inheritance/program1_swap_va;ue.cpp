#include<iostream>
using namespace std;

class base1 {

    protected : 

    int a;

    public :

    void getdataA (){

        cout << endl;

        cout << "Enter the value of A : ";
        cin >> a;


    }

};

class base2 : public base1{

    protected :

    int b;

    public :

    void getdataB (){

        cout << "Enter the value of B : ";
        cin >> b;

        cout << endl;

    }

};


class base3 : public base2 {  

    public :

    void showdata(){

            a = a ^ b ;
            b = a ^ b ;
            a = a ^ b ;

        cout << "======== After swap Value (using ^ ) =========" << endl << endl
                << "        Value of A is : " << a << endl
                << "        Value of B is : " << b << endl;

    }

};


class derived : public base3  {

    public :

    void display (){

        cout << "The product of A and B is : " << a * b << endl << endl;

            a = a * b ;
            b = a / b ;
            a = a / b ;

        cout << "======== After swap Value (using * / ) =========" << endl << endl
                << "        Value of A is : " << a << endl
                << "        Value of B is : " << b << endl;

    }

};

int main () {

    derived d;
    d.getdataA();
    d.getdataB();
    d.display();
    //d.showdata();



}

/* 

    OUTPUT 


Enter the value of A : 20
Enter the value of B : 30

The product of A and B is : 600

======== After swap Value (using * / ) =========

 Value of A is : 30
 Value of B is : 20


======== After swap Value (using ^ ) =========

 Value of A is : 20
 Value of B is : 30



*/