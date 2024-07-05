//pdf program 3
#include<iostream>
using namespace std;

class TEST {

    private :

    int TestCode;
    char des[5000];
    int NoCandidate;
    int noofcenters;

    int Calculate(){

        return (NoCandidate / 100 + 1);

    }

    public :

    void SCHEDULE() {

        cout << "-----------------------------------" << endl ;

		cout << "\n   Enter the  Candidate Detail "  << endl ;

		cout << "-----------------------------------" << endl << endl;

        cout << "Enter Test Code : ";
		cin >> TestCode;

		cout << "Enter Description : ";
		cin.get();
		cin.getline(des,5000);

		cout << "Enter the Number of Candidate  : ";
		cin >> NoCandidate ;

        Calculate ();

        cout << endl;

    }

    void display(){

		cout << "\n     The  Candidate Detai "  << endl ;
		cout << "-----------------------------------" << endl << endl;

        cout << "The Test Code       :  " << TestCode << endl;
		cout << "Description   :  " << des << endl;
		cout << "The Number of candidate is :  " << NoCandidate << endl;
        cout << "The Number of center is :  " << Calculate() << endl;

    }


};

int main (){

    TEST a;

    a.SCHEDULE();
    a.display();

    return 0;
}


/*

3. Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members

- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members


output :

-----------------------------------

   Enter the  Candidate Detail     
-----------------------------------

Enter Test Code : 65
Enter Description : the best is verry good
Enter the Number of Candidate  : 65


     The  Candidate Detai 
-----------------------------------    

The Test Code       :  65
Description   :  the best is verry good
The Number of candidate is :  65       
The Number of center is :  1


*/
