//pdf program 5 (Book)
#include<iostream>
using namespace std;


class REPORT {

    private:

    int adno;
    char name[20];
    float marks[5],avg;

    int GETAVG(){
        avg = 0.0;

        for(int i = 1;  i <= 5; i++){
            
            cout << "Enter Marks in Subject "<<i<<" : ";

            cin >> marks[i];

            avg += marks[i];

            }

        return avg/5;

    }


    public :

    void READINFO() {

        cout<< "_______________________________________"<<endl;

		cout << "\n    Enter  the  REPORT   Detail "  << endl ;

        cout<< "_______________________________________"<<endl << endl;


        cout << "Enter The admission number : ";
		cin >> adno;

		cout << "Enter  Name                : ";
		cin.get();
		cin.getline(name,20);

        GETAVG ();

        cout << endl<< endl ;

    }

    void DISPLAYINFO(){
      

		cout << "\n     The REPORT Detail "  << endl ;
        cout<< " ==================================="<< endl << endl ;

		cout << "Admission number is             :  " << adno << endl;
        cout << "Name is                         :  " << name << endl;

        for(int i = 1; i <= 5; i++){
            cout << "Marks of subject " << i << " : " << marks[i] <<endl;
        } 
        cout << "\nAverage mark is                :  " << avg << endl;
    }

}; 

int main(){

    REPORT a;

    a.READINFO();
    a.DISPLAYINFO();

    return 0;
}



/*


6. Define a class REPORT with the following specification:
Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject
Public members:
READINFO() function to accept values for adno, name, marks. Invoke the function
GETAVG()
DISPLAYINFO() function to display all data members of a report on the screen.




output:

_______________________________________

    Enter  the  REPORT   Detail
_______________________________________

Enter The admission number : 101
Enter  Name                : RAJ
Enter Marks in Subject1: 90
Enter Marks in Subject2: 80
Enter Marks in Subject3: 75
Enter Marks in Subject4: 78
Enter Marks in Subject5: 98



     The REPORT Detail
 <===================================>

Admission number is             :  101
Name is                         :  RAJ
Marks of subject 1 : 90
Marks of subject 2 : 80
Marks of subject 3 : 75
Marks of subject 4 : 78
Marks of subject 5 : 196

Average mark is               :  196

*/