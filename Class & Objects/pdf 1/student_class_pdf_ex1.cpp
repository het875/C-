#include<iostream.h>
using namespace std;

class Student{

	private:

	int adnmno;
	char sname[20];
	float eng,math,sci,total;

	float ctotal(){

		total = eng + math + sci;

		return total;
	}

	public:

	void tackdata(){

		cout << "Enter Admin number : ";
		cin >> adnmno;

		cout << "Enter Admin Name : ";
		cin.get();
		cin.getline(sname,20);

		cout << "Enter The marks of English : ";
		cin >> eng ;

		cout << "Enter The marks of Maths : ";
		cin >> math ;

		cout << "Enter The marks of Scince : ";
		cin >> sci ;

		ctotal();

	}

	void showdata(){

		cout << "The admin number       :  " << adnmno;
		cout << "\nThe admin name       :  " << sname;
		cout << "\nEnglish marks is     :  " << eng;
		cout << "\nMaths marks is       :  " << math;
		cout << "\nScience marks is    :  " << sci;
		cout << "\nMarks Total           :  " << total;

	}

};


int main (){

	Student a;

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


Enter Admin number : 103
Enter Admin Name : het lathiya
Enter The marks of English : 33
Enter The marks of Maths : 59
Enter The marks of Scince : 59

The admin number       :  103
The admin name       :  het lathiya
English marks is     :  33
Maths marks is       :  59
Science marks is    :  59
Marks Total           :  151

*/