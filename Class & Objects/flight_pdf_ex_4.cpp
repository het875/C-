#include<iostream>
using namespace std;

class Flight {

    int fnumber;
    char desc[200];
    float distance;
    float fuel;

    float CALFUEL() {

        float fuel = 0;

        if(distance <= 1000) {
        
            fuel = 500;
        
        } else if  (distance > 1000 && distance <= 2000){

            fuel = 1100;

        }else{

            fuel = 2200;
        }

        return fuel;
    }

    public :

    void feedinfo () {

        cout<<"      Enter information"<<endl;

        cout << "Enter Flight number: " ;
        cin >> fnumber;

        cout << "Enter Destination : " ;
        cin >> desc;

        cout << "Enter Distance : " ;
        cin >>  distance ;

        fuel = CALFUEL();

        cout << "Fuel :   " << fuel  << endl;

    }


    void SHOWINFO(){

        cout<<endl;
        cout << "Flight number: " << fnumber << endl;
        cout << "Destination:   " << desc << endl;
        cout << "Distance:      " << distance  << endl;
        cout << "Fuel :         " << fuel  << endl <<endl;


    }

};

int main (){

    Flight a;

    a.feedinfo();
    a.SHOWINFO();

}


/*

4. Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance Fuel
<=1000 500
more than 1000 and <=2000 1100
more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members




output : 


Enter information:
Enter Flight number: 12
Enter Destination : dubai
Enter Distance : 5213
Fuel :   2200

Flight number: 12
Destination:   dubai
Distance:      5213
Fuel :         2200

*/
