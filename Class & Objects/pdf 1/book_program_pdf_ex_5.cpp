//pdf program 5 (Book)
#include<iostream>
using namespace std;


class BOOK {

    private:

    int bno;
    int n;
    char btitle[20];
    float bprice;

    int Total_cost (int n){

        float total;

        total=bprice*n;

        return total;
    }


    public :

    void INPUT() {

        cout<< " <===================================>"<<endl;

		cout << "\n    Enter  the   Book  Detail "  << endl ;

        cout<< "\n<===================================>"<< endl << endl;

        cout << "Enter The Book number : ";
		cin >> bno;

		cout << "Enter Book Title : ";
		cin.get();
		cin.getline(btitle,5000);

		cout << "Enter the Book Price  : ";
		cin >> bprice ;

        cout << "The number of copies to purches :  " ;
        cin >> n;

        cout << endl<< endl ;

    }

    void PURCHASE(){
        float total;

		cout << "\n     The  Book Detail "  << endl ;
        cout<< " <===================================>"<< endl << endl ;

		cout << "Book title is                   :  " << btitle << endl;
        cout << "Price per book                  :  $" << bprice << endl;
        total=Total_cost(n);
        cout << "The Book Price is               :  " << total << " /- rupees" << endl;

    }

}; 

int main(){

    BOOK a;

    a.INPUT();
    a.PURCHASE();

    return 0;
}



/*

5. Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies where N
is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOK TITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user.






output:

<===================================>

    Enter  the   Book  Detail

<===================================>

Enter The Book number : 45
Enter Book Title : jivan ni sanjivani
Enter the Book Price  : 105
The number of copies to purches :  27



     The  Book Detail
 <===================================>

Book title is                   :  jivan ni sanjivani
Price per book                  :  $105
The Book Price is               :  2835 /- rupees


*/