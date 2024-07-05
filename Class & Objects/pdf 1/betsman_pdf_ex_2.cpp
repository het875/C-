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

	void readdata(){

		cout << "_________________________________" << endl ;

		cout << "\n   Enter the Bat'sman Scorebord "  << endl ;

		cout << "_________________________________" << endl << endl;

		cout << "Enter 4 Digit code number : ";
		cin >> bcode;

		cout << "Enter Batsmen Name        : ";
		cin.get();
		cin.getline(bname,20);

		cout << "Enter the Innings         : ";
		cin >> inning ;

		cout << "Notout                    : ";
		cin >> notout ;

		cout << "Enter the run             : ";
		cin >> runs ;

		cout << "_________________________________"  << endl;

		calcalvg();

	}

	void displaydata(){

		cout << "\n   The Bat'sman Scorebord "  << endl ;

		cout << "\nThe 4 Digit code number   :  " << bcode ;
		cout << "\nThe Batsmen Name          :  " << bname ;
		cout << "\nThe inning is             :  " << inning;
		cout << "\nthe batsmen run is        :  " << runs;
		cout << "\nNotout                    :  " << notout;
		cout << "\nThe Avarage run of batsme :  " << batavg;

	}

};


int main (){

	Batsman a;

	a.readdata();
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


_________________________________

   Enter the Bat'sman Scorebord
_________________________________

Enter 4 Digit code number : 6524
Enter Batsmen Name        : raj kumar 
Enter the Innings        : 100
Notout                   : 90
Enter the run            : 1050
_________________________________

The 4 Digit code number :  6524
The Batsmen Name        :  raj kumar
The inning is           :  100
the batsmen run is      :  1050
Notout                  :  90
The run of batsme       :  105

*/