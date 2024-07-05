#include<iostream>
using namespace std;

class student_details
    {
    private:

        int admno;
        char sname[20];
        float total,eng,math,sci;


    float ctotal(){

        total = eng + sci + math ;
        return total;
    }

    public:

    float tackdata(){

        cout << "Enter a admin number :  ";
        cin >> admno;

        cout << "\nEnter student name :   ";
        cin.get();
        cin.getline(sname,20);

        cout << "\nEnter marks in English :  ";
        cin >> eng;

        cout << "\nEnter marks in Science :  ";
        cin >> sci;

        cout << "\nEnter marks in Maths :  ";
        cin >> math;

        total=ctotal();

    }

    
    int showdata (){
        cout << "\nAdmin Number :  " << admno;
        cout << "\nName          :  " << sname;
        cout << "\nEnglish       :  " << eng;
        cout << "\nScience       :  " << sci;
        cout << "\nMathematics   :  " << math;
        cout << "\nTotal Marks is : "<< total;
    
    }

};



int main (){


    student_details a;

    a.tackdata();
    a.showdata();


    return 0;
}    

/*


1. Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and invoke
ctotal() to calculate total.
Showdata() Function to display all the data members on the screen





output :


Enter a admin number :  102

Enter student name :   lathiya het 

Enter marks in English :  56

Enter marks in Science :  57 

Enter marks in Maths :  77

Admin Number :  102
Name          :  lathiya het 
English       :  56
Science       :  57
Mathematics   :  77
Total Marks is : 190

*/