#include<iostream>
using namespace std;

class base1{

    protected :

    int row,col;

    public :

    void tackdata_r_c (){

        cout << "Enter the value of Row : ";
        cin >> row;

        cout << "Enter the value of Columns : ";
        cin >> col;

    }

};


class base2{

    protected :

    int a[row][col];
    int B[row][col];
    int c[row][col];
    int  i,j;

    public :

    void tackdata_A (){

        for ( i = 0; i <= row; i++ ){

            for ( j = 0; j <= col; j++ ){

                    cout << "Enter the value of Array : ";
                    cin >> A[i][j];

            }

        }

    }

};

class base3{

    public :

    void tackdata_B (){

        for ( i = 0; i <= row; i++ ){

            for ( j = 0; j <= col; j++ ){

                    cout << "Enter the value of Array : ";
                    cin >> B[i][j];

            }

        }

    }

};


class base4{

    public :

    void disply_total_of_array(){

    cout <<"ARRAY1 = \tARRAY2 = \tARRAY3 = \n ";

    //for Array-A
    for (i=0; i<r; i++) 
		{
			for (j=0; j<c; j++)
			{
				cout << A[i][j];
			}

    cout << "\t\t";

	//for Array-B
    
			for (j=0; j<c; j++)
			{
				cout << B[i][j] ;
			}

    cout << "\t";


	//for total	

		for (j=0; j<c; j++)
		{
				cout <<  A[i][j] + B[i][j]  ;
		}
        cout << "\n";
	}

    cout << "\n";

    }

};




class base5 {

void print_spcae_total(){

    public :

    cout <<"ARRAY1 = \tARRAY2 = \tARRAY3 = \n ";

    //for Array-A ( if table of 5 printf "  " )
    for (i=0; i<r; i++) 
		{
			for (j=0; j<c; j++)
			{

                if (A[i][j] % 5 == 0 ){

				    cout << "  " ;

                }else{ 

				    cout << A[i][j] ;

                }  

            

        }    


    cout << "\t\t";


	//for Array-B ( if table of 10 printf "  " )


        for (j=0; j<c; j++)
			{

                if (B[i][j] % 10 == 0 ){

				    cout << "  " ;

                }else{ 

				    cout << A[i][j] ;

                }  

            }

    cout << "\t";


	//for total	 ( if table of 20 printf "  " )

    for (j=0; j<c; j++)
			{

                if (A[i][j] + B[i][j] % 20 == 0 ){

				    cout << "  " ;

                }else{ 

				    cout << A[i][j] + B[i][j] ;

            }

        }

    }       

    cout << "\n";

}

};

class triangle_total {

protected :

    int uppera = 0, lowera = 0, middlea = 0;
    int upperb = 0, lowerb = 0, middleb = 0;
    int upperc = 0, lowerc = 0, middlec = 0;



public :

// triangle total for array  " A "

void arrayA_triangle_total (){

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {


            if (i <= j) {

                uppera += A[i][j];

            } else if (i >= j) {

                lowera += A[i][j];

            } else {

                middlea += A[i][j];

            }

        }
    }


    cout << "The sum of the lower triangle is : " << uppera << endl ;

    cout << "The sum of the lower triangle is : " << lowera << endl ;

    cout << "The sum of the lower triangle is : " << middlea << endl ;

}
// triangle total for array  " B "

void arrayB_triangle_total (){

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {


            if (i <= j) {

                upperb += A[i][j];

            } else if (i >= j) {

                lowerb += A[i][j];

            } else {

                middleb += A[i][j];

            }

        }
    }


    cout << "The sum of the lower triangle is : " << upperb << endl ;

    cout << "The sum of the lower triangle is : " << lowerb << endl ;

    cout << "The sum of the lower triangle is : " << middleb << endl ;

}

// triangle total for array  " A + B "

void arrayC_triangle_total (){

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {


            if (i <= j) {

                upperc += A[i][j];

            } else if (i >= j) {

                lowerc += A[i][j];

            } else {

                middlec += A[i][j];

            }

        }

    }


    cout << "The sum of the lower triangle is : " << upperc << endl ;

    cout << "The sum of the lower triangle is : " << lowerc << endl ;

    cout << "The sum of the lower triangle is : " << middlec << endl ;

}


};