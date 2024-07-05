#include<iostream>
using namespace std;

class Batsman{

	private:

	int bcode;
	char bname[20];
	int inning,notout,runs,batavg;


	int calcalvg(){

		batavg = runs/(inning-notout);

		return batavg;
	}

	public:

	void tackdata(){

		cout << "Enter 4 Digit code number : ";
		cin >> bcode;

		cout << "Enter Batsmen Name : ";
		cin.get();
		cin.getline(bname,20);

		cout << "Enter the Innings : ";
		cin >> inning ;

		cout << "Notout : ";
		cin >> notout ;

		cout << "Enter the run : ";
		cin >> runs ;

		calcalvg();

	}

	void displaydata(){

		cout << "The 4 Digit code number :  " << bcode ;
		cout << "\nThe Batsmen Name      :  " << bname ;
		cout << "\nThe inning is         :  " << inning;
		cout << "\nthe batsmen is        :  " << notout;
		cout << "\nNotout                :  " << runs  ;
		cout << "\nThe run of batsme     :  " << batavg;

	}

};


int main (){

	Batsman a;

	a.tackdata();
	a.displaydata();

	return 0;

}
/*

2. Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
batavg =runs/(innings-notout)
calcavg() Function to compute batavg

Public members:
readdata() Function to accept value from bcode, name, innings, notout and
invoke the function
calcavg() to calculate.
displaydata() Function to display the data members on the screen.

output :


Enter 4 Digit code number : 4568
Enter Batsmen Name : kohali 
Enter the Innings : 5515
Notout : 55  
Enter the run : 85

The 4 Digit code number :  4568
The Batsmen Name      :  kohali
The inning is         :  5515
the batsmen is        :  55
Notout                :  85
The run of batsme     :  0

*/